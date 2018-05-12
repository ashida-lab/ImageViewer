#pragma once

#include "yaCommon.h"
#include "yaImageStack.h"

using namespace cv;
using namespace std;

namespace ImageViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;
	using namespace System::Drawing::Imaging;

	cv::Mat originalImg;
	cv::Mat resultImg;

	int radius_a = 50;
	int radius_b = 50;
	float angle_el = -90;

	/// <summary>
	/// Summary for deconvolutionForm
	/// </summary>
	public ref class deconvForm : public System::Windows::Forms::Form
	{
	public:

		deconvForm(cv::Mat inImg)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			if (inImg.empty()){
				this->Close();
			}

			originalImg = inImg.clone();

			splitContainer1->Dock = DockStyle::Fill;
			splitContainer1->Panel1->AutoScroll = true;
			splitContainer1->Panel2->AutoScroll = true;

			resultPictureBox->Location = System::Drawing::Point(0, 0);
			resultPictureBox->SizeMode = PictureBoxSizeMode::AutoSize;

			printf("%d %d\n", kernelPictureBox->Width, kernelPictureBox->Height);

			float rho = 0;

			float *data = (float *)malloc(sizeof(float)*kernelPictureBox->Width*kernelPictureBox->Height);
			for (int i = 0; i < kernelPictureBox->Height; ++i){
				for (int j = 0; j < kernelPictureBox->Width; ++j){
					int cnt = i*kernelPictureBox->Width + j;
					float x0 = j - kernelPictureBox->Width / 2;
					float y0 = i - kernelPictureBox->Height / 2;

					float x = x0*cos(angle_el*Math::PI / 180) + y0*sin(angle_el*Math::PI / 180);
					float y = -x0*sin(angle_el*Math::PI / 180) + y0*cos(angle_el*Math::PI / 180);
					data[cnt] = //100*256/(2*Math::PI*radius_a*radius_b*sqrt(1-rho*rho))*
						255 * exp((-1. / (2 * (1 - rho*rho))*(x*x / radius_a / radius_a - 2 * rho*x*y / radius_a / radius_b + y*y / radius_b / radius_b)));
				}
			}

			cv::Mat kernelImg(kernelPictureBox->Width, kernelPictureBox->Height, CV_32F, data);

			kernelImg.convertTo(kernelImg, CV_8UC1);

			//PictureBoxと同じ大きさのBitmapクラスを作成する。
			//Bitmap^ bmpPicBox = gcnew Bitmap(kernelPictureBox->Width, kernelPictureBox->Height);
			//空のBitmapをPictureBoxのImageに指定する。
			//kernelPictureBox->Image = bmpPicBox;
			kernelPictureBox->Image = yaImageStack::mat2bmp(kernelImg);

			resultImg = cv::Mat(originalImg.cols * 4, originalImg.rows * 4, originalImg.type());
			cv::resize(originalImg, resultImg, resultImg.size(), 0, 0);
			normalize(resultImg, resultImg, 0, 255, CV_MINMAX);
			resultPictureBox->Image = yaImageStack::mat2bmp(resultImg);

			//楕円を描く
			Graphics^ g = Graphics::FromImage(kernelPictureBox->Image);
			Pen^ p = gcnew Pen(Color::Red, 4);
			Pen^ pAxis = gcnew Pen(Color::Blue, 4);

			g->TranslateTransform(kernelPictureBox->Width / 2, kernelPictureBox->Height / 2);
			g->RotateTransform(angle_el);

			g->DrawEllipse(p, -radius_a, -radius_b, 2 * radius_a, 2 * radius_b);
			g->DrawEllipse(p, radius_a - 4, -4, 2 * 4, 2 * 4);
			g->DrawLine(pAxis, 0, 0, 0, radius_b + 2); //Ｘ軸 
			g->DrawEllipse(pAxis, -4, radius_b - 4, 2 * 4, 2 * 4);

			g->ResetTransform();

			kernelPictureBox->Refresh();
			p->~Pen();
			pAxis->~Pen();
			g->~Graphics();

			kernelPictureBox->MouseDown += gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseDown);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~deconvForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  topPanel;
	private: System::Windows::Forms::ComboBox^  presetComboBox;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::PictureBox^  kernelPictureBox;
	private: System::Windows::Forms::PictureBox^  resultPictureBox;
	private: System::Windows::Forms::Button^  closeButton;
	protected:

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
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->presetComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->kernelPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->resultPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kernelPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->Controls->Add(this->closeButton);
			this->topPanel->Controls->Add(this->presetComboBox);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(556, 30);
			this->topPanel->TabIndex = 0;
			// 
			// closeButton
			// 
			this->closeButton->Location = System::Drawing::Point(471, 4);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(75, 23);
			this->closeButton->TabIndex = 1;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &deconvForm::closeButton_Click);
			// 
			// presetComboBox
			// 
			this->presetComboBox->FormattingEnabled = true;
			this->presetComboBox->Location = System::Drawing::Point(12, 4);
			this->presetComboBox->Name = L"presetComboBox";
			this->presetComboBox->Size = System::Drawing::Size(121, 20);
			this->presetComboBox->TabIndex = 0;
			this->presetComboBox->Text = L"Kernel Preset";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 30);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->kernelPictureBox);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->resultPictureBox);
			this->splitContainer1->Size = System::Drawing::Size(556, 268);
			this->splitContainer1->SplitterDistance = 278;
			this->splitContainer1->TabIndex = 1;
			// 
			// kernelPictureBox
			// 
			this->kernelPictureBox->Location = System::Drawing::Point(12, 6);
			this->kernelPictureBox->Name = L"kernelPictureBox";
			this->kernelPictureBox->Size = System::Drawing::Size(256, 256);
			this->kernelPictureBox->TabIndex = 0;
			this->kernelPictureBox->TabStop = false;
			this->kernelPictureBox->Click += gcnew System::EventHandler(this, &deconvForm::kernelPictureBox_Click);
			// 
			// resultPictureBox
			// 
			this->resultPictureBox->Location = System::Drawing::Point(8, 6);
			this->resultPictureBox->Name = L"resultPictureBox";
			this->resultPictureBox->Size = System::Drawing::Size(256, 256);
			this->resultPictureBox->TabIndex = 0;
			this->resultPictureBox->TabStop = false;
			// 
			// deconvolutionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 298);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"deconvolutionForm";
			this->Text = L"deconvolutionForm";
			this->topPanel->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kernelPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Drawing::Point clickPoint;

			 //Lxのプロパティ
	public: cv::Mat getResult()
	{
		return resultImg;
	}

			//マウスイベント
			//Mouse Event
	private: System::Void myMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button != System::Windows::Forms::MouseButtons::Left){
			return;
		}

		Control^ control = dynamic_cast<Control^>(sender);

		clickPoint = System::Drawing::Point(e->X, e->Y);

		if (e->Button == System::Windows::Forms::MouseButtons::Left){
			if (pow(radius_a*cos(angle_el / 180.*Math::PI) - (clickPoint.X - kernelPictureBox->Width / 2), 2)
				+ pow(radius_a*sin(angle_el / 180.*Math::PI) - (clickPoint.Y - kernelPictureBox->Height / 2), 2) < 16){
				control->MouseMove += gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseMoveLeft_a);
				control->MouseUp += gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseUpLeft_a);
			}
			else if (pow(radius_b*cos((angle_el + 90) / 180.*Math::PI) - (clickPoint.X - kernelPictureBox->Width / 2), 2)
				+ pow(radius_b*sin((angle_el + 90) / 180.*Math::PI) - (clickPoint.Y - kernelPictureBox->Height / 2), 2) < 16){
				control->MouseMove += gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseMoveLeft_b);
				control->MouseUp += gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseUpLeft_b);
			}


		}
	}

	private: System::Void myMouseUpLeft_a(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = System::Drawing::Point(e->X, e->Y);

		//イベントをリセット
		control->MouseMove -= gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseMoveLeft_a);
		control->MouseUp -= gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseUpLeft_a);

		resultImg = callDeconvolutionImage(originalImg);
		cv::resize(resultImg, resultImg, cv::Size(), 4, 4);

		resultPictureBox->Image = yaImageStack::mat2bmp(resultImg);
	}

	private: System::Void myMouseUpLeft_b(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = System::Drawing::Point(e->X, e->Y);

		//イベントをリセット
		control->MouseMove -= gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseMoveLeft_b);
		control->MouseUp -= gcnew MouseEventHandler(this, &ImageViewer::deconvForm::myMouseUpLeft_b);

		resultImg = callDeconvolutionImage(originalImg);
		cv::resize(resultImg, resultImg, cv::Size(), 4, 4);

		resultPictureBox->Image = yaImageStack::mat2bmp(resultImg);

	}

	private: System::Void myMouseMoveLeft_a(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = System::Drawing::Point(e->X, e->Y);

		printf("[move %d %d %f %f %f]\n", endPoint.X, endPoint.Y, calcDegree(control, e),
			radius_a*cos(angle_el / 180.*Math::PI) + kernelPictureBox->Width / 2,
			radius_a*sin(angle_el / 180.*Math::PI) + kernelPictureBox->Height / 2
			);

		angle_el = calcDegree(control, e);
		radius_a = sqrt(pow(e->X - kernelPictureBox->Width / 2, 2) + pow(e->Y - kernelPictureBox->Height / 2, 2));

		float rho = 0;

		float *data = (float *)malloc(sizeof(float)*kernelPictureBox->Width*kernelPictureBox->Height);
		for (int i = 0; i < kernelPictureBox->Height; ++i){
			for (int j = 0; j < kernelPictureBox->Width; ++j){
				int cnt = i*kernelPictureBox->Width + j;
				float x0 = j - kernelPictureBox->Width / 2;
				float y0 = i - kernelPictureBox->Height / 2;

				float x = x0*cos(angle_el*Math::PI / 180) + y0*sin(angle_el*Math::PI / 180);
				float y = -x0*sin(angle_el*Math::PI / 180) + y0*cos(angle_el*Math::PI / 180);
				data[cnt] = //100 * 256 / (2 * Math::PI*radius_a*radius_b*sqrt(1 - rho*rho))*
					255.*exp((-1. / (2 * (1 - rho*rho))*(x*x / radius_a / radius_a - 2 * rho*x*y / radius_a / radius_b + y*y / radius_b / radius_b)));
			}
		}

		cv::Mat kernelImg(kernelPictureBox->Width, kernelPictureBox->Height, CV_32F, data);
		kernelImg.convertTo(kernelImg, CV_8UC1);

		//PictureBoxと同じ大きさのBitmapクラスを作成する。
		//Bitmap^ bmpPicBox = gcnew Bitmap(kernelPictureBox->Width, kernelPictureBox->Height);
		//空のBitmapをPictureBoxのImageに指定する。
		//kernelPictureBox->Image = bmpPicBox;
		kernelPictureBox->Image = yaImageStack::mat2bmp(kernelImg);

		//楕円を描く
		Graphics^ g = Graphics::FromImage(kernelPictureBox->Image);
		Pen^ p = gcnew Pen(Color::Red, 4);
		Pen^ pAxis = gcnew Pen(Color::Blue, 4);

		g->TranslateTransform(kernelPictureBox->Width / 2, kernelPictureBox->Height / 2);
		g->RotateTransform(angle_el);

		g->DrawEllipse(p, -radius_a, -radius_b, 2 * radius_a, 2 * radius_b);
		g->DrawEllipse(p, radius_a - 4, -4, 2 * 4, 2 * 4);
		g->DrawLine(pAxis, 0, 0, 0, radius_b + 2); //Ｘ軸 
		g->DrawEllipse(pAxis, -4, radius_b - 4, 2 * 4, 2 * 4);

		g->ResetTransform();

		kernelPictureBox->Refresh();
		p->~Pen();
		pAxis->~Pen();
		g->~Graphics();
	}

	private: System::Void myMouseMoveLeft_b(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{

		Control^ control = dynamic_cast<Control^>(sender);

		System::Drawing::Point endPoint = System::Drawing::Point(e->X, e->Y);

		printf("[move %d %d %f %f %f]\n", endPoint.X, endPoint.Y, calcDegree(control, e),
			radius_b*cos((angle_el + 90) / 180.*Math::PI) + kernelPictureBox->Width / 2,
			radius_b*sin((angle_el + 90) / 180.*Math::PI) + kernelPictureBox->Height / 2
			);

		radius_b = sqrt(pow(e->X - kernelPictureBox->Width / 2, 2) + pow(e->Y - kernelPictureBox->Height / 2, 2));

		float rho = 0;

		float *data = (float *)malloc(sizeof(float)*kernelPictureBox->Width*kernelPictureBox->Height);
		for (int i = 0; i < kernelPictureBox->Height; ++i){
			for (int j = 0; j < kernelPictureBox->Width; ++j){
				int cnt = i*kernelPictureBox->Width + j;
				float x0 = j - kernelPictureBox->Width / 2;
				float y0 = i - kernelPictureBox->Height / 2;

				float x = x0*cos(angle_el*Math::PI / 180) + y0*sin(angle_el*Math::PI / 180);
				float y = -x0*sin(angle_el*Math::PI / 180) + y0*cos(angle_el*Math::PI / 180);
				data[cnt] = //100 * 256 / (2 * Math::PI*radius_a*radius_b*sqrt(1 - rho*rho))*
					255.*exp((-1. / (2 * (1 - rho*rho))*(x*x / radius_a / radius_a - 2 * rho*x*y / radius_a / radius_b + y*y / radius_b / radius_b)));
			}
		}

		cv::Mat kernelImg(kernelPictureBox->Width, kernelPictureBox->Height, CV_32F, data);
		kernelImg.convertTo(kernelImg, CV_8UC1);

		//PictureBoxと同じ大きさのBitmapクラスを作成する。
		//Bitmap^ bmpPicBox = gcnew Bitmap(kernelPictureBox->Width, kernelPictureBox->Height);
		//空のBitmapをPictureBoxのImageに指定する。
		//kernelPictureBox->Image = bmpPicBox;
		kernelPictureBox->Image = yaImageStack::mat2bmp(kernelImg);

		//楕円を描く
		Graphics^ g = Graphics::FromImage(kernelPictureBox->Image);
		Pen^ p = gcnew Pen(Color::Red, 4);
		Pen^ pAxis = gcnew Pen(Color::Blue, 4);

		g->TranslateTransform(kernelPictureBox->Width / 2, kernelPictureBox->Height / 2);
		g->RotateTransform(angle_el);

		g->DrawEllipse(p, -radius_a, -radius_b, 2 * radius_a, 2 * radius_b);
		g->DrawEllipse(p, radius_a - 4, -4, 2 * 4, 2 * 4);
		g->DrawLine(pAxis, 0, 0, 0, radius_b + 2); //Ｘ軸 
		g->DrawEllipse(pAxis, -4, radius_b - 4, 2 * 4, 2 * 4);

		g->ResetTransform();

		kernelPictureBox->Refresh();
		p->~Pen();
		pAxis->~Pen();
		g->~Graphics();
	}

	private: float calcDegree(Control^ control, System::Windows::Forms::MouseEventArgs^ e){
		float degree = 0.0;

		System::Drawing::Point pt = System::Drawing::Point(e->X - (control->Width / 2), e->Y - (control->Height / 2));

		double theta = Math::Atan2(pt.Y, pt.X);
		degree = (float)(theta*(180. / Math::PI));

		return degree;// ((float)Math::IEEERemainder(degree, 360.0));
	}

	private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e)
	{

		//cv::destroyWindow("rend");
		this->Close();

	}

	private: System::Void kernelPictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: cv::Mat callDeconvolutionImage(cv::Mat inImg)
	{
		vector<cv::Mat> mv;
		float rho = 0;

		float *data = (float *)malloc(sizeof(float) * 7 * 7);
		for (int i = 0; i < 7; ++i){
			for (int j = 0; j < 7; ++j){
				int cnt = i * 7 + j;
				float x0 = (j - 7 / 2)*256. / 7.;
				float y0 = (i - 7 / 2)*256. / 7.;

				float x = x0*cos(angle_el*Math::PI / 180) + y0*sin(angle_el*Math::PI / 180);
				float y = -x0*sin(angle_el*Math::PI / 180) + y0*cos(angle_el*Math::PI / 180);
				data[cnt] = 1 / (2 * Math::PI*radius_a*radius_b*sqrt(1 - rho*rho))*
					exp((-1. / (2 * (1 - rho*rho))*(x*x / radius_a / radius_a - 2 * rho*x*y / radius_a / radius_b + y*y / radius_b / radius_b)));
			}
		}

		cv::Mat kernelImg(7, 7, CV_32F, data);

		cv::Mat outImg = deconvolutionImage(inImg, kernelImg);

		split(outImg, mv);
		magnitude(mv[0], mv[1], mv[0]);

		normalize(mv[0], mv[0], 0, 255, CV_MINMAX);

		mv[0].convertTo(outImg, CV_8U);

		return outImg;
	}


	private: cv::Mat deconvolutionImage(cv::Mat inImg0, cv::Mat kernel0)
	{
		cv::Mat inImg;
		cv::Mat kernel;
		inImg = deconvConvert2Complex(inImg0);
		kernel = deconvConvert2Complex(kernel0);

		// 必要なら出力配列の再割り当てを行います．
		cv::Mat outImg = cv::Mat(abs(inImg.cols - kernel.cols) + 1, abs(inImg.rows - kernel.rows) + 1, inImg.type());
		cv::Size dftSize;

		// DFT 変換のサイズを計算します．
		dftSize.width = getOptimalDFTSize(inImg.cols + kernel.cols - 1);
		dftSize.height = getOptimalDFTSize(inImg.rows + kernel.rows - 1);

		// テンポラリバッファを確保し， 0 で初期化します
		Mat tempA(dftSize, inImg.type(), Scalar::all(0));
		Mat tempB(dftSize, kernel.type(), Scalar::all(0));

		// A と B をそれぞれ tmpA と tmpB の左上の角にコピーします．
		Mat roiA(tempA, Rect(0, 0, inImg.cols, inImg.rows));
		inImg.copyTo(roiA);
		Mat roiB(tempB, Rect(0, 0, kernel.cols, kernel.rows));
		kernel.copyTo(roiB);

		// パックされた A と B を変換し置換します．
		// 処理を高速化するために "nonzeroRows" を利用します．
		dft(tempA, tempA, 0, inImg.rows);
		dft(tempB, tempB, 0, kernel.rows);

		// スペクトルの積を求めます；
		// この関数は，スペクトルのパックされた表現を扱うことができます．
		//cv::mulSpectrums(tempA, tempB, tempA, 0); 
		cv::mulSpectrums(tempA, tempB, tempA, CV_DXT_MUL_CONJ);

		// 結果を周波数領域から逆変換します．
		// すべての行が　0　でないとしても
		// 必要なのは C.rows だけなので
		// nonzeroRows == C.rows を渡します．
		dft(tempA, tempA, DFT_INVERSE + DFT_SCALE, outImg.rows);

		// 結果をコピーして C に戻します．
		tempA(Rect(0, 0, tempA.cols, tempA.rows)).copyTo(outImg);

		return outImg;
	}

	private: cv::Mat deconvConvert2Complex(cv::Mat src)
	{
		vector<cv::Mat> mv;

		cv::Size s_size = src.size();
		cv::Mat Re_img = cv::Mat(s_size, CV_32F);
		cv::Mat Im_img = cv::Mat::zeros(s_size, CV_32F);
		cv::Mat Complex_img = cv::Mat(s_size, CV_32FC2);

		src.convertTo(Re_img, CV_32F);
		mv.push_back(Re_img);
		mv.push_back(Im_img);
		merge(mv, Complex_img);

		return Complex_img;
	}


			 // swap 1,3 and 2,4 quadrants respectively
	private: System::Void shiftDFT(cv::Mat src, cv::Mat dst)
	{
		cv::Mat tmp;
		int cx = src.cols / 2;
		int cy = src.rows / 2;

		for (int i = 0; i <= cx; i += cx) {
			cv::Mat qs(src, cv::Rect(i^cx, 0, cx, cy));
			cv::Mat qd(dst, cv::Rect(i, cy, cx, cy));
			qs.copyTo(tmp);
			qd.copyTo(qs);
			tmp.copyTo(qd);
		}
	}

	};
}
