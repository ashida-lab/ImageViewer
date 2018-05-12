#ifndef _EDIT_IMAGE_
#define _EDIT_IMAGE_

#include "yaCommon.h"

// Filter type
#define NONE 0  // no filter
#define HARD 1  // hard shrinkage
#define SOFT 2  // soft shrinkage
#define GARROT 3  // garrot filter

using namespace cv;
//using namespace std;
using namespace cv::superres;

#define sign_float(a,b) (a>b)?1.0f:(a<b)?-1.0f:0.0f 
class yaEditImage{
public:
	yaEditImage();
	cv::Mat SuperResol(cv::Mat in[]);
	static cv::Mat PanSharp(cv::Mat multi_img, cv::Mat pan_img);
	cv::Mat Interferogram(cv::Mat master_mat, cv::Mat slave_mat);
	cv::Mat CoherenceChanegDetect(cv::Mat master_mat, cv::Mat slave_mat);
	static cv::Mat CoherenceChanegDetectGPU(cv::Mat master_mat, cv::Mat slave_mat);
	static cv::Mat EntropyFilter(cv::Mat src, int w_size);
	static cv::Mat LeeFilter(cv::Mat src, int w_size);

	static float sgn(float x);
	static float soft_shrink(float d, float T);
	static float hard_shrink(float d, float T);
	static float Garrot_shrink(float d, float T);
	static void cvHaarWavelet(Mat &src, Mat &dst, int NIter);
	static void cvInvHaarWavelet(Mat &src, Mat &dst, int NIter, int SHRINKAGE_TYPE = 0, float SHRINKAGE_T = 50);
	static cv::Mat yaEditImage::GetGradient(Mat src_gray);

private:
	Ptr<FrameSource> createFrameSource_imageStack(cv::Mat in[], int scale);
	Ptr<cv::superres::DenseOpticalFlowExt> createOptFlow(String name, bool useGpu);

	
};

#endif