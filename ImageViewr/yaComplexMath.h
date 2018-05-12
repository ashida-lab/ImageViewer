#pragma once

#include "yaCommon.h"

using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Security::Cryptography;
using namespace System::Net::NetworkInformation;
using namespace System::Collections;

ref class yaComplexMath
{
public:
	yaComplexMath();

	static cv::cuda::GpuMat complexAdd(cv::cuda::GpuMat a1, cv::cuda::GpuMat a2)
	{
		cv::cuda::GpuMat b;

		cv::cuda::add(a1, a2, b);

		return b;
	}

	static cv::cuda::GpuMat complexSub(cv::cuda::GpuMat a1, cv::cuda::GpuMat a2)
	{
		cv::cuda::GpuMat b;

		cv::cuda::multiply(a2, -1, a2);
		cv::cuda::add(a1, a2, b);

		return b;
	}

	static cv::cuda::GpuMat complexConj(cv::cuda::GpuMat a1)
	{
		cv::cuda::GpuMat b;

		vector<cv::cuda::GpuMat> mv;

		cv::cuda::split(a1, mv);
		a1.release();

		cv::cuda::multiply(mv[1], -1, mv[1]);

		cv::cuda::merge(mv, b);

		return b;
	}

	static cv::cuda::GpuMat complexMultiply(cv::cuda::GpuMat a1, cv::cuda::GpuMat a2)
	{
		cv::cuda::GpuMat b;
		cv::cuda::GpuMat temp;

		vector<cv::cuda::GpuMat> mv1;
		vector<cv::cuda::GpuMat> mv2;
		vector<cv::cuda::GpuMat> mv3(2);

		cv::cuda::split(a1, mv1);//a+bi
		cv::cuda::split(a2, mv2);//c+di
		a1.release();
		a2.release();

		cv::cuda::multiply(mv1[0],mv2[0],mv3[0]);//ac
		cv::cuda::multiply(mv1[1], mv2[1], temp);//bd
		cv::cuda::multiply(temp, -1, temp);//-bd
		cv::cuda::add(mv3[0], temp, mv3[0]);//ac-bd

		cv::cuda::multiply(mv1[0], mv2[1], mv3[1]);//ad
		cv::cuda::multiply(mv1[1], mv2[0], temp);//bc
		cv::cuda::add(mv3[1], temp, mv3[1]);//ad+bc

		temp.release();

		cv::cuda::merge(mv3, b);

		return b;
	}

	static cv::cuda::GpuMat complexCircShfit(cv::cuda::GpuMat a1,int shift_x,int shift_y)
	{
		cv::cuda::GpuMat b = cv::cuda::GpuMat(a1.size(), a1.type());

		int cx1 = shift_x;
		int cx2 = a1.cols - shift_x;
		int cy1 = shift_y;
		int cy2 = a1.rows - shift_y;

		cv::cuda::GpuMat qs, qd;

		qs = cv::cuda::GpuMat(a1, cv::Rect(0, 0, cx1, cy1));
		qd = cv::cuda::GpuMat(b, cv::Rect(cx2, cy2, cx1, cy1));
		qs.copyTo(qd);

		qs = cv::cuda::GpuMat(a1, cv::Rect(0, cy1, cx1, cy2));
		qd = cv::cuda::GpuMat(b, cv::Rect(cx2, 0, cx1, cy2));
		qs.copyTo(qd);

		qs = cv::cuda::GpuMat(a1, cv::Rect(cx1, 0, cx2, cy1));
		qd = cv::cuda::GpuMat(b, cv::Rect(0, cy2, cx2, cy1));
		qs.copyTo(qd);

		qs = cv::cuda::GpuMat(a1, cv::Rect(cx1, cy1, cx2, cy2));
		qd = cv::cuda::GpuMat(b, cv::Rect(0, 0, cx2, cy2));
		qs.copyTo(qd);

		return b;
	}

	static cv::cuda::GpuMat complexAbs(cv::cuda::GpuMat a1)
	{
		cv::cuda::GpuMat b;

		vector<cv::cuda::GpuMat> mv1;

		cv::cuda::split(a1, mv1);//a+bi

		cv::cuda::magnitude(mv1[0], mv1[1], b);

		return b;
	}

	static cv::cuda::GpuMat complexPower(cv::cuda::GpuMat a1)
	{
		cv::cuda::GpuMat b;

		vector<cv::cuda::GpuMat> mv1;

		cv::cuda::split(a1, mv1);//a+bi

		cv::cuda::multiply(mv1[0], mv1[0], mv1[0]);
		cv::cuda::multiply(mv1[1], mv1[1], mv1[1]);

		cv::cuda::add(mv1[0], mv1[1], b);

		return b;
	}

};