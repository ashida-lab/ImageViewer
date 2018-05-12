#include "MainForm.h"

#include "OpenGLSimpleAdapter.h"

//#include <GL/glut.h>

using namespace sample11;
using namespace std;

GLUquadricObj *Sphere;
//GLUquadricObj *Sattelite;
GLUquadricObj *ObsPoint;
GLuint tex;
double trans[3] = { 0.0, 0.0, 0.0 };
double theta[3] = { 0.0, 0.0, 0.0 };
double angle[3] = { -90.0, 0.0, 45.0 };
static int axis = 1;
float earth_scale_facter = -3.0;
System::Drawing::Point startPoint;

/*
** 光源
*/
static const GLfloat lightpos[] = { 20.0, 0.0, 0.0, 0.0 }; /* 位置　　　 */
static const GLfloat lightcol[] = { 1.0, 1.0, 1.0, 1.0 }; /* 直接光強度 */
static const GLfloat lightamb[] = { 0.1, 0.1, 0.1, 1.0 }; /* 環境光強度 */

/*
** テクスチャ
*/
static const char texture1[] = "C:\\Users\\ashiy\\Pictures\\land_ocean_ice_8192.png"; /* テクスチャファイル名 */
//static const char texture1[] = "E:\\WV2\\Paris\\Basic, Paris, France, 50cm_053951940020\\053951940020_01_P001_PAN\\14SEP12113301-P1BS-053951940020_01_P001.TIF";


[sample11::STAThreadAttribute]
int main(int argc, char *argv[])
{
	sample11::MainForm ^fm = gcnew sample11::MainForm();
	fm->ShowDialog();
	return 0;
}

System::Void MainForm::changeDetectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
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

	printf("[Change] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	//imshow("change", roi_mat);

	cv::Mat sub_aligned = mImageStack[layer_num[active_image_layer]].twoImageRegistartion2(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 1);

	//imshow("change2", sub_aligned);

	cv::Mat in[] = { sub_aligned, sub_aligned, roi_mat };

	cv::Mat result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);

	cv::merge(in, 3, result);//3バンドの色合成

	//新規レイヤーの登録

	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] change detection");
	behindImgComboBox->Items->Add("[Result] change detection");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::panSharpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 1){
		return;
	}

	if (mImageStack[layer_num[behind_image_layer]].channel != 3){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	printf("[Change] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	cv::Mat sub_aligned = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 1);

	cv::Mat result = yaEditImage::PanSharp(sub_aligned, roi_mat);

	//新規レイヤーの登録

	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] PanSharpen");
	behindImgComboBox->Items->Add("[Result] PanSharpen");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::optFlowToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	printf("[OptFlow] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	//imshow("change", roi_mat);

	cv::Mat sub_aligned = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 1);

	/*int i, j, dx, dy, rows, cols;
	IplImage *src_img1, *src_img2, *dst_img1;
	CvMat *velx, *vely;
	CvTermCriteria criteria;

	*src_img1 = sub_aligned;
	*src_img2 = roi_mat;

	cv::Mat in[] = { roi_mat, roi_mat, roi_mat };
	cv::Mat result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);
	cv::merge(in, 3, result);//3バンドの色合成

	*dst_img1 = result;

	// (1)速度ベクトルを格納する構造体の確保，等
	cols = src_img1->width;
	rows = src_img1->height;
	velx = cvCreateMat(rows, cols, CV_32FC1);
	vely = cvCreateMat(rows, cols, CV_32FC1);
	cvSetZero(velx);
	cvSetZero(vely);
	criteria = cvTermCriteria(CV_TERMCRIT_ITER | CV_TERMCRIT_EPS, 64, 0.01);

	// (4)オプティカルフローを計算（LK）
	cvCalcOpticalFlowPyrLK(src_img1, src_img2, cvSize(15, 15), velx, vely);
	// (5)計算されたフローを描画（LK）
	for (i = 0; i < cols; i += 5) {
	for (j = 0; j < rows; j += 5) {
	dx = (int)cvGetReal2D(velx, j, i);
	dy = (int)cvGetReal2D(vely, j, i);
	cvLine(dst_img1, cvPoint(i, j), cvPoint(i + dx, j + dy), CV_RGB(255, 0, 0), 1, CV_AA, 0);
	}
	}

	result = cv::cvarrToMat(dst_img1);*/

	std::vector<cv::KeyPoint> keypoints;
	std::vector<cv::Point2f> points;

	auto detector = cv::GFTTDetector::create(100, 0.05, 3);
	detector->detect(sub_aligned, keypoints);

	for (std::vector<cv::KeyPoint>::iterator itk = keypoints.begin(); itk != keypoints.end(); ++itk)
	{
		points.push_back(itk->pt);
	}

	std::vector<cv::Point2f> newpoints;
	std::vector<unsigned char> status;
	std::vector<float> errors;

	cv::calcOpticalFlowPyrLK(sub_aligned, roi_mat, points, newpoints, status, errors, cv::Size(21, 21), 3, cvTermCriteria(CV_TERMCRIT_ITER | CV_TERMCRIT_EPS, 20, 0.05), 0);

	cv::Mat in[] = { roi_mat, roi_mat, roi_mat };
	cv::Mat result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);
	cv::merge(in, 3, result);//3バンドの色合成

	drawKeypoints(result, keypoints, result, Scalar(0, 0, 255));

	for (int i = 0; i < points.size(); i += 5) {
		cv::line(result, points[i], newpoints[i], CV_RGB(255, 0, 0), 1, CV_AA, 0);
	}
	//新規レイヤーの登録

	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] Optflow");
	behindImgComboBox->Items->Add("[Result] Optflow");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	printf("[Add] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	//imshow("change", roi_mat);

	cv::Mat sub_aligned = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 1);

	cv::Mat result = (roi_mat + sub_aligned) / 2.;

	//新規レイヤーの登録

	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] Add");
	behindImgComboBox->Items->Add("[Result] Add");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::cutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat result;

	/*if (mOrgImg.channels() != 1){
	vector<cv::Mat> mv;
	split(mOrgImg, mv);
	result = cv::Mat(mv[0], cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else{
	result = cv::Mat(mOrgImg, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}*/

	result = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	printf("[Cut] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	//新規レイヤーの登録

	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	mImageStack[layer_num[load_image_count]].dspMat = yaImageStack::convertToMagnitude(result, mImageStack[layer_num[active_image_layer]].channel,
		mImageStack[layer_num[active_image_layer]].depth, MAX(abs(mImageStack[layer_num[active_image_layer]].adfMinMax[0]), abs(mImageStack[layer_num[active_image_layer]].adfMinMax[1])));

	mImageStack[layer_num[load_image_count]].adfMinMax[0] = mImageStack[layer_num[active_image_layer]].adfMinMax[0];
	mImageStack[layer_num[load_image_count]].adfMinMax[1] = mImageStack[layer_num[active_image_layer]].adfMinMax[1];

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] Cut");
	behindImgComboBox->Items->Add("[Result] Cut");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::interferogramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 2){
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

	cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	//cv::Mat slave_mat = cv::Mat(mImageStack[layer_num[behind_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	cv::Mat slave_mat = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 2);

	printf("channel %d\n", slave_mat.channels());

	yaEditImage EI;

	cv::Mat result = EI.Interferogram(master_mat, slave_mat);

	//新規レイヤーの登録

	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] interferogram");
	behindImgComboBox->Items->Add("[Result] interferogram");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::cCDToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 2){
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

	cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	//cv::Mat slave_mat = cv::Mat(mImageStack[layer_num[behind_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	cv::Mat slave_mat = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 2);

	printf("channel %d\n", slave_mat.channels());

	yaEditImage EI;

	//cv::Mat result = EI.CoherenceChanegDetect(master_mat, slave_mat);
	cv::Mat result = yaEditImage::CoherenceChanegDetectGPU(master_mat, slave_mat);

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] CCD");
	behindImgComboBox->Items->Add("[Result] CCD");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::cCDoriginalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 2){
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

	cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	//cv::Mat slave_mat = cv::Mat(mImageStack[layer_num[behind_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	cv::Mat slave_mat = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 2);

	printf("channel %d\n", slave_mat.channels());

	yaEditImage EI;

	cv::Mat result = EI.CoherenceChanegDetect(master_mat, slave_mat);
	//cv::Mat result = yaEditImage::CoherenceChanegDetectGPU(master_mat, slave_mat);

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] CCD2");
	behindImgComboBox->Items->Add("[Result] CCD2");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::interferometricLandUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 2){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 2){
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

	cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	cv::Mat slave_mat = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 2);
	printf("channel %d\n", slave_mat.channels());

	yaEditImage EI;

	//cv::Mat result_r = EI.CoherenceChanegDetect(master_mat, slave_mat);
	cv::Mat result_r = yaEditImage::CoherenceChanegDetectGPU(master_mat, slave_mat);

	cv::Mat roi_mat = cv::Mat(mOrgImg, cv::Rect(start_x, start_y , result_img_width, result_img_height));

	cv::Mat sub_aligned = mImageStack[layer_num[active_image_layer]].twoImageRegistartion(mImageStack, theRectangle, layer_num[active_image_layer], layer_num[behind_image_layer], scale_facter, 1);

	cv::Mat sub_aligned_roi = cv::Mat(sub_aligned, cv::Rect(0, 0, result_img_width, result_img_height));

	cv::Mat result_g = (roi_mat + sub_aligned_roi) / 2.;

	cv::Mat result_b = (sub_aligned_roi - roi_mat);
	double minVal, maxVal;
	minMaxLoc(result_b, &minVal, &maxVal, NULL, NULL, Mat());

	printf("%d %d\n", minVal, maxVal);
	result_b = 255.*(result_b - minVal) / (maxVal - minVal);


	result_r.convertTo(result_r, CV_8UC1);
	result_g.convertTo(result_g, CV_8UC1);
	result_b.convertTo(result_b, CV_8UC1);

	vector<cv::Mat> mv3;
	cv::Mat result;

	mv3.push_back(result_b);
	mv3.push_back(result_g);
	mv3.push_back(result_r);
	merge(mv3, result);

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] ILU");
	behindImgComboBox->Items->Add("[Result] ILU");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();


}

System::Void MainForm::angleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 2){
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

	cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	cv::Mat result = yaImageStack::convertToAngle(master_mat, master_mat.channels(), master_mat.depth());

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] angle");
	behindImgComboBox->Items->Add("[Result] angle");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::subAprtureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
		return;
	}

	if (mImageStack[layer_num[active_image_layer]].channel != 2){
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

	cv::Mat master_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].orgMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	master_mat = convert2Complex(master_mat);

	// 必要なら出力配列の再割り当てを行います．
	cv::Size dftSize;

	// DFT 変換のサイズを計算します．
	dftSize.width = getOptimalDFTSize(master_mat.cols - 1);
	dftSize.height = getOptimalDFTSize(master_mat.rows - 1);

	// テンポラリバッファを確保し， 0 で初期化します
	Mat tempA(dftSize, master_mat.type(), Scalar::all(0));

	// A と B をそれぞれ tmpA と tmpB の左上の角にコピーします．
	Mat roiA(tempA, Rect(0, 0, master_mat.cols, master_mat.rows));
	master_mat.copyTo(roiA);

	// パックされた A と B を変換し置換します．
	// 処理を高速化するために "nonzeroRows" を利用します．
	dft(tempA, tempA, 0, master_mat.rows);

	shiftDFT(tempA, tempA);


	// スペクトルの積を求めます；
	// この関数は，スペクトルのパックされた表現を扱うことができます．
	//cv::mulSpectrums(tempA, tempB, tempA, 0);
	//cv::mulSpectrums(tempA, tempB, tempA, CV_DXT_MUL_CONJ);

	// 結果を周波数領域から逆変換します．
	// すべての行が　0　でないとしても
	// 必要なのは C.rows だけなので
	// nonzeroRows == C.rows を渡します．
	dft(tempA, tempA, DFT_INVERSE + DFT_SCALE, master_mat.rows);


	// 結果をコピーして C に戻します．
	cv::Mat result;
	tempA(Rect(0, 0, tempA.cols, tempA.rows)).copyTo(result);

	vector<cv::Mat> mv;
	split(tempA, mv);

	double minI, minQ, maxI, maxQ;

	cv::minMaxLoc(mv[0], &minI, &maxI, NULL, NULL);
	cv::minMaxLoc(mv[1], &minQ, &maxQ, NULL, NULL);

	double max_value = max(sqrt(minI*minI + minQ*minQ), sqrt(maxI*maxI + maxQ*maxQ));

	//cv::normalize(result, result, -128, 128, NORM_MINMAX, CV_32FC2);

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	mImageStack[layer_num[load_image_count]].dspMat = yaImageStack::convertToMagnitude(result, result.channels(),
		result.depth(), max_value);

	mImageStack[layer_num[load_image_count]].channel = result.channels();
	mImageStack[layer_num[load_image_count]].depth = result.depth();
	mImageStack[layer_num[load_image_count]].adfMinMax[0] = mImageStack[layer_num[active_image_layer]].adfMinMax[0];
	mImageStack[layer_num[load_image_count]].adfMinMax[1] = mImageStack[layer_num[active_image_layer]].adfMinMax[1];

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] sub aperture");
	behindImgComboBox->Items->Add("[Result] sub aperture");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

cv::Mat MainForm::convert2Complex(cv::Mat src)
{
	vector<cv::Mat> mv;
	vector<cv::Mat> mv2;
	cv::Size s_size = src.size();
	cv::Mat Re_img = cv::Mat(s_size, CV_32F);
	cv::Mat Im_img = cv::Mat::zeros(s_size, CV_32F);
	cv::Mat Complex_img = cv::Mat(s_size, CV_32FC2);

	if (src.channels() == 1){
		src.convertTo(Re_img, CV_32F);
	}
	else{
		split(src, mv);
		mv[0].convertTo(Re_img, CV_32F);
		mv[1].convertTo(Im_img, CV_32F);
	}

	mv2.push_back(Re_img);
	mv2.push_back(Im_img);
	merge(mv2, Complex_img);

	return Complex_img;
}

// swap 1,3 and 2,4 quadrants respectively
System::Void MainForm::shiftDFT(cv::Mat src, cv::Mat dst)
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

// circle shift
System::Void MainForm::circShiftY(cv::Mat src, cv::Mat dst, int shift)
{
	int cx = src.cols;
	int cy1 = shift;
	int cy2 = src.rows - shift;

	cv::Mat qs, qd;

	qs=cv::Mat(src, cv::Rect(0, 0, cx, cy1));
	qd=cv::Mat(dst, cv::Rect(0, cy2, cx, cy1));
	qs.copyTo(qd);

	qs=cv::Mat(src, cv::Rect(0, cy1, cx, cy2));
	qd=cv::Mat(dst, cv::Rect(0, 0, cx, cy2));
	qs.copyTo(qd);

}

System::Void MainForm::goodToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	cv::Mat gray_img;
	cv::Mat result;
	if (roi_mat.channels() == 3){
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);

		result = roi_mat.clone();
	}
	else{
		gray_img = roi_mat.clone();

		cv::Mat in[] = { roi_mat, roi_mat, roi_mat };

		result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);

		cv::merge(in, 3, result);//3バンドの色合成
	}

	cv::normalize(gray_img, gray_img, 0, 255, cv::NORM_MINMAX);

	std::vector<cv::KeyPoint> keypoints;
	std::vector<cv::KeyPoint>::iterator itk;

	// 特徴点検出
	Ptr<FeatureDetector> detector = cv::GFTTDetector::create(80, 0.01, 5, 3);

	detector->detect(gray_img, keypoints);
	cv::Scalar color(0, 200, 255);
	for (itk = keypoints.begin(); itk != keypoints.end(); ++itk) {
		cv::circle(result, itk->pt, 1, color, -1);
		cv::circle(result, itk->pt, itk->size, color, 1, CV_AA);
		if (itk->angle >= 0) {
			cv::Point pt2(itk->pt.x + cos(itk->angle)*itk->size, itk->pt.y + sin(itk->angle)*itk->size);
			cv::line(result, itk->pt, pt2, color, 1, CV_AA);
		}
	}

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] FeatureDetect Good");
	behindImgComboBox->Items->Add("[Result] FeatureDetect Good");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	imshow("result", result);

	redrawImage();
}

System::Void MainForm::harrisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	cv::Mat gray_img;
	cv::Mat result;
	if (roi_mat.channels() == 3) {
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);

		result = roi_mat.clone();
	}
	else {
		gray_img = roi_mat.clone();

		cv::Mat in[] = { roi_mat, roi_mat, roi_mat };

		result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);

		cv::merge(in, 3, result);//3バンドの色合成
	}

	cv::normalize(gray_img, gray_img, 0, 255, cv::NORM_MINMAX);

	std::vector<cv::KeyPoint> keypoints;
	std::vector<cv::KeyPoint>::iterator itk;

	// 特徴点検出
	Ptr<FeatureDetector> detector = cv::GFTTDetector::create(80, 0.01, 5, 3, true);

	detector->detect(gray_img, keypoints);
	cv::Scalar color(0, 200, 255);
	for (itk = keypoints.begin(); itk != keypoints.end(); ++itk) {
		cv::circle(result, itk->pt, 1, color, -1);
		cv::circle(result, itk->pt, itk->size, color, 1, CV_AA);
		if (itk->angle >= 0) {
			cv::Point pt2(itk->pt.x + cos(itk->angle)*itk->size, itk->pt.y + sin(itk->angle)*itk->size);
			cv::line(result, itk->pt, pt2, color, 1, CV_AA);
		}
	}

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] FeatureDetect Harris");
	behindImgComboBox->Items->Add("[Result] FeatureDetect Harris");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::fastToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	cv::Mat gray_img;
	cv::Mat result;
	if (roi_mat.channels() == 3) {
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);

		result = roi_mat.clone();
	}
	else {
		gray_img = roi_mat.clone();

		cv::Mat in[] = { roi_mat, roi_mat, roi_mat };

		result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);

		cv::merge(in, 3, result);//3バンドの色合成
	}

	cv::normalize(gray_img, gray_img, 0, 255, cv::NORM_MINMAX);

	std::vector<cv::KeyPoint> keypoints;
	std::vector<cv::KeyPoint>::iterator itk;

	// 特徴点検出
	Ptr<FeatureDetector> detector = cv::FastFeatureDetector::create(80, false);

	detector->detect(gray_img, keypoints);
	cv::Scalar color(0, 200, 255);
	for (itk = keypoints.begin(); itk != keypoints.end(); ++itk) {
		cv::circle(result, itk->pt, 1, color, -1);
		cv::circle(result, itk->pt, itk->size, color, 1, CV_AA);
		if (itk->angle >= 0) {
			cv::Point pt2(itk->pt.x + cos(itk->angle)*itk->size, itk->pt.y + sin(itk->angle)*itk->size);
			cv::line(result, itk->pt, pt2, color, 1, CV_AA);
		}
	}

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] FeatureDetect Fast");
	behindImgComboBox->Items->Add("[Result] FeatureDetect Fast");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::mserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	cv::Mat gray_img;
	cv::Mat result;
	if (roi_mat.channels() == 3) {
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);

		result = roi_mat.clone();
	}
	else {
		gray_img = roi_mat.clone();

		cv::Mat in[] = { roi_mat, roi_mat, roi_mat };

		result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);

		cv::merge(in, 3, result);//3バンドの色合成
	}

	cv::normalize(gray_img, gray_img, 0, 255, cv::NORM_MINMAX);

	std::vector<cv::KeyPoint> keypoints;
	std::vector<cv::KeyPoint>::iterator itk;

	// 特徴点検出
	Ptr<FeatureDetector> detector = cv::MSER::create();

	detector->detect(gray_img, keypoints);
	cv::Scalar color(0, 200, 255);
	for (itk = keypoints.begin(); itk != keypoints.end(); ++itk) {
		cv::circle(result, itk->pt, 1, color, -1);
		cv::circle(result, itk->pt, itk->size, color, 1, CV_AA);
		if (itk->angle >= 0) {
			cv::Point pt2(itk->pt.x + cos(itk->angle)*itk->size, itk->pt.y + sin(itk->angle)*itk->size);
			cv::line(result, itk->pt, pt2, color, 1, CV_AA);
		}
	}

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] FeatureDetect Mser");
	behindImgComboBox->Items->Add("[Result] FeatureDetect Mser");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::orbToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}

	cv::Mat gray_img;
	cv::Mat result;
	if (roi_mat.channels() == 3) {
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);

		result = roi_mat.clone();
	}
	else {
		gray_img = roi_mat.clone();

		cv::Mat in[] = { roi_mat, roi_mat, roi_mat };

		result = cv::Mat(roi_mat.cols, roi_mat.rows, CV_8UC3);

		cv::merge(in, 3, result);//3バンドの色合成
	}

	cv::normalize(gray_img, gray_img, 0, 255, cv::NORM_MINMAX);

	std::vector<cv::KeyPoint> keypoints;
	std::vector<cv::KeyPoint>::iterator itk;

	Ptr<FeatureDetector> detector = ORB::create();

	detector->detect(gray_img, keypoints);
	cv::Scalar color(0, 200, 255);
	for (itk = keypoints.begin(); itk != keypoints.end(); ++itk) {
		cv::circle(result, itk->pt, 1, color, -1);
		cv::circle(result, itk->pt, itk->size, color, 1, CV_AA);
		if (itk->angle >= 0) {
			cv::Point pt2(itk->pt.x + cos(itk->angle)*itk->size, itk->pt.y + sin(itk->angle)*itk->size);
			cv::line(result, itk->pt, pt2, color, 1, CV_AA);
		}
	}

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
		return;
	}

	mImageStack[layer_num[load_image_count]].addNewLayer(mImageStack, theRectangle, layer_num[active_image_layer], result, scale_facter);

	behind_image_layer = active_image_layer;
	active_image_layer = load_image_count;

	alphaTrackBar->Value = (int)(mImageStack[layer_num[active_image_layer]].alpha * 10);
	scale_facter = mImageStack[layer_num[active_image_layer]].scale_facter;
	this->toolStripStatusLabel1->Text = System::String::Format("Scale {0}.", scale_facter.ToString());

	activeImgComboBox->Items->Add("[Result] FeatureDetect Orb");
	behindImgComboBox->Items->Add("[Result] FeatureDetect Orb");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::entropyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	printf("[Cut] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	cv::Mat gray_img;
	if (roi_mat.channels() == 3) {
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);

	}
	else {
		gray_img = roi_mat.clone();

	}

	cv::normalize(gray_img, gray_img, 0, 255, cv::NORM_MINMAX);

	cv::Mat result;

	result = yaEditImage::EntropyFilter(gray_img, 9);


	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
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

	activeImgComboBox->Items->Add("[Result] Entropy");
	behindImgComboBox->Items->Add("[Result] Entropy");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::nLToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	printf("[Cut] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	cv::Mat gray_img;
	if (roi_mat.channels() == 3){
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);
	}
	else{
		gray_img = roi_mat.clone();
	}

	cv::Mat result;

	const int NoiseSigma = 15;
	cv::fastNlMeansDenoising(gray_img, result, NoiseSigma, 3, 7);

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
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

	activeImgComboBox->Items->Add("[Result] NL mean");
	behindImgComboBox->Items->Add("[Result] NL mean");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();
}

System::Void MainForm::bilateralToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (load_image_count < 1){
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

	cv::Mat roi_mat;
	if (logViewCheckBox->Checked == true) {
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].logMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	else
	{
		roi_mat = cv::Mat(mImageStack[layer_num[active_image_layer]].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));
	}
	printf("[Cut] %d %d\n", mImageStack[layer_num[active_image_layer]].image_view_start_x, mImageStack[layer_num[active_image_layer]].image_view_start_y);

	cv::Mat gray_img;
	if (roi_mat.channels() == 3){
		cv::cvtColor(roi_mat, gray_img, CV_BGR2GRAY);
	}
	else{
		gray_img = roi_mat.clone();
	}

	cv::Mat result;

	const int NoiseSigma = 15;
	cv::bilateralFilter(gray_img, result, 7, 35, 5);

	//新規レイヤーの登録
	if (load_image_count > MAX_IMAGE_STACK - 1){
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

	activeImgComboBox->Items->Add("[Result] Bilateral");
	behindImgComboBox->Items->Add("[Result] Bilateral");

	activeImgComboBox->SelectedIndex = load_image_count;
	behindImgComboBox->SelectedIndex = behind_image_layer;

	load_image_count++;

	theRectangle.X -= (clicked_index % 4) * listPictureBox[0]->Width;
	theRectangle.Y -= (clicked_index / 4) * listPictureBox[0]->Height;

	redrawImage();

}


System::Void MainForm::MainForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	GLAdapter = gcnew OpenGLSimpleAdapter(GetDC((HWND)earthPanel->Handle.ToPointer()));

	readTexture();

	panelRefresh();
}

System::Void MainForm::earthPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
{
	panelRefresh();
}

System::Void MainForm::panelRefresh(void)
{
	static GLfloat red[] = { 0.8, 0.2, 0.2, 1.0 };
	static GLfloat green[] = { 0.2, 0.8, 0.2, 1.0 };
	static GLfloat blue[] = { 0.2, 0.2, 0.8, 1.0 };
	static GLfloat yellow[] = { 0.8, 0.8, 0.2, 1.0 };

	GLAdapter->BeginRender();
	{
		// Initialize
		glClearColor(0, 0, 0, 0);
		glMatrixMode(GL_PROJECTION);
		int w = earthPanel->Width;
		int h = earthPanel->Height;

		glViewport(0, 0, w, h);

		// Drawing
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();
		glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

		//視野角,アスペクト比(ウィンドウの幅/高さ),描画する範囲(最も近い距離,最も遠い距離)
		gluPerspective(30.0, (double)w / (double)h, 1.0, 1000.0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//視点の設定
		gluLookAt(0.0, 0.0, 20.0, //カメラの座標
			0.0, 0.0, 0.0, // 注視点の座標
			0.0, 1.0, 0.0); // 画面の上方向を指すベクトル

		glRotatef(angle[0], 1.0, 0.0, 0.0);
		glRotatef(angle[1], 0.0, 1.0, 0.0);
		glRotatef(angle[2], 0.0, 0.0, 1.0);

		glScaled(earth_scale_facter, earth_scale_facter, earth_scale_facter);
		glTranslated(0, 0, 0);

		static const GLfloat color[] = { 1.0, 1.0, 1.0, 1.0 };  /* 材質 (色) */

		/* 材質の設定 */
		glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);

		/* アルファテスト開始 */
		glEnable(GL_ALPHA_TEST);

		/* テクスチャマッピング開始 */
		glEnable(GL_TEXTURE_2D);

		/* 球を描く */
		gluQuadricTexture(Sphere, 1);
		gluSphere(Sphere, 1.0, 36, 18);

		/* テクスチャマッピング終了 */
		glDisable(GL_TEXTURE_2D);

		//座標系
		//(-,0,0) →北緯0、西経90	
		//(0,-,0) →北緯0、東経0
		//(+,0,0) →北緯0、東経90
		//(0,+,0) →北緯0、東経180
		//(0,0,+) →南緯90、東経0
		//(0,0,-) →北緯90、東経0
		/*
		(X)  = (0 -1)(x)
		(Y)	(1  0)(y)
		*/

		glPushMatrix();
		//printf("[trans] %f %f %f\n", trans[0], trans[1], trans[2]);
		glTranslated(trans[0, 0], trans[0, 1], trans[0, 2]);

		glMaterialfv(GL_FRONT, GL_DIFFUSE, blue);

		/*gluSphere(Sattelite, 0.04, 4, 2);
		glPopMatrix();

		for (int i = 1; i < 1800; i++){
		glPushMatrix();
		//printf("[trans] %f %f %f\n", trans[0], trans[1], trans[2]);
		glTranslated(trans[i, 0], trans[i, 1], trans[i, 2]);

		glMaterialfv(GL_FRONT, GL_DIFFUSE, red);

		gluSphere(Sattelite, 0.02, 4, 2);
		glPopMatrix();
		}*/

		if (load_image_count > 0){
			double trans84[3];

			for (int i = 0; i < load_image_count; i++){
				for (int cnt = 0; cnt < 5; cnt++){
					glPushMatrix();

					trans2WGS84(mImageStack[i].lat[cnt], mImageStack[i].lon[cnt] - 90, 0., trans84);
					printf("[trans] %f %f %f\n", trans84[0], trans84[1], trans84[2]);
					glTranslated(trans84[0], trans84[1], -trans84[2]);

					glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, red);

					gluSphere(ObsPoint, 0.0025, 4, 4);
					glPopMatrix();
				}
			}
		}

		glEnd();

		/* アルファテスト終了 */
		glDisable(GL_ALPHA_TEST);
	}
	GLAdapter->EndRender();
}

System::Void MainForm::trans2WGS84(double lat, double lon, double alt, double trans84[])
{
	double f84 = 1 / 298.257223563;
	double e = f84*(2 - f84);

	lat = lat / 180.*M_PI;
	lon = lon / 180.*M_PI;

	printf("[LatLon] %f %f\n", lat, lon);

	trans84[0] = cos(lat)*cos(lon);
	trans84[1] = cos(lat)*sin(lon);
	trans84[2] = (1 - e)*sin(lat);

	printf("[trans] %f %f %f\n", trans84[0], trans84[1], trans84[2]);
}

GLuint MainForm::readTexture()
{
	int width, height;

	cv::Mat img = cv::imread(texture1);
	cvtColor(img, img, CV_BGR2RGB);
	width = img.cols;
	height = img.rows;

	//Bitmap^ bmp=mat2bmp(img);

	//imshow("tex", img);

	GLAdapter->BeginRender();
	{
		glGenTextures(1, &tex);

		glBindTexture(GL_TEXTURE_2D, tex);

		gluBuild2DMipmaps(GL_TEXTURE_2D, 3, width, height, GL_RGB, GL_UNSIGNED_BYTE, img.ptr());

		/* テクスチャを拡大・縮小する方法の指定 */
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

		/* テクスチャ環境 */
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);


		/* アルファテストの判別関数 */
		glAlphaFunc(GL_GREATER, 0.5);

		/* 初期設定 */
		glClearColor(0.3, 0.3, 1.0, 0.0);
		glEnable(GL_DEPTH_TEST);
		glDisable(GL_CULL_FACE);

		/* 光源の初期設定 */
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, lightcol);
		glLightfv(GL_LIGHT0, GL_SPECULAR, lightcol);
		glLightfv(GL_LIGHT0, GL_AMBIENT, lightamb);

		Sphere = gluNewQuadric();
		ObsPoint = gluNewQuadric();
		//Sattelite = gluNewQuadric();
		//gluQuadricDrawStyle(Sphere, GLU_LINE);
	}
	GLAdapter->EndRender();

	return tex;
}

System::Void MainForm::earthPanel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e){
	earthPanel->Focus();

	earthPanel->MouseDown += gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseDown);
}

System::Void MainForm::myEarthMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button != System::Windows::Forms::MouseButtons::Left&&e->Button != System::Windows::Forms::MouseButtons::Right){
		return;
	}

	Control^ control = dynamic_cast<Control^>(sender);

	startPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

	if (e->Button == System::Windows::Forms::MouseButtons::Left){
		control->MouseMove += gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseMoveLeft);
		control->MouseUp += gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseUpLeft);
	}
	else{
		control->MouseMove += gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseMoveRight);
		control->MouseUp += gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseUpRight);
	}

	printf("[click]\n");
}

System::Void MainForm::myEarthMouseMoveRight(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);

	System::Drawing::Point endPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

	//theta[0] = (double)(endPoint.Y - startPoint.Y) / 5.0;
	theta[2] = (double)(endPoint.X - startPoint.X) / 8.0;

	startPoint.X = endPoint.X;
	startPoint.Y = endPoint.Y;
	//angle[0] += theta[0];
	angle[2] += theta[2];

	printf("[angle] %f %f %f\n", angle[0], angle[1], angle[2]);
	panelRefresh();
}

System::Void MainForm::myEarthMouseUpRight(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);

	control->MouseMove -= gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseMoveRight);
	control->MouseUp -= gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseUpRight);

	panelRefresh();
}

System::Void MainForm::myEarthMouseMoveLeft(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);

	System::Drawing::Point endPoint = control->PointToScreen(System::Drawing::Point(e->X, e->Y));

	theta[0] = (double)(endPoint.Y - startPoint.Y) / 8.0;
	//theta[1] = (double)(endPoint.X - startPoint.X) / 5.0;

	startPoint.X = endPoint.X;
	startPoint.Y = endPoint.Y;
	angle[0] += theta[0];
	//angle[1] += theta[1];

	printf("[angle] %f %f %f\n", angle[0], angle[1], angle[2]);
	panelRefresh();
}

System::Void MainForm::myEarthMouseUpLeft(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);

	control->MouseMove -= gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseMoveLeft);
	control->MouseUp -= gcnew MouseEventHandler(this, &sample11::MainForm::myEarthMouseUpLeft);

	panelRefresh();
}

System::Void MainForm::myEarthMouseWheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	float rotateDirection = e->Delta * SystemInformation::MouseWheelScrollLines / 120.;
	printf("[mouce wheel] %f\n", rotateDirection);

	if (rotateDirection > 0){
		earth_scale_facter -= 0.1;
	}
	else{
		earth_scale_facter += 0.1;
	}

	panelRefresh();
}