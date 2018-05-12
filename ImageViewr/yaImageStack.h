#ifndef _YA_IMAGE_STACK_
#define _YA_IMAGE_STACK_

#include "yaCommon.h"

using namespace cv;
//using namespace std;
using namespace System::Drawing;
using namespace cv::superres;

class yaImageStack{
public:
	yaImageStack();
	int readRasterFile(System::String^ fname);
	int readRasterFile_2bandSLC(System::String^ fname);
	int readRasterFileColor(System::String^ fname_r, System::String^ fname_g, System::String^ fname_b);
	static Bitmap^ mat2bmp(cv::Mat img);
	static cv::Mat convertToMagnitude(cv::Mat input, int channel, int depth, float scale);
	cv::Mat convertToMagnitude_gpu(cv::Mat input, int channel, int depth, float scale);
	static cv::Mat convertToMagnitude_gpu_f(cv::Mat input, int channel, int depth, float scale);
	cv::Mat convertToLog(cv::Mat input, int channel, int depth, float scale);
	cv::Mat convertToLog_gpu(cv::Mat input, int channel, int depth, float scale);
	static cv::Mat convertToLog_gpu_f(cv::Mat input, int channel, int depth, float scale);
	static cv::Mat convertToAngle(cv::Mat input, int channel, int depth);
	cv::Mat twoImageRegistartion(yaImageStack mImageStack[], System::Drawing::Rectangle theRectangle, int active_image_layer, int sub_image_layer, float scale_facter,int channel);
	cv::Mat twoImageRegistartion2(yaImageStack mImageStack[], System::Drawing::Rectangle theRectangle, int active_image_layer, int sub_image_layer, float scale_facter, int channel);
	int addNewLayer(yaImageStack mImageStack[], System::Drawing::Rectangle theRectangle, int active_image_layer, cv::Mat newMat, double scale_facter_in);
	void clearLayer();
	void copyLayer(yaImageStack src);
	//static float viewHistogram(cv::Mat input, float scale);
	static void viewHistogram(cv::Mat input, float scale, float *new_max, float *new_min);

	//ファイル情報
	char raster_fill_path[1024];
	char raster_file_name[_MAX_PATH];

	//画像の基本情報
	int width = -1;//cols x
	int height = -1;//rows y
	int data_type = 0;//Opencvのデータ型
	int depth = -1;
	int channel = -1;

	//最小値・最大値
	double          adfMinMax[2];

	//表示関係
	int image_view_center_x = -1;
	int image_view_center_y = -1;
	int image_view_start_x = -1;
	int image_view_start_y = -1;
	int image_view_width = -1;
	int image_view_height = -1;
	int image_view_offset_x = 0;
	int image_view_offset_y = 0;
	double scale_facter = 1;
	double alpha = 1;

	int layer_num = -1;

	//幾何情報
	double lat[5]; //WGS84 TL TR BR BL C
	double lon[5];
	double d_lat;
	double d_lon;
	double x[5];
	double y[5];
	double d_x;
	double d_y;
	double adfGeoTransform[6];
	/*
	Xp = adfTransform[0] + w(x)*adfTransform[1] + h(y)*adfTransform[2];
	Yp = adfTransform[3] + w(x)*adfTransform[4] + h(y)*adfTransform[5];
	*/

	//画像本体
	cv::Mat orgMat;//元データ
	cv::Mat dspMat;//表示用 8bit integer x 1
	cv::Mat browseMat;//表示用縮小 8bit integer x 1
	cv::Mat logMat;//表示用 8bit integer x 1

private:


};

#endif