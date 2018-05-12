#include <stdio.h>
#include <iostream>

#include "yaCommon.h"
#include "yaEditImage.h"
#include "yaComplexMath.h"

//using namespace std;
using namespace cv;
using namespace cv::superres;
using namespace std;

yaEditImage::yaEditImage()
{

}

cv::Mat yaEditImage::SuperResol(cv::Mat in[])
{
	const int scale = 4;
	const int iterations = 2;
	const int temporalAreaRadius = 4;
	const cv::String optFlow = "farneback";// "tvl1";
	bool useCuda = FALSE;
	Ptr<SuperResolution> superRes;

	if (useCuda)
		superRes = createSuperResolution_BTVL1_CUDA();
	else
		superRes = createSuperResolution_BTVL1();

	Ptr<cv::superres::DenseOpticalFlowExt> of = createOptFlow(optFlow, useCuda);

	if (of.empty()){
		exit(-1);
	}

	superRes->setOpticalFlow(of);

	superRes->setScale(scale);
	superRes->setIterations(iterations);
	superRes->setTemporalAreaRadius(temporalAreaRadius);

	Ptr<FrameSource> frameSource = createFrameSource_imageStack(in, 8);

	superRes->setInput(frameSource);


	Mat result;
	frameSource->nextFrame(result);
	//frameSource->nextFrame(result);
	superRes->nextFrame(result);

	if (result.empty())
		return result;

	imshow("Super Resolution", result);
	imwrite("./tmp/sr_result.png", result);

	return result;

}

Ptr<cv::superres::DenseOpticalFlowExt> yaEditImage::createOptFlow(cv::String name, bool useGpu)
{
	if (name == "farneback")
	{
		if (useGpu)
			return cv::superres::createOptFlow_Farneback_CUDA();
		else
			return cv::superres::createOptFlow_Farneback();
	}
	/*else if (name == "simple")
	return createOptFlow_Simple();*/
	else if (name == "tvl1")
	{
		if (useGpu)
			return cv::superres::createOptFlow_DualTVL1_CUDA();
		else
			return cv::superres::createOptFlow_DualTVL1();
	}
	else if (name == "brox")
		return cv::superres::createOptFlow_Brox_CUDA();
	else if (name == "pyrlk")
		return cv::superres::createOptFlow_PyrLK_CUDA();
	else
		printf("Incorrect Optical Flow algorithm - %s", name);

	return Ptr<cv::superres::DenseOpticalFlowExt>();
}

Ptr<FrameSource> yaEditImage::createFrameSource_imageStack(cv::Mat in[], int scale)
{
	VideoCapture g_cap;
	Mat frame;
	int i = 0; // should include leading zero 
	int d = 1;
	char fname[256];

	// Generate an empty frame source structure
	Ptr<FrameSource> frameSource;
	//frameSource = createFrameSource_Empty();
	//frameSource = createFrameSource_

	// Process 20 frames
	for (int i = 0; i < scale; i++)
	{
		// Check if the frame was retrieved
		if (in[i].empty())
		{
			printf("Could not retrieve frame.\n");;
			exit(-1);
		}
		imshow("Super Resolution test", in[i]);

		sprintf(fname, "./tmp/%03d.png", i);
		imwrite(fname, in[i]);

		//frameSource->nextFrame(in[i]);
		//waitKey();

	}
	frameSource = cv::superres::createFrameSource_Video("./tmp/%03d.png");
	return frameSource;
}

cv::Mat yaEditImage::PanSharp(cv::Mat multi_img, cv::Mat pan_img)
{

	//グレースケールに変換
	Mat multi2gray_img;
	cvtColor(multi_img, multi2gray_img, CV_BGR2GRAY);

	//動きを定義
	const int warp_mode = MOTION_EUCLIDEAN;

	// Set a 2x3 or 3x3 warp matrix depending on the motion model.
	Mat warp_matrix;

	// Initialize the matrix to identity
	if (warp_mode == MOTION_HOMOGRAPHY){
		warp_matrix = Mat::eye(3, 3, CV_32F);
	}
	else{
		warp_matrix = Mat::eye(2, 3, CV_32F);
	}

	// Specify the number of iterations.
	int number_of_iterations = 5000;

	// Specify the threshold of the increment
	// in the correlation coefficient between two iterations
	double termination_eps = 1e-10;

	// Define termination criteria
	TermCriteria criteria(TermCriteria::COUNT + TermCriteria::EPS, number_of_iterations, termination_eps);

	// Run the ECC algorithm. The results are stored in warp_matrix.
	findTransformECC(
		pan_img,
		multi2gray_img,
		warp_matrix,
		warp_mode,
		criteria
		);

	Mat multi_aligned;

	if (warp_mode != MOTION_HOMOGRAPHY){
		// Use warpAffine for Translation, Euclidean and Affine
		//warpAffine(multi_img, multi_aligned, warp_matrix, pan_img.size(), INTER_LINEAR + WARP_INVERSE_MAP);
		warpAffine(multi_img, multi_aligned, warp_matrix, pan_img.size(), INTER_CUBIC + WARP_INVERSE_MAP);
	}
	else{
		// Use warpPerspective for Homography
		//warpPerspective(multi_img, multi_aligned, warp_matrix, pan_img.size(), INTER_LINEAR + WARP_INVERSE_MAP);
		warpPerspective(multi_img, multi_aligned, warp_matrix, pan_img.size(), INTER_CUBIC + WARP_INVERSE_MAP);
	}

	imshow("Image 1", pan_img);
	imwrite("./tmp/pan_img.png", pan_img);
	imshow("Image 2", multi_img);
	imshow("Image 2 Aligned", multi_aligned);
	imwrite("./tmp/multi_img.png", multi_img);
	//waitKey(0);

	Mat hsv_img;
	cvtColor(multi_aligned, hsv_img, CV_BGR2HSV);

	std::vector<Mat> planes;
	cv::split(hsv_img, planes);

	Mat in[] = { planes[0], planes[1], pan_img };

	Mat out = cv::Mat(pan_img.rows, pan_img.cols, CV_8UC3);

	cv::merge(in, 3, out);//3バンドの色合成

	cvtColor(out, out, CV_HSV2BGR);

	imshow("PanSharpen", out);
	imwrite("./tmp/pansharped_img.png", out);

	return out;
}

cv::Mat yaEditImage::GetGradient(Mat src_gray)
{
	Mat grad_x, grad_y;
	Mat abs_grad_x, abs_grad_y;

	int scale = 1;
	int delta = 0;
	int ddepth = CV_32FC1;;

	// Calculate the x and y gradients using Sobel operator
	Sobel(src_gray, grad_x, ddepth, 1, 0, 3, scale, delta, BORDER_DEFAULT);
	convertScaleAbs(grad_x, abs_grad_x);

	Sobel(src_gray, grad_y, ddepth, 0, 1, 3, scale, delta, BORDER_DEFAULT);
	convertScaleAbs(grad_y, abs_grad_y);

	// Combine the two gradients
	Mat grad;
	addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad);

	return grad;

}


cv::Mat yaEditImage::Interferogram(cv::Mat master_mat, cv::Mat slave_mat)
{
	vector<Mat> mv;
	split(master_mat, mv);

	mv[0].convertTo(mv[0], CV_32F);
	mv[1].convertTo(mv[1], CV_32F);

	vector<Mat> sv;
	split(slave_mat, sv);

	sv[0].convertTo(sv[0], CV_32F);
	sv[1].convertTo(sv[1], CV_32F);

	cv::Mat tmp1, tmp2, tmp3, tmp4;

	multiply(mv[0], sv[0], tmp1);
	multiply(mv[1], sv[1], tmp2);

	add(tmp1, tmp2, tmp3);//実部

	multiply(mv[1], sv[0], tmp1);
	multiply(mv[0], sv[1], tmp2);

	add(tmp1, -tmp2, tmp4);//虚部

	magnitude(mv[0], mv[1], tmp1);//絶対値
	magnitude(sv[0], sv[1], tmp2);//絶対値

	multiply(tmp1, tmp2, tmp1);

	//規格化
	divide(tmp3, tmp1, tmp3);
	divide(tmp4, tmp1, tmp4);

	cv::Mat result;

	phase(tmp3, tmp4, result, true);

	cv::Mat tmp_average;

	cv::reduce(result, tmp_average, 1, CV_REDUCE_MAX);

	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_MAX);
	std::cout << tmp_average << std::endl;

	result = 255. / 360.*result;
	result.convertTo(result, CV_8UC1);

	imshow("O", result);

	return result;
}

cv::Mat yaEditImage::CoherenceChanegDetect(cv::Mat master_mat, cv::Mat slave_mat)
{
	cv::Mat master_tmp, slave_tmp;
	vector<Mat> mv;
	vector<Mat> sv;
	cv::Mat tmp1, tmp2, tmp3, tmp4;
	int windows_size_x = 3;
	int windows_size_y = 3;
	//cv::Mat tmp_sum;

	cv::Mat result = cv::Mat(master_mat.rows - windows_size_x, master_mat.cols - windows_size_y, CV_32F);//row colの順

	for (int i = windows_size_x; i < master_mat.rows; i++){
		if (i % 1000 == 0){
			printf("%d\n", i);
		}

		for (int j = windows_size_y; j < master_mat.cols; j++){

			master_tmp = cv::Mat(master_mat, cv::Rect(j - windows_size_y, i - windows_size_x, windows_size_y, windows_size_x));//col rowの順
			slave_tmp = cv::Mat(slave_mat, cv::Rect(j - windows_size_y, i - windows_size_x, windows_size_y, windows_size_x));

			split(master_tmp, mv);//a+bi

			mv[0].convertTo(mv[0], CV_32F);//a
			mv[1].convertTo(mv[1], CV_32F);//b

			split(slave_tmp, sv);//c-di

			sv[0].convertTo(sv[0], CV_32F);//c
			sv[1].convertTo(sv[1], CV_32F);//-d

			multiply(mv[0], sv[0], tmp1);//ac
			multiply(mv[1], sv[1], tmp2);//-bd i*i

			add(tmp1, tmp2, tmp3);//実部 ac+bd

			multiply(mv[1], sv[0], tmp1);//bc
			multiply(mv[0], sv[1], tmp2);//-ad

			add(tmp1, -tmp2, tmp4);//虚部 bc-ad

			magnitude(mv[0], mv[1], tmp1);//絶対値 √a*a+b*b
			magnitude(sv[0], sv[1], tmp2);//絶対値 √c*c+d*d

			reduce(tmp3, tmp3, 0, CV_REDUCE_SUM);
			reduce(tmp3, tmp3, 1, CV_REDUCE_SUM);

			reduce(tmp4, tmp4, 0, CV_REDUCE_SUM);
			reduce(tmp4, tmp4, 1, CV_REDUCE_SUM);

			multiply(tmp1, tmp1, tmp1);
			reduce(tmp1, tmp1, 0, CV_REDUCE_SUM);
			reduce(tmp1, tmp1, 1, CV_REDUCE_SUM);

			multiply(tmp2, tmp2, tmp2);
			reduce(tmp2, tmp2, 0, CV_REDUCE_SUM);
			reduce(tmp2, tmp2, 1, CV_REDUCE_SUM);

			magnitude(tmp3, tmp4, tmp3);//分母

			multiply(tmp1, tmp2, tmp1);//分子
			sqrt(tmp1, tmp1);

			cv::Mat result_tmp;
			divide(tmp3 ,tmp1,result_tmp);

			result.at<float>(i - windows_size_x, j - windows_size_y) = result_tmp.at<float>(0, 0);//row colの順　注意
			//printf("%f", result_tmp.at<float>(0, 0));

		}

	}

	cv::Mat tmp_average;
	cv::reduce(result, tmp_average, 1, CV_REDUCE_AVG);
	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_AVG);
	printf("[average] %f\n", tmp_average.at<float>(0, 0));

	//normalize(result, result, 0, 255, NORM_MINMAX,CV_8UC1);

	result = 255 * result;
	result.convertTo(result, CV_8UC1);

	imshow("O", result);

	return result;
}

cv::Mat yaEditImage::CoherenceChanegDetectGPU(cv::Mat master_mat, cv::Mat slave_mat)
{
	cv::Mat result=cv::Mat(master_mat.size(), CV_32FC1);
	cv::cuda::GpuMat master_gpu, slave_gpu;
	int windows_size_x = 3;
	int windows_size_y = 3;

	master_mat.convertTo(master_mat, CV_32FC2);
	slave_mat.convertTo(slave_mat, CV_32FC2);

	master_gpu.upload(master_mat);
	slave_gpu.upload(slave_mat);

	cv::cuda::GpuMat sum1, sum2,temp3,temp4,result_gpu;

	sum1 = cv::cuda::GpuMat(master_gpu.size(), CV_32FC1);
	sum2 = cv::cuda::GpuMat(master_gpu.size(), CV_32FC1);
	result_gpu = cv::cuda::GpuMat(master_gpu.size(), CV_32FC2);

	for (int i = 0; i < windows_size_x; i++){
		for (int j = 0; j < windows_size_y; j++){
			temp3 = yaComplexMath::complexCircShfit(master_gpu, i, j);
			temp3=yaComplexMath::complexPower(temp3);
			cv::cuda::add(sum1, temp3,sum1);

			temp4 = yaComplexMath::complexCircShfit(slave_gpu, i, j);
			temp4 = yaComplexMath::complexPower(temp4);
			cv::cuda::add(sum2, temp4,sum2);

			temp3 = yaComplexMath::complexCircShfit(master_gpu, i, j);
			temp4 = yaComplexMath::complexCircShfit(slave_gpu, i, j);
			temp4 = yaComplexMath::complexConj(temp4);

			temp3 = yaComplexMath::complexMultiply(temp3, temp4);

			result_gpu = yaComplexMath::complexAdd(result_gpu, temp3);
		}
	}

	result_gpu = yaComplexMath::complexAbs(result_gpu);

	cv::cuda::multiply(sum1, sum2, temp3);
	cv::cuda::sqrt(temp3, temp3);

	cv::cuda::divide(result_gpu, temp3, result_gpu);

	result_gpu.download(result);

	result = 255 * result;
	result.convertTo(result, CV_8UC1);

	imshow("O", result);

	return(result);

}

cv::Mat yaEditImage::EntropyFilter(cv::Mat src, int w_size)
{
	int i, j, k;
	double e, f, e_max;

	cv::Mat dst = cv::Mat::zeros(cv::Size(src.cols - w_size, src.rows - w_size), CV_32FC1);
	cv::Mat tmp;

	int image_num = 1;      // 入力画像の枚数
	int channels[] = { 0 }; // cv::Matの何番目のチャネルを使うか
	cv::Mat hist;
	int dim_num = 1;        // ヒストグラムの次元数
	int histSize = 256;       // ヒストグラムのビンの数
	float range[] = { 0, 256 };        // 扱うデータの最小値、最大値　今回は輝度データなので値域は[0, 255]
	const float *histRanges = { range }; // 今回は1次元のヒストグラムを作るので要素数は一つ

	f = 1.0 / (w_size*w_size);
	e_max = f * log(f) * w_size * w_size; /* エントロピーの最大値 */

	for (i = 0; i < src.rows - w_size; i++){
		for (j = 0; j < src.cols - w_size; j++){
			tmp = cv::Mat(src, cv::Rect(j, i, w_size, w_size));
			cv::calcHist(&tmp, 1, 0, cv::Mat(), // マスクは利用しません
				hist, 1, &histSize, &histRanges,
				true, // ヒストグラムは一様です
				false);

			/* エントロピーの計算 */
			e = 0.0;
			for (k = 0; k < 256; k++){
				if (f = hist.at<float>(k)){
					f /= w_size*w_size;
					e += f * log(f);
				}
			}

			dst.at<float>(i, j) = e; /* 0～255で正規化して格納 */
		}
	}

	double minVal, maxVal;
	minMaxLoc(dst, &minVal, &maxVal, NULL, NULL, Mat());

	dst = 255.*(dst - minVal) / (maxVal - minVal);

	dst.convertTo(dst, CV_8UC1);

	return dst;
}

cv::Mat yaEditImage::LeeFilter(cv::Mat src, int w_size)
{
	src.convertTo(src, CV_32FC1);
	cv::Mat dst = cv::Mat::zeros(cv::Size(src.cols, src.rows), CV_32FC1);
	cv::Mat tmp;

	cv::Mat means;
	cv::blur(src, means, cv::Size(w_size, w_size));

	cv::Mat sigmas;

	cv::multiply((src - means) / w_size, (src - means) / w_size, sigmas);
	cv::blur(sigmas, sigmas, cv::Size(w_size, w_size));
	cv::sqrt(sigmas, sigmas);

	cv::Mat ENLs;
	cv::multiply(means / sigmas, means / sigmas, ENLs);

	cv::Mat sx2s, fbar;
	cv::Mat means2, sigmas2;
	cv::multiply(means, means, means2);
	cv::multiply(sigmas, sigmas, sigmas2);

	cv::Mat ENLs1;
	cv::add(ENLs, 1, ENLs1);

	cv::multiply(ENLs, sigmas2, tmp);

	sx2s = (tmp - means2) / (ENLs1);

	cv::multiply(sx2s, (src - means), tmp);

	fbar = means + (tmp / (sx2s + (means2 / ENLs)));

	//cv::Mat fbar;


	double minVal, maxVal;
	minMaxLoc(fbar, &minVal, &maxVal, NULL, NULL, Mat());

	printf("%f %f\n", minVal, maxVal);

	dst = 255.*(fbar - minVal) / (maxVal - minVal);

	dst.convertTo(dst, CV_8UC1);

	return dst;
}

//wavelet
float yaEditImage::sgn(float x)
{
	float res = 0;
	if (x == 0)
	{
		res = 0;
	}
	if (x > 0)
	{
		res = 1;
	}
	if (x<0)
	{
		res = -1;
	}
	return res;
}

//--------------------------------
// Soft shrinkage
//--------------------------------
float yaEditImage::soft_shrink(float d, float T)
{
	float res;
	if (fabs(d)>T)
	{
		res = sgn(d)*(fabs(d) - T);
	}
	else
	{
		res = 0;
	}

	return res;
}

//--------------------------------
// Hard shrinkage
//--------------------------------
float yaEditImage::hard_shrink(float d, float T)
{
	float res;
	if (fabs(d) > T)
	{
		res = d;
	}
	else
	{
		res = 0;
	}

	return res;
}

//--------------------------------
// Garrot shrinkage
//--------------------------------
float yaEditImage::Garrot_shrink(float d, float T)
{
	float res;
	if (fabs(d) > T)
	{
		res = d - ((T*T) / d);
	}
	else
	{
		res = 0;
	}

	return res;
}
//--------------------------------
// Wavelet transform
//--------------------------------
void yaEditImage::cvHaarWavelet(Mat &src, Mat &dst, int NIter)
{
	float c, dh, dv, dd;
	assert(src.type() == CV_32FC1);
	assert(dst.type() == CV_32FC1);
	int width = src.cols;
	int height = src.rows;
	for (int k = 0; k < NIter; k++)
	{
		for (int y = 0; y < (height >> (k + 1)); y++)
		{
			for (int x = 0; x < (width >> (k + 1)); x++)
			{
				c = (src.at<float>(2 * y, 2 * x) + src.at<float>(2 * y, 2 * x + 1) + src.at<float>(2 * y + 1, 2 * x) + src.at<float>(2 * y + 1, 2 * x + 1))*0.5;
				dst.at<float>(y, x) = c;

				dh = (src.at<float>(2 * y, 2 * x) + src.at<float>(2 * y + 1, 2 * x) - src.at<float>(2 * y, 2 * x + 1) - src.at<float>(2 * y + 1, 2 * x + 1))*0.5;
				dst.at<float>(y, x + (width >> (k + 1))) = dh;

				dv = (src.at<float>(2 * y, 2 * x) + src.at<float>(2 * y, 2 * x + 1) - src.at<float>(2 * y + 1, 2 * x) - src.at<float>(2 * y + 1, 2 * x + 1))*0.5;
				dst.at<float>(y + (height >> (k + 1)), x) = dv;

				dd = (src.at<float>(2 * y, 2 * x) - src.at<float>(2 * y, 2 * x + 1) - src.at<float>(2 * y + 1, 2 * x) + src.at<float>(2 * y + 1, 2 * x + 1))*0.5;
				dst.at<float>(y + (height >> (k + 1)), x + (width >> (k + 1))) = dd;
			}
		}
		dst.copyTo(src);
	}
}
//--------------------------------
//Inverse wavelet transform
//--------------------------------
void yaEditImage::cvInvHaarWavelet(Mat &src, Mat &dst, int NIter, int SHRINKAGE_TYPE, float SHRINKAGE_T)
{
	float c, dh, dv, dd;
	assert(src.type() == CV_32FC1);
	assert(dst.type() == CV_32FC1);
	int width = src.cols;
	int height = src.rows;
	//--------------------------------
	// NIter - number of iterations 
	//--------------------------------
	for (int k = NIter; k > 0; k--)
	{
		for (int y = 0; y < (height >> k); y++)
		{
			for (int x = 0; x < (width >> k); x++)
			{
				c = src.at<float>(y, x);
				dh = src.at<float>(y, x + (width >> k));
				dv = src.at<float>(y + (height >> k), x);
				dd = src.at<float>(y + (height >> k), x + (width >> k));

				// (shrinkage)
				switch (SHRINKAGE_TYPE)
				{
				case HARD:
					dh = hard_shrink(dh, SHRINKAGE_T);
					dv = hard_shrink(dv, SHRINKAGE_T);
					dd = hard_shrink(dd, SHRINKAGE_T);
					break;
				case SOFT:
					dh = soft_shrink(dh, SHRINKAGE_T);
					dv = soft_shrink(dv, SHRINKAGE_T);
					dd = soft_shrink(dd, SHRINKAGE_T);
					break;
				case GARROT:
					dh = Garrot_shrink(dh, SHRINKAGE_T);
					dv = Garrot_shrink(dv, SHRINKAGE_T);
					dd = Garrot_shrink(dd, SHRINKAGE_T);
					break;
				}

				//-------------------
				dst.at<float>(y * 2, x * 2) = 0.5*(c + dh + dv + dd);
				dst.at<float>(y * 2, x * 2 + 1) = 0.5*(c - dh + dv - dd);
				dst.at<float>(y * 2 + 1, x * 2) = 0.5*(c + dh - dv - dd);
				dst.at<float>(y * 2 + 1, x * 2 + 1) = 0.5*(c - dh - dv + dd);
			}
		}
		Mat C = src(Rect(0, 0, width >> (k - 1), height >> (k - 1)));
		Mat D = dst(Rect(0, 0, width >> (k - 1), height >> (k - 1)));
		D.copyTo(C);
	}
}