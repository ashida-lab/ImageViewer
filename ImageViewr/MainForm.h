#pragma once

#include "yaCommon.h"
#include "yaString.h"
#include "yaImageStack.h"
#include "yaEditImage.h"
#include "yaCipher.h"
#include "deconvForm.h"
#include "yaComplexMath.h"
//#include "TSX1_SAR.h"
#include "level1Product.h"

#include <iostream>

#include "gdalwarper.h"

#include <omp.h>

#include "OpenGLSimpleAdapter.h"

#pragma comment( lib, "opengl32.lib" )
#pragma comment( lib, "glu32.lib" )
#pragma comment( lib, "gdi32.lib" )
#pragma comment( lib, "User32.lib" )

namespace sample11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Security::Cryptography;

	using namespace System::Drawing::Imaging;
	using namespace System::Collections::Generic;

	using namespace System::Xml::Serialization;
	using namespace System::IO;

	cv::Mat mOrgImg;
	yaImageStack mImageStack[MAX_IMAGE_STACK];
	int layer_num[MAX_IMAGE_STACK];
	int load_image_count = 0;//読み込まれている画像数
	int checked_image_count = 0;//チェックされている画像数
	int active_image_layer = 0;//最前面のレイヤー
	int behind_image_layer = 0;//ひとつ後ろのレイヤー
	int clicked_index = 0;

	float scale_facter = 1;
	int image_view_center_x, image_view_center_y;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		BindingList<System::Windows::Forms::PictureBox^>^ listPictureBox;

	public:
		MainForm(void)
		{
			InitializeComponent();


			//
			//TODO: Add the constructor code here
		//
			listPictureBox = gcnew BindingList < System::Windows::Forms::PictureBox^>();

			listPictureBox->Add(pictureBox1);
			listPictureBox->Add(pictureBox2);
			listPictureBox->Add(pictureBox3);
			listPictureBox->Add(pictureBox4);
			listPictureBox->Add(pictureBox5);
			listPictureBox->Add(pictureBox6);
			listPictureBox->Add(pictureBox7);
			listPictureBox->Add(pictureBox8);
			listPictureBox->Add(pictureBox9);
			listPictureBox->Add(pictureBox10);
			listPictureBox->Add(pictureBox11);
			listPictureBox->Add(pictureBox12);

			for (int i = 0; i < 12; i++) {
				listPictureBox[i]->MouseDown += gcnew MouseEventHandler(this, &sample11::MainForm::myMouseDown);
				listPictureBox[i]->MouseWheel += gcnew MouseEventHandler(this, &sample11::MainForm::myMouseWheel);
				listPictureBox[i]->MouseMove += gcnew MouseEventHandler(this, &sample11::MainForm::mainPanel_MouseMove);
			}
			earthPanel->MouseWheel += gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseWheel);

			for (int i = 0; i < MAX_IMAGE_STACK; i++) {
				layer_num[i] = i;
			}


			//暗号化テスト
			/*System::String^ original = yaCipher::ShowNetworkInterfaces();

			RijndaelManaged^ myRijndael = gcnew RijndaelManaged();

			array<Byte>^ key;
			array<Byte>^ iv;
			yaCipher::GenerateKeyFromPassword(
				"test", myRijndael->Key, myRijndael->IV);
			//myRijndael->Key = key;
			//myRijndael->IV = iv;

			// Encrypt the string to an array of bytes.
			array<Byte>^ encrypted = yaCipher::encryptStringToBytes_AES(original, myRijndael->Key, myRijndael->IV);
			System::Text::Encoding^ euc = System::Text::Encoding::GetEncoding("utf-8");

			// Decrypt the bytes to a string.
			System::String^ roundtrip = yaCipher::decryptStringFromBytes_AES(encrypted, myRijndael->Key, myRijndael->IV);

			//Display the original data and the decrypted data.
			Console::WriteLine("Original:   {0}", original);
			Console::WriteLine("encrypted:   {0}", euc->GetString(encrypted));
			Console::WriteLine("Round Trip: {0}", roundtrip);*/

			this->Text = "Image Viewer";
			this->toolStripStatusLabel1->Text = System::String::Format("No Image.");

			//exit(-1);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Panel^  mainPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  subPanel;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::CheckBox^  logViewCheckBox;
	private: System::Windows::Forms::ComboBox^  behindImgComboBox;

	private: System::Windows::Forms::ComboBox^  activeImgComboBox;
	private: System::Windows::Forms::TrackBar^  alphaTrackBar;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  rearrangeButton;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changeDetectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sARToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  interferogramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cCDToolStripMenuItem;
	private: System::Windows::Forms::Panel^  earthPanel;
	private: System::Windows::Forms::ToolStripMenuItem^  saveTipToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveTipFileDialog;
	private: System::Windows::Forms::ToolStripMenuItem^  optFlowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  angleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  featureDetectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  goodToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  harrisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fastToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  siftToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  surfToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mserToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  orbToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  panSharpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveRandamToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  subAprtureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  entropyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  filterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bilateralToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deconvolutionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  histogramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  waveletToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  leeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  interferometricLandUseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveWarpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  open2BandSLCToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  subCCDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  look2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cCDoriginalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveObjToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openTSXXmlToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  saveObj2ToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->open2BandSLCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveTipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveRandamToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveWarpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveObjToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openTSXXmlToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeDetectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panSharpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optFlowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sARToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->interferogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cCDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cCDoriginalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->subCCDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->angleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->subAprtureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->interferometricLandUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->look2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->featureDetectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->goodToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->harrisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siftToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->surfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->orbToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bilateralToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->waveletToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->leeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->entropyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deconvolutionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->histogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->subPanel = (gcnew System::Windows::Forms::Panel());
			this->earthPanel = (gcnew System::Windows::Forms::Panel());
			this->rearrangeButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->alphaTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->behindImgComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->activeImgComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->logViewCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->saveTipFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveObj2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->mainPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->subPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alphaTrackBar))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 426);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(829, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(58, 17);
			this->toolStripStatusLabel1->Text = L"No image";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(829, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->openToolStripMenuItem,
					this->open2BandSLCToolStripMenuItem, this->openColorToolStripMenuItem, this->saveTipToolStripMenuItem, this->saveRandamToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveWarpToolStripMenuItem, this->saveObjToolStripMenuItem, this->saveObj2ToolStripMenuItem,
					this->openTSXXmlToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// open2BandSLCToolStripMenuItem
			// 
			this->open2BandSLCToolStripMenuItem->Name = L"open2BandSLCToolStripMenuItem";
			this->open2BandSLCToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->open2BandSLCToolStripMenuItem->Text = L"Open(2Band SLC)";
			this->open2BandSLCToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::open2BandSLCToolStripMenuItem_Click);
			// 
			// openColorToolStripMenuItem
			// 
			this->openColorToolStripMenuItem->Name = L"openColorToolStripMenuItem";
			this->openColorToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->openColorToolStripMenuItem->Text = L"Open(Color)";
			this->openColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openColorToolStripMenuItem_Click);
			// 
			// saveTipToolStripMenuItem
			// 
			this->saveTipToolStripMenuItem->Name = L"saveTipToolStripMenuItem";
			this->saveTipToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveTipToolStripMenuItem->Text = L"Save Tip";
			this->saveTipToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveTipToolStripMenuItem_Click);
			// 
			// saveRandamToolStripMenuItem
			// 
			this->saveRandamToolStripMenuItem->Name = L"saveRandamToolStripMenuItem";
			this->saveRandamToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveRandamToolStripMenuItem->Text = L"Save Random";
			this->saveRandamToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveRandamToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// saveWarpToolStripMenuItem
			// 
			this->saveWarpToolStripMenuItem->Name = L"saveWarpToolStripMenuItem";
			this->saveWarpToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveWarpToolStripMenuItem->Text = L"Save Warp";
			this->saveWarpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveWarpToolStripMenuItem_Click);
			// 
			// saveObjToolStripMenuItem
			// 
			this->saveObjToolStripMenuItem->Name = L"saveObjToolStripMenuItem";
			this->saveObjToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveObjToolStripMenuItem->Text = L"Save Obj";
			this->saveObjToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveObjToolStripMenuItem_Click);
			// 
			// openTSXXmlToolStripMenuItem
			// 
			this->openTSXXmlToolStripMenuItem->Name = L"openTSXXmlToolStripMenuItem";
			this->openTSXXmlToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->openTSXXmlToolStripMenuItem->Text = L"Open TSX xml";
			this->openTSXXmlToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openTSXXmlToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->changeDetectToolStripMenuItem,
					this->panSharpToolStripMenuItem, this->optFlowToolStripMenuItem, this->addToolStripMenuItem, this->cutToolStripMenuItem, this->sARToolStripMenuItem,
					this->featureDetectToolStripMenuItem, this->filterToolStripMenuItem, this->entropyToolStripMenuItem, this->deconvolutionToolStripMenuItem,
					this->histogramToolStripMenuItem, this->testToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// changeDetectToolStripMenuItem
			// 
			this->changeDetectToolStripMenuItem->Name = L"changeDetectToolStripMenuItem";
			this->changeDetectToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->changeDetectToolStripMenuItem->Text = L"ChangeDetect";
			this->changeDetectToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::changeDetectToolStripMenuItem_Click);
			// 
			// panSharpToolStripMenuItem
			// 
			this->panSharpToolStripMenuItem->Name = L"panSharpToolStripMenuItem";
			this->panSharpToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->panSharpToolStripMenuItem->Text = L"PanSharp";
			this->panSharpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::panSharpToolStripMenuItem_Click);
			// 
			// optFlowToolStripMenuItem
			// 
			this->optFlowToolStripMenuItem->Name = L"optFlowToolStripMenuItem";
			this->optFlowToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->optFlowToolStripMenuItem->Text = L"OptFlow";
			this->optFlowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::optFlowToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::addToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::cutToolStripMenuItem_Click);
			// 
			// sARToolStripMenuItem
			// 
			this->sARToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->interferogramToolStripMenuItem,
					this->cCDToolStripMenuItem, this->cCDoriginalToolStripMenuItem, this->subCCDToolStripMenuItem, this->angleToolStripMenuItem,
					this->subAprtureToolStripMenuItem, this->interferometricLandUseToolStripMenuItem, this->lookToolStripMenuItem, this->look2ToolStripMenuItem
			});
			this->sARToolStripMenuItem->Name = L"sARToolStripMenuItem";
			this->sARToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sARToolStripMenuItem->Text = L"SAR";
			// 
			// interferogramToolStripMenuItem
			// 
			this->interferogramToolStripMenuItem->Name = L"interferogramToolStripMenuItem";
			this->interferogramToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->interferogramToolStripMenuItem->Text = L"Interferogram";
			this->interferogramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::interferogramToolStripMenuItem_Click);
			// 
			// cCDToolStripMenuItem
			// 
			this->cCDToolStripMenuItem->Name = L"cCDToolStripMenuItem";
			this->cCDToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->cCDToolStripMenuItem->Text = L"CCD";
			this->cCDToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::cCDToolStripMenuItem_Click);
			// 
			// cCDoriginalToolStripMenuItem
			// 
			this->cCDoriginalToolStripMenuItem->Name = L"cCDoriginalToolStripMenuItem";
			this->cCDoriginalToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->cCDoriginalToolStripMenuItem->Text = L"CCD(original)";
			this->cCDoriginalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::cCDoriginalToolStripMenuItem_Click);
			// 
			// subCCDToolStripMenuItem
			// 
			this->subCCDToolStripMenuItem->Name = L"subCCDToolStripMenuItem";
			this->subCCDToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->subCCDToolStripMenuItem->Text = L"Sub-CCD";
			this->subCCDToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::subCCDToolStripMenuItem_Click);
			// 
			// angleToolStripMenuItem
			// 
			this->angleToolStripMenuItem->Name = L"angleToolStripMenuItem";
			this->angleToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->angleToolStripMenuItem->Text = L"Angle";
			this->angleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::angleToolStripMenuItem_Click);
			// 
			// subAprtureToolStripMenuItem
			// 
			this->subAprtureToolStripMenuItem->Name = L"subAprtureToolStripMenuItem";
			this->subAprtureToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->subAprtureToolStripMenuItem->Text = L"SubAperture";
			this->subAprtureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::subAprtureToolStripMenuItem_Click);
			// 
			// interferometricLandUseToolStripMenuItem
			// 
			this->interferometricLandUseToolStripMenuItem->Name = L"interferometricLandUseToolStripMenuItem";
			this->interferometricLandUseToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->interferometricLandUseToolStripMenuItem->Text = L"Interferometric Land-Use";
			this->interferometricLandUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::interferometricLandUseToolStripMenuItem_Click);
			// 
			// lookToolStripMenuItem
			// 
			this->lookToolStripMenuItem->Name = L"lookToolStripMenuItem";
			this->lookToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->lookToolStripMenuItem->Text = L"Look";
			this->lookToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::lookToolStripMenuItem_Click);
			// 
			// look2ToolStripMenuItem
			// 
			this->look2ToolStripMenuItem->Name = L"look2ToolStripMenuItem";
			this->look2ToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->look2ToolStripMenuItem->Text = L"Look2(deepLearning)";
			this->look2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::look2ToolStripMenuItem_Click);
			// 
			// featureDetectToolStripMenuItem
			// 
			this->featureDetectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->goodToolStripMenuItem,
					this->harrisToolStripMenuItem, this->fastToolStripMenuItem, this->siftToolStripMenuItem, this->surfToolStripMenuItem, this->mserToolStripMenuItem,
					this->orbToolStripMenuItem
			});
			this->featureDetectToolStripMenuItem->Name = L"featureDetectToolStripMenuItem";
			this->featureDetectToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->featureDetectToolStripMenuItem->Text = L"FeatureDetect";
			// 
			// goodToolStripMenuItem
			// 
			this->goodToolStripMenuItem->Name = L"goodToolStripMenuItem";
			this->goodToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->goodToolStripMenuItem->Text = L"Good";
			this->goodToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::goodToolStripMenuItem_Click);
			// 
			// harrisToolStripMenuItem
			// 
			this->harrisToolStripMenuItem->Name = L"harrisToolStripMenuItem";
			this->harrisToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->harrisToolStripMenuItem->Text = L"Harris";
			this->harrisToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::harrisToolStripMenuItem_Click);
			// 
			// fastToolStripMenuItem
			// 
			this->fastToolStripMenuItem->Name = L"fastToolStripMenuItem";
			this->fastToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->fastToolStripMenuItem->Text = L"Fast";
			this->fastToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::fastToolStripMenuItem_Click);
			// 
			// siftToolStripMenuItem
			// 
			this->siftToolStripMenuItem->Name = L"siftToolStripMenuItem";
			this->siftToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->siftToolStripMenuItem->Text = L"Sift";
			// 
			// surfToolStripMenuItem
			// 
			this->surfToolStripMenuItem->Name = L"surfToolStripMenuItem";
			this->surfToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->surfToolStripMenuItem->Text = L"Surf";
			// 
			// mserToolStripMenuItem
			// 
			this->mserToolStripMenuItem->Name = L"mserToolStripMenuItem";
			this->mserToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->mserToolStripMenuItem->Text = L"Mser";
			this->mserToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::mserToolStripMenuItem_Click);
			// 
			// orbToolStripMenuItem
			// 
			this->orbToolStripMenuItem->Name = L"orbToolStripMenuItem";
			this->orbToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->orbToolStripMenuItem->Text = L"Orb";
			this->orbToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::orbToolStripMenuItem_Click);
			// 
			// filterToolStripMenuItem
			// 
			this->filterToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nLToolStripMenuItem,
					this->bilateralToolStripMenuItem, this->waveletToolStripMenuItem, this->leeToolStripMenuItem
			});
			this->filterToolStripMenuItem->Name = L"filterToolStripMenuItem";
			this->filterToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->filterToolStripMenuItem->Text = L"Filter";
			// 
			// nLToolStripMenuItem
			// 
			this->nLToolStripMenuItem->Name = L"nLToolStripMenuItem";
			this->nLToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->nLToolStripMenuItem->Text = L"NL";
			this->nLToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::nLToolStripMenuItem_Click);
			// 
			// bilateralToolStripMenuItem
			// 
			this->bilateralToolStripMenuItem->Name = L"bilateralToolStripMenuItem";
			this->bilateralToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->bilateralToolStripMenuItem->Text = L"Bilateral";
			this->bilateralToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::bilateralToolStripMenuItem_Click);
			// 
			// waveletToolStripMenuItem
			// 
			this->waveletToolStripMenuItem->Name = L"waveletToolStripMenuItem";
			this->waveletToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->waveletToolStripMenuItem->Text = L"Wavelet";
			this->waveletToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::waveletToolStripMenuItem_Click);
			// 
			// leeToolStripMenuItem
			// 
			this->leeToolStripMenuItem->Name = L"leeToolStripMenuItem";
			this->leeToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->leeToolStripMenuItem->Text = L"Lee";
			this->leeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::leeToolStripMenuItem_Click);
			// 
			// entropyToolStripMenuItem
			// 
			this->entropyToolStripMenuItem->Name = L"entropyToolStripMenuItem";
			this->entropyToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->entropyToolStripMenuItem->Text = L"Entropy";
			this->entropyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::entropyToolStripMenuItem_Click);
			// 
			// deconvolutionToolStripMenuItem
			// 
			this->deconvolutionToolStripMenuItem->Name = L"deconvolutionToolStripMenuItem";
			this->deconvolutionToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->deconvolutionToolStripMenuItem->Text = L"Deconvolution";
			this->deconvolutionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deconvolutionToolStripMenuItem_Click);
			// 
			// histogramToolStripMenuItem
			// 
			this->histogramToolStripMenuItem->Name = L"histogramToolStripMenuItem";
			this->histogramToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->histogramToolStripMenuItem->Text = L"Histogram";
			this->histogramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::histogramToolStripMenuItem_Click);
			// 
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->testToolStripMenuItem->Text = L"test";
			this->testToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::testToolStripMenuItem_Click);
			// 
			// mainPanel
			// 
			this->mainPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mainPanel->BackColor = System::Drawing::SystemColors::Control;
			this->mainPanel->Controls->Add(this->pictureBox12);
			this->mainPanel->Controls->Add(this->pictureBox11);
			this->mainPanel->Controls->Add(this->pictureBox10);
			this->mainPanel->Controls->Add(this->pictureBox9);
			this->mainPanel->Controls->Add(this->pictureBox8);
			this->mainPanel->Controls->Add(this->pictureBox7);
			this->mainPanel->Controls->Add(this->pictureBox6);
			this->mainPanel->Controls->Add(this->pictureBox5);
			this->mainPanel->Controls->Add(this->pictureBox4);
			this->mainPanel->Controls->Add(this->pictureBox3);
			this->mainPanel->Controls->Add(this->pictureBox2);
			this->mainPanel->Controls->Add(this->pictureBox1);
			this->mainPanel->Location = System::Drawing::Point(12, 27);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(509, 396);
			this->mainPanel->TabIndex = 2;
			this->mainPanel->Click += gcnew System::EventHandler(this, &MainForm::mainPanel_Click);
			this->mainPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::mainPanel_MouseMove);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox12->Location = System::Drawing::Point(379, 247);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(125, 120);
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MainForm::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->Location = System::Drawing::Point(254, 247);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(125, 120);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MainForm::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox10->Location = System::Drawing::Point(129, 247);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(125, 120);
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MainForm::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->Location = System::Drawing::Point(4, 247);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(125, 120);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MainForm::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->Location = System::Drawing::Point(379, 127);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(125, 120);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MainForm::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox7->Location = System::Drawing::Point(254, 127);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(125, 120);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MainForm::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Location = System::Drawing::Point(129, 127);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(125, 120);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MainForm::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox5->Location = System::Drawing::Point(4, 127);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(125, 120);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox4->Location = System::Drawing::Point(379, 7);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(125, 120);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MainForm::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(254, 7);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(125, 120);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pictureBox2->Location = System::Drawing::Point(129, 7);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(125, 120);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(4, 7);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(125, 120);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// subPanel
			// 
			this->subPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->subPanel->BackColor = System::Drawing::SystemColors::Control;
			this->subPanel->Controls->Add(this->earthPanel);
			this->subPanel->Controls->Add(this->rearrangeButton);
			this->subPanel->Controls->Add(this->label3);
			this->subPanel->Controls->Add(this->label2);
			this->subPanel->Controls->Add(this->label1);
			this->subPanel->Controls->Add(this->alphaTrackBar);
			this->subPanel->Controls->Add(this->behindImgComboBox);
			this->subPanel->Controls->Add(this->activeImgComboBox);
			this->subPanel->Controls->Add(this->logViewCheckBox);
			this->subPanel->Location = System::Drawing::Point(527, 28);
			this->subPanel->Name = L"subPanel";
			this->subPanel->Size = System::Drawing::Size(290, 395);
			this->subPanel->TabIndex = 3;
			this->subPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::subPanel_Paint);
			// 
			// earthPanel
			// 
			this->earthPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->earthPanel->Location = System::Drawing::Point(3, 145);
			this->earthPanel->Name = L"earthPanel";
			this->earthPanel->Size = System::Drawing::Size(284, 247);
			this->earthPanel->TabIndex = 4;
			this->earthPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::earthPanel_Paint);
			this->earthPanel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::earthPanel_MouseClick);
			// 
			// rearrangeButton
			// 
			this->rearrangeButton->BackColor = System::Drawing::SystemColors::Control;
			this->rearrangeButton->Location = System::Drawing::Point(7, 55);
			this->rearrangeButton->Name = L"rearrangeButton";
			this->rearrangeButton->Size = System::Drawing::Size(128, 23);
			this->rearrangeButton->TabIndex = 7;
			this->rearrangeButton->Text = L"Rough Registration";
			this->rearrangeButton->UseVisualStyleBackColor = false;
			this->rearrangeButton->Click += gcnew System::EventHandler(this, &MainForm::rearrangeButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 12);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Transparency";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"2nd image";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 12);
			this->label1->TabIndex = 4;
			this->label1->Text = L"1st image";
			// 
			// alphaTrackBar
			// 
			this->alphaTrackBar->LargeChange = 2;
			this->alphaTrackBar->Location = System::Drawing::Point(84, 81);
			this->alphaTrackBar->Name = L"alphaTrackBar";
			this->alphaTrackBar->Size = System::Drawing::Size(194, 45);
			this->alphaTrackBar->TabIndex = 3;
			this->alphaTrackBar->Scroll += gcnew System::EventHandler(this, &MainForm::alphaTrackBar_Scroll);
			// 
			// behindImgComboBox
			// 
			this->behindImgComboBox->FormattingEnabled = true;
			this->behindImgComboBox->Location = System::Drawing::Point(67, 29);
			this->behindImgComboBox->Name = L"behindImgComboBox";
			this->behindImgComboBox->Size = System::Drawing::Size(220, 20);
			this->behindImgComboBox->TabIndex = 2;
			this->behindImgComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::behindImgComboBox_SelectedIndexChanged);
			// 
			// activeImgComboBox
			// 
			this->activeImgComboBox->FormattingEnabled = true;
			this->activeImgComboBox->Location = System::Drawing::Point(67, 3);
			this->activeImgComboBox->Name = L"activeImgComboBox";
			this->activeImgComboBox->Size = System::Drawing::Size(220, 20);
			this->activeImgComboBox->TabIndex = 1;
			this->activeImgComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::activeImgComboBox_SelectedIndexChanged);
			// 
			// logViewCheckBox
			// 
			this->logViewCheckBox->AutoSize = true;
			this->logViewCheckBox->Location = System::Drawing::Point(7, 110);
			this->logViewCheckBox->Name = L"logViewCheckBox";
			this->logViewCheckBox->Size = System::Drawing::Size(71, 16);
			this->logViewCheckBox->TabIndex = 0;
			this->logViewCheckBox->Text = L"Log View";
			this->logViewCheckBox->UseVisualStyleBackColor = true;
			this->logViewCheckBox->CheckStateChanged += gcnew System::EventHandler(this, &MainForm::logViewCheckBox_CheckStateChanged);
			// 
			// saveObj2ToolStripMenuItem
			// 
			this->saveObj2ToolStripMenuItem->Name = L"saveObj2ToolStripMenuItem";
			this->saveObj2ToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveObj2ToolStripMenuItem->Text = L"Save Obj2";
			this->saveObj2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveObj2ToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(829, 448);
			this->Controls->Add(this->subPanel);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_SizeChanged);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->mainPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->subPanel->ResumeLayout(false);
			this->subPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alphaTrackBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: OpenGLSimpleAdapter^ GLAdapter;
	private: System::Drawing::Point startPoint;
	private: System::Drawing::Rectangle theRectangle;

	private: System::Void MainForm_SizeChanged(System::Object^  sender, System::EventArgs^  e)
	{
		int i;

		int width = (int)((mainPanel->Width - 8) / 4 / 4) * 4;//拡大した時にフリンジが出ないように、４の倍数にする
		int height = (int)((mainPanel->Height - 8) / 3 / 4) * 4;

		for (i = 0; i < 12; i++) {
			listPictureBox[i]->Location = System::Drawing::Point(i % 4 * width, i / 4 * height);
			listPictureBox[i]->Width = width;
			listPictureBox[i]->Height = height;
		}

		redrawImage();

		panelRefresh();
	}

			 //マウスイベント
			 //Mouse Event
	private: System::Void myMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		printf("[Mouce down]\n");

		if (e->Button != System::Windows::Forms::MouseButtons::Left &&e->Button != System::Windows::Forms::MouseButtons::Right) {
			return;
		}

		Control^ control = dynamic_cast<Control^>(sender);

		startPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Cursor = System::Windows::Forms::Cursors::SizeAll;
			control->MouseMove += gcnew MouseEventHandler(this, &sample11::MainForm::myMouseMoveLeft);
			control->MouseUp += gcnew MouseEventHandler(this, &sample11::MainForm::myMouseUpLeft);
		}
		else {
			control->MouseMove += gcnew MouseEventHandler(this, &sample11::MainForm::myMouseMoveRight);
			control->MouseUp += gcnew MouseEventHandler(this, &sample11::MainForm::myMouseUpRight);

			if (theRectangle.Width != 0) {
				redrawImage();
			}

			theRectangle = System::Drawing::Rectangle(startPoint.X, startPoint.Y, 0, 0);
		}
	}

	private: System::Void myMouseMoveRight(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		if (theRectangle.Width != 0) {
			ControlPaint::DrawReversibleFrame(theRectangle, this->BackColor, FrameStyle::Dashed);
		}

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

		int width = endPoint.X - startPoint.X;
		int height = endPoint.Y - startPoint.Y;
		theRectangle = System::Drawing::Rectangle(startPoint.X, startPoint.Y, width, height);

		//printf("%d %d\n", width, height);

		ControlPaint::DrawReversibleFrame(theRectangle, this->BackColor, FrameStyle::Dashed);
	}

	private: System::Void myMouseUpRight(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		ControlPaint::DrawReversibleFrame(theRectangle, this->BackColor, FrameStyle::Dashed);

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

		int released_index = -1;

		for (int i = 0; i < 12; i++) {
			System::Drawing::Point tmpPoint = mainPanel->PointToScreen(listPictureBox[i]->Location);

			printf("%d %d %d %d\n", startPoint.X, startPoint.Y, tmpPoint.X, tmpPoint.Y);
			if (tmpPoint.X <= startPoint.X&&startPoint.X < tmpPoint.X + listPictureBox[i]->Width
				&&tmpPoint.Y <= startPoint.Y&&startPoint.Y < tmpPoint.Y + listPictureBox[i]->Height) {
				clicked_index = i;
				printf("[start] %d\n", clicked_index);
			}

			if (tmpPoint.X <= endPoint.X&&endPoint.X < tmpPoint.X + listPictureBox[i]->Width
				&&tmpPoint.Y <= endPoint.Y&&endPoint.Y < tmpPoint.Y + listPictureBox[i]->Height) {
				released_index = i;
				printf("[end] %d\n", released_index);
			}
		}

		if (released_index != -1) {
			int width = endPoint.X - startPoint.X;
			int height = endPoint.Y - startPoint.Y;
			startPoint = control->PointToClient(System::Drawing::Point(startPoint.X, startPoint.Y));
			theRectangle = System::Drawing::Rectangle(startPoint.X, startPoint.Y, width, height);

			//正規化
			theRectangle = myRectangle(theRectangle, control);

			//枠を描く
			for (int i = 0; i < 12; i++) {
				Graphics^ g = Graphics::FromImage(listPictureBox[i]->Image);
				Pen^ p = gcnew Pen(Color::Red, 1);
				theRectangle.X -= (i % 4 - clicked_index % 4) * listPictureBox[i]->Width;
				theRectangle.Y -= (i / 4 - clicked_index / 4) * listPictureBox[i]->Height;
				g->DrawRectangle(p, theRectangle);
				theRectangle.X += (i % 4 - clicked_index % 4) * listPictureBox[i]->Width;
				theRectangle.Y += (i / 4 - clicked_index / 4)* listPictureBox[i]->Height;

				listPictureBox[i]->Refresh();
				p->~Pen();
				g->~Graphics();
			}
		}

		//イベントをリセット
		control->MouseMove -= gcnew MouseEventHandler(this, &sample11::MainForm::myMouseMoveRight);
		control->MouseUp -= gcnew MouseEventHandler(this, &sample11::MainForm::myMouseUpRight);
	}

	private: System::Drawing::Rectangle myRectangle(System::Drawing::Rectangle^ rect, Control^ control)
	{
		System::Drawing::Point ptStart = System::Drawing::Point(rect->X, rect->Y);
		System::Drawing::Point ptEnd = System::Drawing::Point(rect->X + rect->Width, rect->Y + rect->Height);

		//normalize
		int mX = Math::Min(ptStart.X, ptEnd.X);
		int mY = Math::Min(ptStart.Y, ptEnd.Y);
		int mWidth = Math::Abs(ptEnd.X - ptStart.X);
		int mHeight = Math::Abs(ptEnd.Y - ptStart.Y);

		//clip
		/*mWidth = Math::Min(mainPanel->Width - mX - 1, mWidth);
		mHeight = Math::Min(mainPanel->Height - mY - 1, mHeight);

		if (mX < 0){
		mWidth += mX;
		mX = 0;
		}

		if (mY < 0){
		mHeight += mY;
		mY = 0;
		}*/

		return System::Drawing::Rectangle(mX, mY, mWidth, mHeight);
	}

	private: System::Void myMouseMoveLeft(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

		if ((endPoint.X - startPoint.X) *(endPoint.X - startPoint.X) + (endPoint.Y - startPoint.Y) *(endPoint.Y - startPoint.Y) < 16 * scale_facter *scale_facter) {
			printf("[Move] %d\n", (endPoint.X - startPoint.X) *(endPoint.X - startPoint.X) + (endPoint.Y - startPoint.Y) *(endPoint.Y - startPoint.Y));
			return;
		}

		image_view_center_x -= (int)((endPoint.X - startPoint.X) / scale_facter);
		image_view_center_y -= (int)((endPoint.Y - startPoint.Y) / scale_facter);

		scale_facter = scale_facter * 4;

		startPoint = endPoint;

		mImageStack[layer_num[active_image_layer]].image_view_center_x = (image_view_center_x - mImageStack[layer_num[active_image_layer]].width / 2) / 4 + mImageStack[layer_num[active_image_layer]].width / 8;
		mImageStack[layer_num[active_image_layer]].image_view_center_y = (image_view_center_y - mImageStack[layer_num[active_image_layer]].height / 2) / 4 + mImageStack[layer_num[active_image_layer]].height / 8;

		printf("[image browse center] %d %d\n", image_view_center_x, image_view_center_y);

		redrawBrowseImage();

		scale_facter = scale_facter / 4;
		image_view_center_x = (mImageStack[layer_num[active_image_layer]].image_view_center_x - mImageStack[layer_num[active_image_layer]].width / 8) * 4 + mImageStack[layer_num[active_image_layer]].width / 2;
		image_view_center_y = (mImageStack[layer_num[active_image_layer]].image_view_center_y - mImageStack[layer_num[active_image_layer]].height / 8) * 4 + mImageStack[layer_num[active_image_layer]].height / 2;
	}

	private: System::Void myMouseUpLeft(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

		image_view_center_x -= (int)((endPoint.X - startPoint.X) / scale_facter);
		image_view_center_y -= (int)((endPoint.Y - startPoint.Y) / scale_facter);

		mImageStack[layer_num[active_image_layer]].image_view_center_x = image_view_center_x;
		mImageStack[layer_num[active_image_layer]].image_view_center_y = image_view_center_y;

		printf("[image view center] %d %d\n", image_view_center_x, image_view_center_y);

		control->MouseMove -= gcnew MouseEventHandler(this, &sample11::MainForm::myMouseMoveLeft);
		control->MouseUp -= gcnew MouseEventHandler(this, &sample11::MainForm::myMouseUpLeft);

		this->Cursor = System::Windows::Forms::Cursors::Default;
		redrawImage();
	}

	private: System::Void myMouseWheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		float rotateDirection = e->Delta * SystemInformation::MouseWheelScrollLines / 120.;
		printf("[mouce wheel] %f\n", rotateDirection);

		if (rotateDirection > 0) {
			scale_facter = scale_facter * 2;
		}
		else {
			scale_facter = scale_facter * 0.5;
		}

		if (scale_facter >= 4) {
			scale_facter = 4;
		}
		else if (scale_facter < 0.015625) {
			scale_facter = 0.015625;
		}

		printf("[image view center] %d %d\n", image_view_center_x, image_view_center_y);

		mImageStack[layer_num[active_image_layer]].scale_facter = scale_facter;

		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		redrawImage();
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ dlg = gcnew OpenFileDialog;
		dlg->Multiselect = true;
		dlg->Filter = "画像ファイル|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

		for each (System::String^ fname in dlg->FileNames)
		{

			if (mImageStack[layer_num[load_image_count]].readRasterFile(fname) != 1) {
				return;
			}

			behind_image_layer = active_image_layer;
			active_image_layer = load_image_count;

			alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
			scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
			this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

			activeImgComboBox->Items->Add(fname);
			behindImgComboBox->Items->Add(fname);

			activeImgComboBox->SelectedIndex = load_image_count;
			behindImgComboBox->SelectedIndex = behind_image_layer;

			load_image_count++;

			redrawImage();
		}

		this->Cursor = System::Windows::Forms::Cursors::Default;
	}

	private: System::Void openColorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ dlg = gcnew OpenFileDialog;
		dlg->Filter = "画像ファイルR|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

		System::String^ fname_r = dlg->FileName;

		dlg = gcnew OpenFileDialog;
		dlg->Filter = "画像ファイルG|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

		System::String^ fname_g = dlg->FileName;

		dlg = gcnew OpenFileDialog;
		dlg->Filter = "画像ファイルB|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

		System::String^ fname_b = dlg->FileName;


		if (mImageStack[layer_num[load_image_count]].readRasterFileColor(fname_r, fname_g, fname_b) != 1) {
			return;
		}

		this->Cursor = System::Windows::Forms::Cursors::Default;

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add(fname_r);
		behindImgComboBox->Items->Add(fname_r);

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		redrawImage();
	}

	private: System::Void redrawImage()
	{
		int i;
		float result_img_width, result_img_height;
		int start_x, start_y;
		cv::Mat mDspImg[12];

		if (mImageStack[layer_num[active_image_layer]].dspMat.empty()) {
			return;
		}

		if (mImageStack[layer_num[behind_image_layer]].dspMat.empty()) {
			return;
		}

		if (mImageStack[layer_num[active_image_layer]].logMat.empty()) {
			return;
		}

		if (mImageStack[layer_num[behind_image_layer]].logMat.empty()) {
			return;
		}

		/*if (logViewCheckBox->Checked == 1){
			printf("[Log view]\n");
			mOrgImg = mImageStack[layer_num[behind_image_layer]].logMat.clone();
		}
		else{
			mOrgImg = mImageStack[layer_num[behind_image_layer]].dspMat.clone();
		}*/

		image_view_center_x = mImageStack[layer_num[behind_image_layer]].image_view_center_x;
		image_view_center_y = mImageStack[layer_num[behind_image_layer]].image_view_center_y;
		scale_facter = mImageStack[layer_num[behind_image_layer]].scale_facter;

		result_img_width = (mainPanel->Width / scale_facter);  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		result_img_height = (mainPanel->Height / scale_facter);

		start_x = image_view_center_x - result_img_width / 2;
		start_y = image_view_center_y - result_img_height / 2;

		mImageStack[layer_num[behind_image_layer]].image_view_start_x = start_x;
		mImageStack[layer_num[behind_image_layer]].image_view_start_y = start_y;
		mImageStack[layer_num[behind_image_layer]].image_view_width = result_img_width;
		mImageStack[layer_num[behind_image_layer]].image_view_height = result_img_height;

		cv::Mat mActiveImg;

#pragma omp parallel for private(mActiveImg)
		for (i = 0; i < 12; i++) {
			//printf("[OMP thread] %d\n", omp_get_thread_num());

			if (logViewCheckBox->Checked == 1) {
				mActiveImg = resizeImage(mImageStack[layer_num[behind_image_layer]].logMat, listPictureBox[i], i);
			}
			else {
				mActiveImg = resizeImage(mImageStack[layer_num[behind_image_layer]].dspMat, listPictureBox[i], i);
			}

			if (mActiveImg.channels() == 1) {
				cv::Mat in[] = { mActiveImg, mActiveImg, mActiveImg };

				cv::Mat result = cv::Mat(mActiveImg.rows, mActiveImg.cols, CV_8UC3);

				cv::merge(in, 3, result);//3バンドの色合成

				mDspImg[i] = result;
			}
			else {
				mDspImg[i] = mActiveImg;
			}

			listPictureBox[i]->Image = yaImageStack::mat2bmp(mDspImg[i]);
			//printf("[Redraw] %d\n", i);
		}

		/*if (logViewCheckBox->Checked == 1){
			printf("[Log view]\n");
			mOrgImg = mImageStack[layer_num[active_image_layer]].logMat.clone();
		}
		else{
			mOrgImg = mImageStack[layer_num[active_image_layer]].dspMat.clone();
		}*/

		image_view_center_x = mImageStack[layer_num[active_image_layer]].image_view_center_x;
		image_view_center_y = mImageStack[layer_num[active_image_layer]].image_view_center_y;
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;

		result_img_width = (mainPanel->Width / scale_facter);  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		result_img_height = (mainPanel->Height / scale_facter);

		start_x = image_view_center_x - result_img_width / 2;
		start_y = image_view_center_y - result_img_height / 2;

		mImageStack[layer_num[active_image_layer]].image_view_start_x = start_x;
		mImageStack[layer_num[active_image_layer]].image_view_start_y = start_y;
		mImageStack[layer_num[active_image_layer]].image_view_width = result_img_width;
		mImageStack[layer_num[active_image_layer]].image_view_height = result_img_height;

		//透過度を設定
		double alpha = mImageStack[layer_num[active_image_layer]].alpha;

#pragma omp parallel for private(mActiveImg)
		for (i = 0; i < 12; i++) {
			//printf("[OMP thread] %d\n", omp_get_thread_num());

			if (logViewCheckBox->Checked == 1) {
				mActiveImg = resizeImage(mImageStack[layer_num[active_image_layer]].logMat, listPictureBox[i], i);
			}
			else {
				mActiveImg = resizeImage(mImageStack[layer_num[active_image_layer]].dspMat, listPictureBox[i], i);
			}

			if (mActiveImg.channels() == 1) {
				cv::Mat in[] = { mActiveImg, mActiveImg, mActiveImg };

				cv::Mat result = cv::Mat(mActiveImg.rows, mActiveImg.cols, CV_8UC3);

				cv::merge(in, 3, result);//3バンドの色合成

				mDspImg[i] = alpha*result + (1 - alpha)*mDspImg[i];
			}
			else {
				mDspImg[i] = alpha*mActiveImg + (1 - alpha)*mDspImg[i];
			}

			listPictureBox[i]->Image = yaImageStack::mat2bmp(mDspImg[i]);
			//printf("[Redraw] %d\n", i);
		}
	}

	private: System::Void redrawBrowseImage()
	{
		int i;

		if (mImageStack[layer_num[active_image_layer]].browseMat.empty()) {
			return;
		}

		//mOrgImg = mImageStack[layer_num[active_image_layer]].browseMat.clone();

		image_view_center_x = mImageStack[layer_num[active_image_layer]].image_view_center_x;
		image_view_center_y = mImageStack[layer_num[active_image_layer]].image_view_center_y;

#pragma omp parallel for
		for (i = 0; i < 12; i++) {
			//printf("[OMP thread] %d\n", omp_get_thread_num());

			cv::Mat mDspImg;
			cv::Mat mActiveImg = resizeImage(mImageStack[layer_num[active_image_layer]].browseMat, listPictureBox[i], i);

			if (mActiveImg.channels() == 1) {
				cv::Mat in[] = { mActiveImg, mActiveImg, mActiveImg };

				cv::Mat result = cv::Mat(mActiveImg.rows, mActiveImg.cols, CV_8UC3);

				cv::merge(in, 3, result);//3バンドの色合成

				mDspImg = result;
			}
			else {
				mDspImg = mActiveImg;
			}

			listPictureBox[i]->Image = yaImageStack::mat2bmp(mDspImg);
			//printf("[Redraw] %d\n", i);
		}
	}

	private: cv::Mat resizeImage(cv::Mat img, PictureBox^ pbox, int i)
	{
		//printf("[Box size] %d %d\n", pbox->Width, pbox->Height);
		//printf("[Scale] %f\n", scale_facter);

		float result_img_width = (pbox->Width / scale_facter);  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		float result_img_height = (pbox->Height / scale_facter);
		int w = i % 4;
		int h = i / 4;

		cv::Mat t_mat = cv::Mat::zeros(pbox->Height, pbox->Width, img.type());
		cv::Mat result = cv::Mat::zeros(pbox->Height, pbox->Width, img.type());

		int start_x = image_view_center_x - (-w + 2)*result_img_width;
		int start_y = image_view_center_y - (-h + 1.5)*result_img_height;

		int rect_x = 0;
		int rect_y = 0;
		int rect_w = pbox->Width;
		int rect_h = pbox->Height;

		if (start_x + result_img_width < 0) {
			//printf("re\n");
			return t_mat;
		}
		else if (start_x < 0) {
			result_img_width += start_x;
			start_x = 0;
			rect_x = pbox->Width - floor(result_img_width*scale_facter);
			rect_w = floor(result_img_width*scale_facter);
		}

		if (start_x + result_img_width > img.cols) {
			result_img_width = img.cols - start_x;
			rect_w = floor(result_img_width*scale_facter);
		}
		else if (start_x > img.cols) {
			//printf("re\n");
			return t_mat;
		}

		if (start_y + result_img_height < 0) {
			//printf("re\n");
			return t_mat;
		}
		else if (start_y < 0) {
			result_img_height += start_y;
			start_y = 0;
			rect_y = pbox->Height - floor(result_img_height*scale_facter);
			rect_h = floor(result_img_height*scale_facter);
		}

		if (start_y + result_img_height > img.rows) {
			result_img_height = img.rows - start_y;
			rect_h = floor(result_img_height*scale_facter);
		}
		else if (start_y > img.rows) {
			//printf("re\n");
			return t_mat;
		}

		if (result_img_height < 1 / scale_facter || result_img_width < 1 / scale_facter) {//resizeしたときにサイズが0にならないようにする
			//printf("re2\n");
			return t_mat;
		}

		//printf("[Rect1] %d %d %d %d\n", start_x, start_y, (int)result_img_width, (int)result_img_height);

		cv::Mat roi_mat = cv::Mat(img, cv::Rect(start_x, start_y, ceil(result_img_width), ceil(result_img_height)));

		cv::resize(roi_mat, t_mat, cv::Size(), scale_facter, scale_facter, INTER_NEAREST);
		cv::Mat t_mat2 = cv::Mat(t_mat, cv::Rect(0, 0, rect_w, rect_h));

		cv::Rect rect;
		cv::Mat roiTmpMat;

		//printf("[Rect2] %d %d %d %d\n", rect_x, rect_y, rect_w, rect_h);

		rect = cv::Rect(rect_x, rect_y, rect_w, rect_h);
		roiTmpMat = cv::Mat(result, rect);
		t_mat2.copyTo(roiTmpMat);

		return result;
	}

			 //トラックバー関係
	private: System::Void alphaTrackBar_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		if (load_image_count < 1) {
			return;
		}

		printf("[Transparency] %d\n", alphaTrackBar->Value);

		mImageStack[layer_num[active_image_layer]].alpha = alphaTrackBar->Value / 10.;
		redrawImage();
	}

	private: System::Void mainPanel_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Focus();
	}

	private: System::Void logViewCheckBox_CheckStateChanged(System::Object^  sender, System::EventArgs^  e)
	{
		redrawImage();
	}

	private: System::Void activeImgComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		active_image_layer = activeImgComboBox->SelectedIndex;

		redrawImage();
	}

	private: System::Void behindImgComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		behind_image_layer = behindImgComboBox->SelectedIndex;

		redrawImage();
	}

	private: System::Void rearrangeButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double center_x_proj = mImageStack[layer_num[active_image_layer]].adfGeoTransform[0] + image_view_center_x * mImageStack[layer_num[active_image_layer]].adfGeoTransform[1] + image_view_center_y * mImageStack[layer_num[active_image_layer]].adfGeoTransform[2];
		double center_y_proj = mImageStack[layer_num[active_image_layer]].adfGeoTransform[3] + image_view_center_x * mImageStack[layer_num[active_image_layer]].adfGeoTransform[4] + image_view_center_y * mImageStack[layer_num[active_image_layer]].adfGeoTransform[5];

		double a0 = mImageStack[layer_num[behind_image_layer]].adfGeoTransform[0];
		double a1 = mImageStack[layer_num[behind_image_layer]].adfGeoTransform[1];
		double a2 = mImageStack[layer_num[behind_image_layer]].adfGeoTransform[2];
		double a3 = mImageStack[layer_num[behind_image_layer]].adfGeoTransform[3];
		double a4 = mImageStack[layer_num[behind_image_layer]].adfGeoTransform[4];
		double a5 = mImageStack[layer_num[behind_image_layer]].adfGeoTransform[5];

		mImageStack[layer_num[behind_image_layer]].image_view_center_x = (a5*(center_x_proj - a0) - a2*(center_y_proj - a3)) / (a1*a5 - a2*a4);
		mImageStack[layer_num[behind_image_layer]].image_view_center_y = (-a4*(center_x_proj - a0) + a1*(center_y_proj - a3)) / (a1*a5 - a2*a4);

		mImageStack[layer_num[behind_image_layer]].scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter*mImageStack[layer_num[behind_image_layer]].adfGeoTransform[1] / mImageStack[layer_num[active_image_layer]].adfGeoTransform[1];

		redrawImage();
	}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Focus();
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox2->Focus();
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox3->Focus();
	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox4->Focus();
	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox5->Focus();
	}
	private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox6->Focus();
	}
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox7->Focus();
	}
	private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox8->Focus();
	}
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox9->Focus();
	}
	private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox10->Focus();
	}
	private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox11->Focus();
	}
	private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox12->Focus();
	}

	private: System::Void changeDetectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void panSharpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void optFlowToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void interferogramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cCDToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void angleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void subAprtureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: cv::Mat convert2Complex(cv::Mat src);
	private: System::Void shiftDFT(cv::Mat src, cv::Mat dst);
	private: System::Void circShiftY(cv::Mat src, cv::Mat dst, int shift);

	private: System::Void goodToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void harrisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void fastToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void mserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void orbToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void entropyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void nLToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bilateralToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);


	private: System::Void subPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void earthPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e);
	private: System::Void panelRefresh(void);

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: GLuint readTexture();

	private: System::Void earthPanel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void myEarthMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void myEarthMouseMoveLeft(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void myEarthMouseUpLeft(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void myEarthMouseMoveRight(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void myEarthMouseUpRight(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void myEarthMouseWheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void trans2WGS84(double lat, double lon, double alt, double trans84[]);

	private: System::Void saveTipToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (saveTipFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ fileName = saveTipFileDialog->FileName;

			int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
			int result_img_height = theRectangle.Height / scale_facter;

			theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
			theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
			int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
			int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
			int end_x = start_x + result_img_width;
			int end_y = start_y + result_img_height;

			cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

			imwrite(yaString::systemStringToChar(fileName), roi_mat);
		}

	}
	private: System::Void saveRandamToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		char fileName[256];

		int start_x, start_y;

		for (int i = 0; i < 3000; i++) {
			sprintf(fileName, "E:\\learn\\NG\\%04d.png", i);

			start_x = rand() % (mImageStack[layer_num[active_image_layer]].dspMat.cols - 32);
			start_y = rand() % (mImageStack[layer_num[active_image_layer]].dspMat.rows - 32);


			cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, 32, 32));

			imwrite(fileName, roi_mat);

		}

	}

	private: System::Void deconvolutionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (load_image_count < 1) {
			return;
		}

		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

		ImageViewer::deconvForm ^fm = gcnew ImageViewer::deconvForm(roi_mat);
		fm->ShowDialog();


		cv::Mat result = fm->getResult();

		//新規レイヤーの登録

		if (load_image_count > MAX_IMAGE_STACK - 1) {
			return;
		}

		mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

		mImageStack[layer_num[load_image_count]].adfGeoTransform[1] = mImageStack[layer_num[load_image_count]].adfGeoTransform[1] / 4;
		mImageStack[layer_num[load_image_count]].adfGeoTransform[2] = mImageStack[layer_num[load_image_count]].adfGeoTransform[2] / 4;
		mImageStack[layer_num[load_image_count]].adfGeoTransform[4] = mImageStack[layer_num[load_image_count]].adfGeoTransform[4] / 4;
		mImageStack[layer_num[load_image_count]].adfGeoTransform[5] = mImageStack[layer_num[load_image_count]].adfGeoTransform[5] / 4;

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add("[Result] Deconvolution");
		behindImgComboBox->Items->Add("[Result] Deconvolution");

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

		redrawImage();

	}

	private: System::Void mainPanel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (mImageStack[layer_num[active_image_layer]].orgMat.empty()) {
			return;
		}

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point tmpPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + tmpPoint.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + tmpPoint.Y / scale_facter;

		double start_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + start_x * mImageStack[active_image_layer].adfGeoTransform[1] + start_y * mImageStack[active_image_layer].adfGeoTransform[2];
		double start_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + start_x * mImageStack[active_image_layer].adfGeoTransform[4] + start_y * mImageStack[active_image_layer].adfGeoTransform[5];


		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}  Lat {1}/Lon {2}.", scale_facter.ToString(),
			start_y_proj.ToString(), start_x_proj.ToString());
		//printf("[Mouce move] %f %f\n",tmpPoint.X,tmpPoint.Y);

	}

	private: System::Void histogramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

		float new_max, new_min;
		yaImageStack::viewHistogram(roi_mat, 255, &new_max, &new_min);

	}

	private: System::Void waveletToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		const int NIter = 1;

		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

		cv::Mat gray_img;
		if (roi_mat.channels() == 3) {
			cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);
		}
		else {
			gray_img = roi_mat;
		}

		cv::Mat Dst = cv::Mat(gray_img.rows, gray_img.cols, CV_32FC1);
		cv::Mat Temp = cv::Mat(gray_img.rows, gray_img.cols, CV_32FC1);
		cv::Mat Filtered = cv::Mat(gray_img.rows, gray_img.cols, CV_32FC1);

		//cv::imshow("in", gray_img);
		gray_img.convertTo(gray_img, CV_32FC1);

		yaEditImage::cvHaarWavelet(gray_img, Dst, NIter);

		Dst.copyTo(Temp);

		yaEditImage::cvInvHaarWavelet(Temp, Filtered, NIter, GARROT, 30);
		//yaEditImage::cvInvHaarWavelet(Temp, Filtered, NIter, SOFT, 30);

		double M = 0, m = 0;
		//----------------------------------------------------
		// Normalization to 0-1 range (for visualization)
		//----------------------------------------------------
		minMaxLoc(Dst, &m, &M);

		printf("%f %f\n", m, M);
		m = 0;
		if ((M - m) > 0) { Dst = (Dst - m) / (M - m); }
		imshow("Coeff", Dst);

		cv::minMaxLoc(Filtered, &m, &M);
		printf("%f %f\n", m, M);
		m = 0;
		if ((M - m) > 0) {
			Filtered = 255.*(Filtered - m) / (M - m);
		}

		Filtered.convertTo(Filtered, CV_8UC1);

		mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], Filtered, scale_facter);

		mImageStack[layer_num[load_image_count]].adfMinMax[0] = 0;
		mImageStack[layer_num[load_image_count]].adfMinMax[1] = 255;

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add("[Result] Wavelet");
		behindImgComboBox->Items->Add("[Result] Wavelet");

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

		redrawImage();


	}

	private: System::Void leeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

		cv::Mat gray_img;
		if (roi_mat.channels() == 3) {
			cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);
		}
		else {
			gray_img = roi_mat;
		}

		int window_size = 3;

		cv::Mat result;

		result = yaEditImage::LeeFilter(gray_img, window_size);

		//新規レイヤーの登録
		if (load_image_count > MAX_IMAGE_STACK - 1) {
			return;
		}

		mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

		mImageStack[layer_num[load_image_count]].adfMinMax[0] = 0;
		mImageStack[layer_num[load_image_count]].adfMinMax[1] = 255;

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add("[Result] Lee");
		behindImgComboBox->Items->Add("[Result] Lee");

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

		redrawImage();



	}
	private: System::Void interferometricLandUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);


	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (saveTipFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ fileName = saveTipFileDialog->FileName;

			int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
			int result_img_height = theRectangle.Height / scale_facter;

			theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
			theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
			int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
			int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
			int end_x = start_x + result_img_width;
			int end_y = start_y + result_img_height;

			cv::Mat roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
			roi_mat.convertTo(roi_mat, CV_32FC2);

			const char *pszFormat = "GTiff";
			GDALDriver *poDriver;
			char **papszMetadata;
			poDriver = GetGDALDriverManager()->GetDriverByName(pszFormat);
			if (poDriver == NULL) {
				return;
			}
			papszMetadata = poDriver->GetMetadata();
			if (CSLFetchBoolean(papszMetadata, GDAL_DCAP_CREATE, FALSE)) {
				printf("Driver %s supports Create() method.\n", pszFormat);
			}
			if (CSLFetchBoolean(papszMetadata, GDAL_DCAP_CREATECOPY, FALSE)) {
				printf("Driver %s supports CreateCopy() method.\n", pszFormat);
			}

			GDALDataset *poDstDS;
			char **papszOptions = NULL;
			poDstDS = poDriver->Create(yaString::systemStringToChar(fileName), result_img_width, result_img_height, 1, GDT_CFloat32,
				papszOptions);

			double adfGeoTransform[6];

			double start_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + start_x * mImageStack[active_image_layer].adfGeoTransform[1] + start_y * mImageStack[active_image_layer].adfGeoTransform[2];
			double start_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + start_x * mImageStack[active_image_layer].adfGeoTransform[4] + start_y * mImageStack[active_image_layer].adfGeoTransform[5];

			adfGeoTransform[0] = start_x_proj;
			adfGeoTransform[1] = mImageStack[active_image_layer].adfGeoTransform[1];
			adfGeoTransform[2] = mImageStack[active_image_layer].adfGeoTransform[2];
			adfGeoTransform[3] = start_y_proj;
			adfGeoTransform[4] = mImageStack[active_image_layer].adfGeoTransform[4];
			adfGeoTransform[5] = mImageStack[active_image_layer].adfGeoTransform[5];


			OGRSpatialReference oSRS;
			char *pszSRS_WKT = NULL;
			GDALRasterBand *poBand;
			poDstDS->SetGeoTransform(adfGeoTransform);
			oSRS.importFromEPSG(4326);
			oSRS.exportToWkt(&pszSRS_WKT);
			poDstDS->SetProjection(pszSRS_WKT);
			CPLFree(pszSRS_WKT);
			poBand = poDstDS->GetRasterBand(1);

			poBand->RasterIO(GF_Write, 0, 0, result_img_width, result_img_height, roi_mat.data,
				result_img_width, result_img_height, poBand->GetRasterDataType(), 0, 0);
			/* Once we're done, close properly the dataset */
			GDALClose((GDALDatasetH)poDstDS);



			//imwrite(yaString::systemStringToChar(fileName), roi_mat);
		}

	}

	private: System::Void saveWarpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (saveTipFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ fileName = saveTipFileDialog->FileName;

			int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
			int result_img_height = theRectangle.Height / scale_facter;

			theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
			theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
			int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
			int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
			int end_x = start_x + result_img_width;
			int end_y = start_y + result_img_height;

			cv::Mat roi_mat;
			if (mImageStack[layer_num[active_image_layer]].channel == 2) {
				cv::Mat magMat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

				roi_mat = yaImageStack::convertToMagnitude_gpu_f(magMat,
					mImageStack[layer_num[active_image_layer]].channel,
					mImageStack[layer_num[active_image_layer]].depth,
					MAX(abs(mImageStack[layer_num[active_image_layer]].adfMinMax[0]), abs(mImageStack[layer_num[active_image_layer]].adfMinMax[1]))
				);

			}
			else {
				roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
			}

			roi_mat.convertTo(roi_mat, CV_32FC1);

			const char *pszFormat = "GTiff";
			GDALDriver *poDriver;
			char **papszMetadata;
			poDriver = GetGDALDriverManager()->GetDriverByName(pszFormat);
			if (poDriver == NULL) {
				return;
			}
			papszMetadata = poDriver->GetMetadata();
			if (CSLFetchBoolean(papszMetadata, GDAL_DCAP_CREATE, FALSE)) {
				printf("Driver %s supports Create() method.\n", pszFormat);
			}
			if (CSLFetchBoolean(papszMetadata, GDAL_DCAP_CREATECOPY, FALSE)) {
				printf("Driver %s supports CreateCopy() method.\n", pszFormat);
			}

			GDALDataset *poDstDS;
			char **papszOptions = NULL;
			poDstDS = poDriver->Create(yaString::systemStringToChar(fileName), result_img_width, result_img_height, 1, GDT_Float32,
				papszOptions);

			double adfGeoTransform[6];

			double start_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + start_x * mImageStack[active_image_layer].adfGeoTransform[1] + start_y * mImageStack[active_image_layer].adfGeoTransform[2];
			double start_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + start_x * mImageStack[active_image_layer].adfGeoTransform[4] + start_y * mImageStack[active_image_layer].adfGeoTransform[5];

			adfGeoTransform[0] = start_x_proj;
			adfGeoTransform[1] = mImageStack[active_image_layer].adfGeoTransform[1];
			adfGeoTransform[2] = mImageStack[active_image_layer].adfGeoTransform[2];
			adfGeoTransform[3] = start_y_proj;
			adfGeoTransform[4] = mImageStack[active_image_layer].adfGeoTransform[4];
			adfGeoTransform[5] = mImageStack[active_image_layer].adfGeoTransform[5];


			OGRSpatialReference oSRS;
			char *pszSRS_WKT = NULL;
			GDALRasterBand *poBand;
			poDstDS->SetGeoTransform(adfGeoTransform);
			oSRS.importFromEPSG(4326);
			oSRS.exportToWkt(&pszSRS_WKT);
			poDstDS->SetProjection(pszSRS_WKT);
			CPLFree(pszSRS_WKT);
			poBand = poDstDS->GetRasterBand(1);

			poBand->RasterIO(GF_Write, 0, 0, result_img_width, result_img_height, roi_mat.data,
				result_img_width, result_img_height, poBand->GetRasterDataType(), 0, 0);
			/* Once we're done, close properly the dataset */
			GDALClose((GDALDatasetH)poDstDS);



			// Open input and output files.
			GDALAllRegister();

			GDALDriverH hDriver;
			GDALDataType eDT;
			GDALDatasetH hDstDS;
			GDALDatasetH hSrcDS;
			// Open the source file.
			hSrcDS = GDALOpen(yaString::systemStringToChar(fileName), GA_ReadOnly);
			CPLAssert(hSrcDS != NULL);
			// Create output with same datatype as first input band.
			eDT = GDALGetRasterDataType(GDALGetRasterBand(hSrcDS, 1));

			// Get output driver (GeoTIFF format)
			hDriver = GDALGetDriverByName("GTiff");
			CPLAssert(hDriver != NULL);

			// Get Source coordinate system.
			const char *pszSrcWKT = NULL;
			char *pszDstWKT = NULL;
			pszSrcWKT = GDALGetProjectionRef(hSrcDS);
			CPLAssert(pszSrcWKT != NULL && strlen(pszSrcWKT) > 0);

			// Setup output coordinate system that is WGS84.
			//OGRSpatialReference oSRS;
			oSRS.importFromEPSG(4326);
			oSRS.exportToWkt(&pszDstWKT);

			// Create a transformer that maps from source pixel/line coordinates
			// to destination georeferenced coordinates (not destination
			// pixel line).  We do that by omitting the destination dataset
			// handle (setting it to NULL).
			void *hTransformArg;
			hTransformArg =
				GDALCreateGenImgProjTransformer(hSrcDS, pszSrcWKT, NULL, pszDstWKT,
					FALSE, 0, 1);
			CPLAssert(hTransformArg != NULL);
			// Get approximate output georeferenced bounds and resolution for file.
			double adfDstGeoTransform[6];
			int nPixels = 0, nLines = 0;
			CPLErr eErr;
			eErr = GDALSuggestedWarpOutput(hSrcDS,
				GDALGenImgProjTransform, hTransformArg,
				adfDstGeoTransform, &nPixels, &nLines);
			CPLAssert(eErr == CE_None);
			GDALDestroyGenImgProjTransformer(hTransformArg);
			// Create the output file.

			System::String^ geo_fileName = fileName->Replace(".tif", "_geo.tif");
			hDstDS = GDALCreate(hDriver, yaString::systemStringToChar(geo_fileName), nPixels, nLines,
				GDALGetRasterCount(hSrcDS), eDT, NULL);
			CPLAssert(hDstDS != NULL);
			// Write out the projection definition.
			GDALSetProjection(hDstDS, pszDstWKT);
			GDALSetGeoTransform(hDstDS, adfDstGeoTransform);
			// Copy the color table, if required.
			GDALColorTableH hCT;
			hCT = GDALGetRasterColorTable(GDALGetRasterBand(hSrcDS, 1));
			if (hCT != NULL)
				GDALSetRasterColorTable(GDALGetRasterBand(hDstDS, 1), hCT);



			// Setup warp options.
			GDALWarpOptions *psWarpOptions = GDALCreateWarpOptions();
			psWarpOptions->hSrcDS = hSrcDS;
			psWarpOptions->hDstDS = hDstDS;
			psWarpOptions->nBandCount = 1;
			psWarpOptions->panSrcBands =
				(int *)CPLMalloc(sizeof(int) * psWarpOptions->nBandCount);
			psWarpOptions->panSrcBands[0] = 1;
			psWarpOptions->panDstBands =
				(int *)CPLMalloc(sizeof(int) * psWarpOptions->nBandCount);
			psWarpOptions->panDstBands[0] = 1;
			psWarpOptions->pfnProgress = GDALTermProgress;
			psWarpOptions->eResampleAlg = GRA_Bilinear;
			// Establish reprojection transformer.
			psWarpOptions->pTransformerArg =
				GDALCreateGenImgProjTransformer(hSrcDS,
					GDALGetProjectionRef(hSrcDS),
					hDstDS,
					GDALGetProjectionRef(hDstDS),
					FALSE, 0.0, 1);
			psWarpOptions->pfnTransformer = GDALGenImgProjTransform;
			// Initialize and execute the warp operation.
			GDALWarpOperation oOperation;
			oOperation.Initialize(psWarpOptions);
			oOperation.ChunkAndWarpImage(0, 0,
				GDALGetRasterXSize(hDstDS),
				GDALGetRasterYSize(hDstDS));
			GDALDestroyGenImgProjTransformer(psWarpOptions->pTransformerArg);
			GDALDestroyWarpOptions(psWarpOptions);
			GDALClose(hDstDS);
			GDALClose(hSrcDS);

		}
	}
	private: System::Void lookToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (load_image_count < 1) {
			return;
		}

		if (mImageStack[layer_num[active_image_layer]].channel != 2) {
			return;
		}

		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		// 必要なら出力配列の再割り当てを行います．
		cv::Size dftSize;

		// DFT 変換のサイズを計算します．
		dftSize.width = getOptimalDFTSize(result_img_width - 1);
		dftSize.height = getOptimalDFTSize(result_img_height - 1);

		cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, dftSize.width, dftSize.height));

		master_mat = convert2Complex(master_mat);

		// テンポラリバッファを確保し， 0 で初期化します
		Mat tempA(dftSize, master_mat.type(), Scalar::all(0));
		Mat tempB(dftSize, CV_8UC1, Scalar::all(0));

		// A と B をそれぞれ tmpA と tmpB の左上の角にコピーします．
		Mat roiA(tempA, Rect(0, 0, master_mat.cols, master_mat.rows));
		master_mat.copyTo(roiA);

		// パックされた A と B を変換し置換します．
		// 処理を高速化するために "nonzeroRows" を利用します．
		dft(tempA, tempA, 0, master_mat.rows);

		//shiftDFT(tempA, tempA);


		// スペクトルの積を求めます；
		// この関数は，スペクトルのパックされた表現を扱うことができます．
		//cv::mulSpectrums(tempA, tempB, tempA, 0);
		//cv::mulSpectrums(tempA, tempB, tempA, CV_DXT_MUL_CONJ);

		// 結果を周波数領域から逆変換します．
		// すべての行が　0　でないとしても
		// 必要なのは C.rows だけなので
		// nonzeroRows == C.rows を渡します．

		const int lx = 4;
		const int ly = 4;

		cv::Mat sub[lx][ly];
		cv::Mat roi[lx][ly];
		cv::Mat roi_sub[lx][ly];

		for (int i = 0; i < lx; i++) {
			for (int j = 0; j < ly; j++) {
				sub[i][j] = cv::Mat(dftSize, master_mat.type(), Scalar::all(0));
				roi[i][j] = cv::Mat(tempA, Rect(i*tempA.cols / (2 * lx - 2), j*tempA.rows / (2 * ly - 2), tempA.cols / 2, tempA.rows / 2));
				roi_sub[i][j] = cv::Mat(sub[i][j], Rect(i*tempA.cols / (2 * lx - 2), j*tempA.rows / (2 * ly - 2), tempA.cols / 2, tempA.rows / 2));

				roi[i][j].copyTo(roi_sub[i][j]);

				dft(sub[i][j], sub[i][j], DFT_INVERSE + DFT_SCALE, master_mat.rows);
			}
		}

		dft(tempA, tempA, DFT_INVERSE + DFT_SCALE, master_mat.rows);


		vector<cv::Mat> mv;
		split(tempA, mv);

		double minI, minQ, maxI, maxQ;

		cv::minMaxLoc(mv[0], &minI, &maxI, NULL, NULL);
		cv::minMaxLoc(mv[1], &minQ, &maxQ, NULL, NULL);

		double max_value = max(sqrt(minI*minI + minQ*minQ), sqrt(maxI*maxI + maxQ*maxQ));

		char fname[256];

		for (int i = 0; i < lx; i++) {
			for (int j = 0; j < ly; j++) {
				sub[i][j] = yaImageStack::convertToMagnitude(sub[i][j], tempA.channels(), tempA.depth(), max_value);

				add(sub[i][j] / lx / ly, tempB, tempB);

				sprintf(fname, "sub-%d-%d.png", i, j);
				imwrite(fname, sub[i][j]);
			}
		}

		tempA = yaImageStack::convertToMagnitude(tempA, tempA.channels(), tempA.depth(), max_value);

		//imwrite("org.png", tempA);

		// 結果をコピーして C に戻します．
		cv::Mat result;
		cv::Mat result2;
		tempA(Rect(0, 0, tempA.cols, tempA.rows)).copyTo(result);
		tempB(Rect(0, 0, tempA.cols, tempA.rows)).copyTo(result2);

		//cv::normalize(result, result, -128, 128, NORM_MINMAX, CV_32FC2);

		//新規レイヤーの登録
		if (load_image_count > MAX_IMAGE_STACK - 1) {
			return;
		}

		mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

		mImageStack[layer_num[load_image_count]].dspMat = result2;

		mImageStack[layer_num[load_image_count]].channel = result.channels();
		mImageStack[layer_num[load_image_count]].depth = result.depth();
		mImageStack[layer_num[load_image_count]].adfMinMax[0] = mImageStack[layer_num[active_image_layer]].adfMinMax[0];
		mImageStack[layer_num[load_image_count]].adfMinMax[1] = mImageStack[layer_num[active_image_layer]].adfMinMax[1];

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add("[Result] look1");
		behindImgComboBox->Items->Add("[Result] look1");

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

		redrawImage();

	}

	private: System::Void open2BandSLCToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ dlg = gcnew OpenFileDialog;
		dlg->Filter = "画像ファイル|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

		System::String^ fname = dlg->FileName;

		if (mImageStack[layer_num[load_image_count]].readRasterFile_2bandSLC(fname) != 1) {
			return;
		}

		this->Cursor = System::Windows::Forms::Cursors::Default;

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add(fname);
		behindImgComboBox->Items->Add(fname);

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		redrawImage();

	}
	private: System::Void subCCDToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (load_image_count < 1) {
			return;
		}

		if (mImageStack[layer_num[active_image_layer]].channel != 2) {
			return;
		}

		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		// 必要なら出力配列の再割り当てを行います．
		cv::Size dftSize;

		// DFT 変換のサイズを計算します．
		dftSize.width = getOptimalDFTSize(result_img_width - 1);
		dftSize.height = getOptimalDFTSize(result_img_height - 1);

		cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, dftSize.width, dftSize.height));

		master_mat = convert2Complex(master_mat);

		// テンポラリバッファを確保し， 0 で初期化します
		Mat tempA(dftSize, master_mat.type(), Scalar::all(0));

		// A と B をそれぞれ tmpA と tmpB の左上の角にコピーします．
		Mat roiA(tempA, Rect(0, 0, master_mat.cols, master_mat.rows));
		master_mat.copyTo(roiA);

		// パックされた A と B を変換し置換します．
		// 処理を高速化するために "nonzeroRows" を利用します．
		dft(tempA, tempA, 0, master_mat.rows);

		vector<Mat> mv;
		split(tempA, mv);

		cv::Mat tempB;

		//絶対値
		magnitude(mv[0], mv[1], tempB);

		reduce(tempB, tempB, 1, CV_REDUCE_SUM);

		double minVal, maxVal;
		cv::Point minIdx, maxIdx;
		minMaxLoc(tempB, &minVal, &maxVal, &minIdx, &maxIdx, Mat());

		printf("min %d %d\n", minIdx.x, minIdx.y);
		imshow("avg", tempB);

		/*tempB=cv::Mat(dftSize, master_mat.type(), Scalar::all(0));

		circShiftY(tempA, tempB,minIdx.y);

		tempA = tempB.clone();*/


		// スペクトルの積を求めます；
		// この関数は，スペクトルのパックされた表現を扱うことができます．
		//cv::mulSpectrums(tempA, tempB, tempA, 0);
		//cv::mulSpectrums(tempA, tempB, tempA, CV_DXT_MUL_CONJ);

		// 結果を周波数領域から逆変換します．
		// すべての行が　0　でないとしても
		// 必要なのは C.rows だけなので
		// nonzeroRows == C.rows を渡します．

		const int lx = 1;
		const int ly = 10;

		cv::Mat sub[lx][ly];
		cv::Mat roi[lx][ly];
		cv::Mat roi_sub[lx][ly];

		char fname[256];

		int ss[7] = { 2, 2, 2, 1, 1, 2, 1 };
		int count = 0;

		for (int i = 0; i < lx; i++) {
			for (int j = 0; j < ly; j++) {
				sub[i][j] = tempA.clone();
				//cv::Mat(dftSize, master_mat.type(), Scalar::all(0));
				/*roi[i][j] = cv::Mat(tempA, Rect(0, j*tempA.rows / (2 * ly - 2), tempA.cols, tempA.rows / 2));
				roi_sub[i][j] = cv::Mat(sub[i][j], Rect(0, j*tempA.rows / (2 * ly - 2), tempA.cols, tempA.rows / 2));*/

				/*roi[i][j] = cv::Mat(tempA, Rect(i*tempA.cols / (2 * lx - 2),0, tempA.cols/2, tempA.rows));
				roi_sub[i][j] = cv::Mat(sub[i][j], Rect(i*tempA.cols / (2 * lx - 2),0, tempA.cols/2, tempA.rows));

				roi[i][j].copyTo(roi_sub[i][j]);*/

				split(sub[i][j], mv);

				count = 0;

				for (int l = 0; l < tempA.rows; l += rand() % 2 + 1) {
					//for (int l = j; l < tempA.rows; l += ss[count%7]){
					count++;
					for (int k = 0; k < tempA.cols; k++) {

						mv[0].at<float>(l, k) = 0;
						mv[1].at<float>(l, k) = 0;
						//mv[0].at<float>(l, k) = mv[1].at<float>(l, k);
						//mv[1].at<float>(l, k) = -mv[0].at<float>(l, k);
						//mv[0].at<float>(l, k) = mv[0].at<float>((l + 1) % tempA.rows, k);
						//mv[1].at<float>(l, k) = mv[1].at<float>((l + 1) % tempA.rows, k);
					}
				}

				merge(mv, sub[i][j]);

				/*if (j == 0){
					flip(sub[i][j], sub[i][j], 0);
					}*/

					//tempB = cv::Mat(dftSize, master_mat.type(), Scalar::all(0));

					/*if (j == 0){
						circShiftY(sub[i][j], tempB, 3 * tempA.rows / 4);
						}
						else{
						circShiftY(sub[i][j], tempB, 1 * tempA.rows / 4);
						}*/

						//circShiftY(sub[i][j], tempB, tempA.rows - minIdx.y);

						//sub[i][j] = tempB.clone();

				sprintf(fname, "sub-fft-%d-%d.png", i, j);
				imwrite(fname, yaImageStack::convertToMagnitude(sub[i][j], 2, tempA.depth(), maxVal));

				dft(sub[i][j], sub[i][j], DFT_INVERSE + DFT_SCALE, master_mat.rows);

				/*split(sub[i][j], mv);
				medianBlur(mv[0], mv[0], 3);
				medianBlur(mv[1], mv[1], 3);
				merge(mv, sub[i][j]);*/

				/*if (j == 0){
					flip(sub[i][j], sub[i][j], 0);
					}*/
			}
		}

		dft(tempA, tempA, DFT_INVERSE + DFT_SCALE, master_mat.rows);

		split(tempA, mv);

		double minI, minQ, maxI, maxQ;

		cv::minMaxLoc(mv[0], &minI, &maxI, NULL, NULL);
		cv::minMaxLoc(mv[1], &minQ, &maxQ, NULL, NULL);

		double max_value = max(sqrt(minI*minI + minQ*minQ), sqrt(maxI*maxI + maxQ*maxQ));

		/*for (int i = 0; i < lx; i++){
			for (int j = 0; j < ly; j++){
			sprintf(fname, "sub-%d-%d.png", i, j);
			imwrite(fname, yaImageStack::convertToMagnitude(sub[i][j], tempA.channels(), tempA.depth(), max_value));
			}
			}*/



		yaEditImage EI;

		/*split(sub[0][0], mv);
		reduce(mv[0], mv[0], 0, CV_REDUCE_SUM);
		reduce(mv[0], mv[0], 1, CV_REDUCE_SUM);
		reduce(mv[1], mv[1], 0, CV_REDUCE_SUM);
		reduce(mv[1], mv[1], 1, CV_REDUCE_SUM);

		vector<Mat> mv2;

		split(sub[0][1], mv2);
		reduce(mv2[0], mv2[0], 0, CV_REDUCE_SUM);
		reduce(mv2[0], mv2[0], 1, CV_REDUCE_SUM);
		reduce(mv2[1], mv2[1], 0, CV_REDUCE_SUM);
		reduce(mv2[1], mv2[1], 1, CV_REDUCE_SUM);

		float a, b, c, d;
		a = mv[0].at<float>(0);
		b = mv[1].at<float>(0);
		c = mv2[0].at<float>(0);
		d = mv2[1].at<float>(0);

		printf("angle %f %f\n", atan2(b, a) * 180 / 3.141592, atan2(d, c) * 180 / 3.141592);

		split(sub[0][0], mv);

		mv2[0] = mv[0] * (a*c + b*d) / (a*a + b*b) - mv[1] * (a*d - b*c) / (a*a + b*b);
		mv2[1] = mv[1] * (a*c + b*d) / (a*a + b*b) + mv[0] * (a*d - b*c) / (a*a + b*b);

		merge(mv2, sub[0][0]);*/

		//add(sub[0][0], sub[0][1], tempB);
		cv::Mat result = cv::Mat(dftSize.height, dftSize.width, CV_8UC1, Scalar::all(0));;
		for (int i = 0; i < 10; i++) {
			for (int j = i + 1; j < 10; j++) {
				result = result + yaEditImage::CoherenceChanegDetectGPU(sub[0][i], sub[0][j]) / 45;
			}
		}

		/*cv::Mat result2 = EI.CoherenceChanegDetect(sub[0][2], sub[0][3]);
		cv::Mat result;
		add(result1/2, result2/2, result);*/
		//cv::Mat result = EI.CoherenceChanegDetect(sub[0][0], tempA);

		//cv::Mat result = EI.Interferogram(sub[0][0], sub[0][1]);

		//新規レイヤーの登録
		if (load_image_count > MAX_IMAGE_STACK - 1) {
			return;
		}

		mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

		mImageStack[layer_num[load_image_count]].dspMat = result;

		mImageStack[layer_num[load_image_count]].channel = result.channels();
		mImageStack[layer_num[load_image_count]].depth = result.depth();
		mImageStack[layer_num[load_image_count]].adfMinMax[0] = mImageStack[layer_num[active_image_layer]].adfMinMax[0];
		mImageStack[layer_num[load_image_count]].adfMinMax[1] = mImageStack[layer_num[active_image_layer]].adfMinMax[1];

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add("[Result] Sub-CCD");
		behindImgComboBox->Items->Add("[Result] Sub-CCD");

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

		redrawImage();
	}

	private: System::Void testToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (load_image_count < 1) {
			return;
		}

		if (mImageStack[layer_num[active_image_layer]].channel != 2) {
			return;
		}

		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		// 必要なら出力配列の再割り当てを行います．
		cv::Size dftSize;

		// DFT 変換のサイズを計算します．
		dftSize.width = getOptimalDFTSize(result_img_width - 1);
		dftSize.height = getOptimalDFTSize(result_img_height - 1);

		cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, dftSize.width, dftSize.height));

		cv::cuda::GpuMat a1, a2;

		master_mat.convertTo(master_mat, CV_32FC2);
		a1.upload(master_mat);

		a1 = yaComplexMath::complexCircShfit(a1, 100, 100);
		a1 = yaComplexMath::complexMultiply(a1, a1);

		a1.download(master_mat);

		cv::Mat result = yaImageStack::convertToMagnitude(master_mat, 2, 32, mImageStack[layer_num[active_image_layer]].adfMinMax[1]);

		//新規レイヤーの登録
		if (load_image_count > MAX_IMAGE_STACK - 1) {
			return;
		}

		mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

		mImageStack[layer_num[load_image_count]].dspMat = result;

		mImageStack[layer_num[load_image_count]].channel = result.channels();
		mImageStack[layer_num[load_image_count]].depth = result.depth();
		mImageStack[layer_num[load_image_count]].adfMinMax[0] = mImageStack[layer_num[active_image_layer]].adfMinMax[0];
		mImageStack[layer_num[load_image_count]].adfMinMax[1] = mImageStack[layer_num[active_image_layer]].adfMinMax[1];

		behind_image_layer = active_image_layer;
		active_image_layer = load_image_count;

		alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
		scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
		this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

		activeImgComboBox->Items->Add("[Result] Sub-CCD");
		behindImgComboBox->Items->Add("[Result] Sub-CCD");

		activeImgComboBox->SelectedIndex = load_image_count;
		behindImgComboBox->SelectedIndex = behind_image_layer;

		load_image_count++;

		theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

		redrawImage();
	}

	private: System::Void look2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (load_image_count < 1) {
			return;
		}

		if (mImageStack[layer_num[active_image_layer]].channel != 2) {
			return;
		}

		int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
		int result_img_height = theRectangle.Height / scale_facter;

		theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
		theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
		int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
		int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
		int end_x = start_x + result_img_width;
		int end_y = start_y + result_img_height;

		// 必要なら出力配列の再割り当てを行います．
		cv::Size dftSize;

		// DFT 変換のサイズを計算します．
		dftSize.width = getOptimalDFTSize(result_img_width - 1);
		dftSize.height = getOptimalDFTSize(result_img_height - 1);

		cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, dftSize.width, dftSize.height));

		master_mat = convert2Complex(master_mat);

		// テンポラリバッファを確保し， 0 で初期化します
		Mat tempA(dftSize, master_mat.type(), Scalar::all(0));
		Mat tempB(dftSize, CV_8UC1, Scalar::all(0));

		// A と B をそれぞれ tmpA と tmpB の左上の角にコピーします．
		Mat roiA(tempA, Rect(0, 0, master_mat.cols, master_mat.rows));
		master_mat.copyTo(roiA);

		// パックされた A と B を変換し置換します．
		// 処理を高速化するために "nonzeroRows" を利用します．
		dft(tempA, tempA, 0, master_mat.rows);

		const int lx = 4;
		const int ly = 4;

		cv::Mat sub[lx][ly];
		cv::Mat roi[lx][ly];
		cv::Mat roi_sub[lx][ly];

		for (int i = 0; i < lx; i++) {
			for (int j = 0; j < ly; j++) {
				sub[i][j] = cv::Mat(dftSize, master_mat.type(), Scalar::all(0));
				roi[i][j] = cv::Mat(tempA, Rect(i*tempA.cols / (2 * lx - 2), j*tempA.rows / (2 * ly - 2), tempA.cols / 2, tempA.rows / 2));
				roi_sub[i][j] = cv::Mat(sub[i][j], Rect(i*tempA.cols / (2 * lx - 2), j*tempA.rows / (2 * ly - 2), tempA.cols / 2, tempA.rows / 2));

				roi[i][j].copyTo(roi_sub[i][j]);

				dft(sub[i][j], sub[i][j], DFT_INVERSE + DFT_SCALE, master_mat.rows);
			}
		}

		cv::Mat sub2;
		cv::Mat roi2;
		cv::Mat roi_sub2;

		sub2 = cv::Mat(dftSize, master_mat.type(), Scalar::all(0));
		roi2 = cv::Mat(tempA, Rect(tempA.cols / 4, tempA.rows / 4, tempA.cols / 4, tempA.rows / 4));
		roi_sub2 = cv::Mat(sub2, Rect(tempA.cols / 4, tempA.rows / 4, tempA.cols / 4, tempA.rows / 4));

		roi2.copyTo(roi_sub2);

		dft(sub2, sub2, DFT_INVERSE + DFT_SCALE, master_mat.rows);

		dft(tempA, tempA, DFT_INVERSE + DFT_SCALE, master_mat.rows);

		vector<cv::Mat> mv;
		split(tempA, mv);

		double minI, minQ, maxI, maxQ;

		cv::minMaxLoc(mv[0], &minI, &maxI, NULL, NULL);
		cv::minMaxLoc(mv[1], &minQ, &maxQ, NULL, NULL);

		double max_value = max(sqrt(minI*minI + minQ*minQ), sqrt(maxI*maxI + maxQ*maxQ));

		char fname[256];

		for (int i = 0; i < lx; i++) {
			for (int j = 0; j < ly; j++) {
				sub[i][j] = yaImageStack::convertToMagnitude(sub[i][j], tempA.channels(), tempA.depth(), max_value);

				add(sub[i][j] / lx / ly, tempB, tempB);

				sprintf(fname, "%d-%d-%d_blu.png", load_image_count, i, j);
				imwrite(fname, sub[i][j]);
			}
		}

		sub2 = yaImageStack::convertToMagnitude(sub2, tempA.channels(), tempA.depth(), max_value);
		tempA = yaImageStack::convertToMagnitude(tempA, tempA.channels(), tempA.depth(), max_value);

		//imwrite("org.png", tempA);

		// 結果をコピーして C に戻します．
		cv::Mat result;
		cv::Mat result2;
		sub2(Rect(0, 0, sub2.cols, sub2.rows)).copyTo(result);
		tempB(Rect(0, 0, tempA.cols, tempA.rows)).copyTo(result2);

		//sprintf(fname, "%d_blu.png", load_image_count);
		//imwrite(fname, result);

		sprintf(fname, "%d_org.png", load_image_count);
		imwrite(fname, result2);

		load_image_count++;

	}
	private: System::Void cCDoriginalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void saveObjToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (saveTipFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ fileName = saveTipFileDialog->FileName;

			FILE *fp = fopen(yaString::systemStringToChar(fileName), "w");

			int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
			int result_img_height = theRectangle.Height / scale_facter;

			theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
			theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
			int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
			int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
			int end_x = start_x + result_img_width;
			int end_y = start_y + result_img_height;

			cv::Mat roi_mat;
			if (mImageStack[layer_num[active_image_layer]].channel == 2) {
				cv::Mat magMat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

				roi_mat = yaImageStack::convertToMagnitude_gpu_f(magMat,
					mImageStack[layer_num[active_image_layer]].channel,
					mImageStack[layer_num[active_image_layer]].depth,
					MAX(abs(mImageStack[layer_num[active_image_layer]].adfMinMax[0]), abs(mImageStack[layer_num[active_image_layer]].adfMinMax[1]))
				);

			}
			else {
				roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
			}

			roi_mat.convertTo(roi_mat, CV_32FC1);

			flip(roi_mat, roi_mat, 0);

			for (int i = 0; i < result_img_width; i++) {
				for (int j = 0; j < result_img_height; j++) {
					fprintf(fp, "v %.6f %.6f %.6f\n", 10 * (float)i / result_img_width, 10 * (float)j / result_img_width, roi_mat.at<float>(j, i) / 100);
				}
			}

			float v0[3], v1[3], v2[3], v3[3];
			float fv0[3], fv1[3], fv2[3], fv3[3];
			float vn[3];

			for (int i = 0; i < result_img_width; i++) {
				for (int j = 0; j < result_img_height; j++) {
					if (i == 0 || j == 0 || i == result_img_width - 1 || j == result_img_height - 1) {
						fprintf(fp, "vn %.6f %.6f %.6f\n", 0., 0., 1.);
					}
					else {

						//+x
						v0[0] = 10. / result_img_width;
						v0[1] = 0.;
						v0[2] = roi_mat.at<float>(j, i + 1) / 100 - roi_mat.at<float>(j, i) / 100;
						//+y
						v1[0] = 0.;
						v1[1] = 10. / result_img_width;
						v1[2] = roi_mat.at<float>(j + 1, i) / 100 - roi_mat.at<float>(j, i) / 100;
						//-x
						v2[0] = -10. / result_img_width;
						v2[1] = 0.;
						v2[2] = roi_mat.at<float>(j, i - 1) / 100 - roi_mat.at<float>(j, i) / 100;
						//-y
						v3[0] = 0.;
						v3[1] = -10. / result_img_width;
						v3[2] = roi_mat.at<float>(j - 1, i) / 100 - roi_mat.at<float>(j, i) / 100;

						Cross(v0, v1, fv0);
						Cross(v1, v2, fv1);
						Cross(v2, v3, fv2);
						Cross(v3, v0, fv3);

						vn[0] = fv0[0] + fv1[0] + fv2[0] + fv3[0];
						vn[1] = fv0[1] + fv1[1] + fv2[1] + fv3[1];
						vn[2] = fv0[2] + fv1[2] + fv2[2] + fv3[2];

						float length = sqrt(vn[0] * vn[0] + vn[1] * vn[1] + vn[2] * vn[2]);

						for (int k = 0; k < 3; k++) {
							vn[k] /= length;
						}

						fprintf(fp, "vn %.6f %.6f %.6f\n", vn[0], vn[1], vn[2]);
					}
				}
			}

			for (int i = 0; i < result_img_width; i++) {
				for (int j = 0; j < result_img_height; j++) {
					fprintf(fp, "vt %.6f %.6f\n", (float)i / result_img_width, (float)j / result_img_width);
				}
			}

			//fprintf(fp, "vn 0.000000 1.000000 0.000000\n");

			for (int i = 0; i < result_img_width - 1; i++) {
				for (int j = 0; j < result_img_height - 1; j++) {
					fprintf(fp, "f %d//%d %d//%d %d//%d %d//%d\n",
						i*result_img_height + j + 1, i*result_img_height + j + 1,
						(i + 1)*result_img_height + j + 1, i*result_img_height + j + 1,
						(i + 1)*result_img_height + j + 1 + 1, i*result_img_height + j + 1,
						i*result_img_height + j + 1 + 1, i*result_img_height + j + 1

						/*j*result_img_width + i + 1, j*result_img_width + i + 1,
						(j+ 1)*result_img_width + i + 1, j*result_img_width + i + 1,
						(j + 1)*result_img_width + i + 1 + 1, j*result_img_width + i + 1,
						j*result_img_width + i + 1 + 1, j*result_img_width + i + 1*/


					);
				}
			}

			fclose(fp);
		}
	}



	private: float* Cross(float* vector1, float* vector2, float *result)
	{
		result[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
		result[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
		result[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];

		float length = sqrt(result[0] * result[0] + result[1] * result[1] + result[2] * result[2]);

		for (int i = 0; i < 3; i++) {
			result[i] /= length;
		}

		return result;
	}

	public: BindingList<level1Product^>^ listLevel1Prodcut;

	private: System::Void openTSXXmlToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ dlg = gcnew OpenFileDialog;
		dlg->Filter = "画像ファイル|*.xml";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}

		System::String^ fname = dlg->FileName;

		/*listLevel1Prodcut = gcnew BindingList<level1Product^>();

		XmlSerializer^ xmlSerializer = gcnew XmlSerializer(BindingList<level1Product^>::typeid);
		FileStream^ fileStream = File::Open(fname, FileMode::Open, FileAccess::Read);

		listLevel1Prodcut->Clear();
		listLevel1Prodcut = (BindingList<level1Product^>^)xmlSerializer->Deserialize(fileStream);*/

		level1Product^ Level1Product;

		XmlSerializer^ xmlSerializer = gcnew XmlSerializer(level1Product::typeid);

		FileStream^ fileStream = File::Open(fname, FileMode::Open, FileAccess::Read);

		Level1Product = (level1Product^)xmlSerializer->Deserialize(fileStream);

		cli::array<level1ProductProductSpecificComplexImageInfo^, 1>^ test;
		test = (Level1Product->productSpecific->complexImageInfo::get());
		printf("%lf\n", test[0]->commonPRF);

		fileStream->Close();

	}

	private: System::Void saveObj2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (saveTipFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ fileName = saveTipFileDialog->FileName;

			FILE *fp = fopen(yaString::systemStringToChar(fileName), "w");

			int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
			int result_img_height = theRectangle.Height / scale_facter;

			float scale_facter0 = mImageStack[layer_num[behind_image_layer]].scale_facter;
			int result_img_width0 = theRectangle.Width / scale_facter0;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
			int result_img_height0 = theRectangle.Height / scale_facter0;


			theRectangle.X += (clicked_index % 4) * listPictureBox[0]->Width;
			theRectangle.Y += (clicked_index / 4) * listPictureBox[0]->Height;
			int start_x = mImageStack[layer_num[active_image_layer]].image_view_start_x + theRectangle.X / scale_facter;
			int start_y = mImageStack[layer_num[active_image_layer]].image_view_start_y + theRectangle.Y / scale_facter;
			int end_x = start_x + result_img_width;
			int end_y = start_y + result_img_height;

			int start_x0 = mImageStack[layer_num[behind_image_layer]].image_view_start_x + theRectangle.X / scale_facter0;
			int start_y0 = mImageStack[layer_num[behind_image_layer]].image_view_start_y + theRectangle.Y / scale_facter0;
			int end_x0 = start_x0 + result_img_width0;
			int end_y0 = start_y0 + result_img_height0;

			//image

			cv::Mat magMat;

			cv::Mat img_mat;
			if (mImageStack[layer_num[active_image_layer]].channel == 2) {
				magMat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

				img_mat = yaImageStack::convertToMagnitude(magMat,
					mImageStack[layer_num[active_image_layer]].channel,
					mImageStack[layer_num[active_image_layer]].depth,
					MAX(abs(mImageStack[layer_num[active_image_layer]].adfMinMax[0]), abs(mImageStack[layer_num[active_image_layer]].adfMinMax[1]))
				);

			}
			else {
				img_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
			}

			cv::Mat in[] = {img_mat, img_mat, img_mat };

			img_mat.release();

			cv::Mat result = cv::Mat(img_mat.rows, img_mat.cols, CV_8UC3);

			cv::merge(in, 3, result);//3バンドの色合成


			System::String^ imgName = fileName + "_img.bmp";

			imwrite(yaString::systemStringToChar(imgName), result);


			//DEM
			cv::Mat roi_mat,roi_mat0;
			if (mImageStack[layer_num[behind_image_layer]].channel == 2) {
				magMat = cv::Mat(mImageStack[layer_num[behind_image_layer]].orgMat, cv::Rect(start_x0, start_y0, result_img_width0, result_img_height0));

				roi_mat0 = yaImageStack::convertToMagnitude_gpu_f(magMat,
					mImageStack[layer_num[behind_image_layer]].channel,
					mImageStack[layer_num[behind_image_layer]].depth,
					MAX(abs(mImageStack[layer_num[behind_image_layer]].adfMinMax[0]), abs(mImageStack[layer_num[behind_image_layer]].adfMinMax[1]))
				);

			}
			else {
				roi_mat0 = cv::Mat(mImageStack[layer_num[behind_image_layer]].orgMat, cv::Rect(start_x0, start_y0, result_img_width0, result_img_height0));
			}

			roi_mat0.convertTo(roi_mat0, CV_32FC1);

			flip(roi_mat0, roi_mat, 0);

			for (int i = 0; i < result_img_width0; i++) {
				for (int j = 0; j < result_img_height0; j++) {
					fprintf(fp, "v %.6f %.6f %.6f\n", 10 * (float)i / result_img_width0, 10 * (float)j / result_img_width0, roi_mat.at<float>(j, i) / 100);
				}
			}

			for (int i = 0; i < result_img_width0; i++) {
				for (int j = 0; j < result_img_height0; j++) {
					fprintf(fp, "vt %.6f %.6f\n", (float)i / result_img_width0, (float)j / result_img_height0);
				}
			}

			float v0[3], v1[3], v2[3], v3[3];
			float fv0[3], fv1[3], fv2[3], fv3[3];
			float vn[3];

			for (int i = 0; i < result_img_width0; i++) {
				for (int j = 0; j < result_img_height0; j++) {
					if (i == 0 || j == 0 || i == result_img_width0 - 1 || j == result_img_height0 - 1) {
						fprintf(fp, "vn %.6f %.6f %.6f\n", 0., 0., 1.);
					}
					else {

						//+x
						v0[0] = 10. / result_img_width0;
						v0[1] = 0.;
						v0[2] = roi_mat.at<float>(j, i + 1) / 100 - roi_mat.at<float>(j, i) / 100;
						//+y
						v1[0] = 0.;
						v1[1] = 10. / result_img_width0;
						v1[2] = roi_mat.at<float>(j + 1, i) / 100 - roi_mat.at<float>(j, i) / 100;
						//-x
						v2[0] = -10. / result_img_width0;
						v2[1] = 0.;
						v2[2] = roi_mat.at<float>(j, i - 1) / 100 - roi_mat.at<float>(j, i) / 100;
						//-y
						v3[0] = 0.;
						v3[1] = -10. / result_img_width0;
						v3[2] = roi_mat.at<float>(j - 1, i) / 100 - roi_mat.at<float>(j, i) / 100;

						Cross(v0, v1, fv0);
						Cross(v1, v2, fv1);
						Cross(v2, v3, fv2);
						Cross(v3, v0, fv3);

						vn[0] = fv0[0] + fv1[0] + fv2[0] + fv3[0];
						vn[1] = fv0[1] + fv1[1] + fv2[1] + fv3[1];
						vn[2] = fv0[2] + fv1[2] + fv2[2] + fv3[2];

						float length = sqrt(vn[0] * vn[0] + vn[1] * vn[1] + vn[2] * vn[2]);

						for (int k = 0; k < 3; k++) {
							vn[k] /= length;
						}

						fprintf(fp, "vn %.6f %.6f %.6f\n", vn[0], vn[1], vn[2]);
					}
				}
			}


			//fprintf(fp, "vn 0.000000 1.000000 0.000000\n");

			for (int i = 0; i < result_img_width0 - 1; i++) {
				for (int j = 0; j < result_img_height0 - 1; j++) {
					fprintf(fp, "f %d/%d/%d %d/%d/%d %d/%d/%d\n",
						i*result_img_height0 + j + 1,
						i*result_img_height0 + j + 1,
						i*result_img_height0 + j + 1,

						(i + 1)*result_img_height0 + j + 1,
						(i + 1)*result_img_height0 + j + 1,
						i*result_img_height0 + j + 1,

						(i + 1)*result_img_height0 + j + 1 + 1,
						(i + 1)*result_img_height0 + j + 1 + 1,
						i*result_img_height0 + j + 1
					);


					fprintf(fp, "f %d/%d/%d %d/%d/%d %d/%d/%d\n",
						(i + 1)*result_img_height0 + j + 1 + 1,
						(i + 1)*result_img_height0 + j + 1 + 1,
						i*result_img_height0 + j + 1,

						i*result_img_height0 + j + 1 + 1,
						i*result_img_height0 + j + 1 + 1,
						i*result_img_height0 + j + 1,

						i*result_img_height0 + j + 1,
						i*result_img_height0 + j + 1,
						i*result_img_height0 + j + 1
					);

				}
			}

			fclose(fp);
		}

	}
};
}
