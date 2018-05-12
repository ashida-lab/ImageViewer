
/*
画像の幅		width	cols
画像の高さ	height	rows
*/

#include "yaImageStack.h"
#include "yaString.h"
#include "yaEditImage.h"

using namespace cv;
using namespace std;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

yaImageStack::yaImageStack()
{

}

void yaImageStack::clearLayer()
{
	//画像の基本情報
	width = -1;//cols x
	height = -1;//rows y
	data_type = 0;//Opencvのデータ型
	depth = -1;
	channel = -1;

	//表示関係
	image_view_center_x = -1;
	image_view_center_y = -1;
	image_view_start_x = -1;
	image_view_start_y = -1;
	image_view_width = -1;
	image_view_height = -1;
	image_view_offset_x = 0;
	image_view_offset_y = 0;
	scale_facter = 1;
	alpha = 1;

	layer_num = -1;

	//画像本体
	if (!orgMat.empty()){//元データ
		orgMat.release();
	}
	if (!dspMat.empty()){//表示用 8bit integer x 3
		dspMat.release();
	}

}

void yaImageStack::copyLayer(yaImageStack src)
{
	//ファイル情報
	strcpy(raster_fill_path, src.raster_fill_path);
	strcpy(raster_file_name, src.raster_file_name);

	//画像の基本情報
	width = src.width;//cols x
	height = src.height;//rows y
	data_type = src.data_type;//Opencvのデータ型
	depth = src.depth;
	channel = src.channel;

	//最小値・最大値
	adfMinMax[0] = src.adfMinMax[0];
	adfMinMax[1] = src.adfMinMax[1];

	//表示関係
	image_view_center_x = src.image_view_center_x;
	image_view_center_y = src.image_view_center_y;
	image_view_start_x = src.image_view_start_x;
	image_view_start_y = src.image_view_start_y;
	image_view_width = src.image_view_width;
	image_view_height = src.image_view_height;
	image_view_offset_x = src.image_view_offset_x;
	image_view_offset_y = src.image_view_offset_y;
	scale_facter = src.scale_facter;
	alpha = src.alpha;

	layer_num = src.layer_num;

	//幾何情報
	for (int i = 0; i < 5; i++){
		lat[i] = src.lat[i]; //WGS84 TL TR BR BL C
		lon[i] = src.lon[i];
		x[i] = src.x[i];
		y[i] = src.y[i];

	}

	d_lat = src.d_lat;
	d_lon = src.d_lon;
	d_x = src.d_x;
	d_y = src.d_y;

	for (int i = 0; i < 6; i++){
		adfGeoTransform[i] = src.adfGeoTransform[i];
	}

	orgMat = src.orgMat.clone();
	dspMat = src.dspMat.clone();
}

int yaImageStack::readRasterFile(System::String^ fname)
{
	GDALDataset *paDataset;
	yaString yaStr;
	cv::Mat src_img;
	cv::Mat dst_img;

	GDALAllRegister();

	paDataset = (GDALDataset*)GDALOpen(yaStr.systemStringToChar(fname), GA_ReadOnly);

	//バンド情報→OpenCV
	GDALRasterBand  *paBand;
	int             nBlockXSize, nBlockYSize;
	int             bGotMin, bGotMax;

	paBand = paDataset->GetRasterBand(1);
	paBand->GetBlockSize(&nBlockXSize, &nBlockYSize);
	printf("Block=%dx%d Type=%s, ColorInterp=%s\n", nBlockXSize, nBlockYSize,
		GDALGetDataTypeName(paBand->GetRasterDataType()),
		GDALGetColorInterpretationName(paBand->GetColorInterpretation()));

	adfMinMax[0] = paBand->GetMinimum(&bGotMin);
	adfMinMax[1] = paBand->GetMaximum(&bGotMax);
	if (!(bGotMin && bGotMax)){
		GDALComputeRasterMinMax((GDALRasterBandH)paBand, TRUE, adfMinMax);
		printf("Min=%.3fd, Max=%.3f\n", adfMinMax[0], adfMinMax[1]);
	}
	if (paBand->GetOverviewCount() > 0){
		printf("Band has %d overviews.\n", paBand->GetOverviewCount());
	}
	if (paBand->GetColorTable() != NULL){
		printf("Band has a color table with %d entries.\n", paBand->GetColorTable()->GetColorEntryCount());
	}

	width = paDataset->GetRasterXSize();
	height = paDataset->GetRasterYSize();
	image_view_center_x = width / 2;
	image_view_center_y = height / 2;

	//幾何情報
	//double adfGeoTransform[6];

	//printf("Error code %d\n", paDataset->GetGeoTransform(adfGeoTransform));

	if (paDataset->GetGeoTransform(adfGeoTransform) == CE_None ||
		GDALGCPsToGeoTransform(paDataset->GetGCPCount(), paDataset->GetGCPs(), adfGeoTransform, TRUE)){
		printf("Origin is (%.6f,%.6f)\n",
			adfGeoTransform[0], adfGeoTransform[3]);

		printf("Pixel size is (%.6f,%.6f)\n",
			adfGeoTransform[1], adfGeoTransform[5]);

		/*
		y         tl ---tr           |       (0,0)     (w,0)
		^          |    |            |
		|-> +x    bl----br           |
		--------------------equator  |       (0,h)     (w,h)
		*/

		//tl
		lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//tr
		lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//br
		lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//bl
		lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//c
		lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
		lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

		char* Wkt = (char *)paDataset->GetProjectionRef();
		printf("%s\n", Wkt);
		OGRSpatialReference oSourceSRS, oTargetSRS;
		OGRCoordinateTransformation *poCT;
		double                  x, y;

		oSourceSRS.importFromWkt(&Wkt);
		//importFromEPSG(32653);
		oTargetSRS.importFromEPSG(4326);

		for (int i = 0; i < 5; i++){
			poCT = OGRCreateCoordinateTransformation(&oSourceSRS,
				&oTargetSRS);
			x = lat[i];
			y = lon[i];

			if (poCT == NULL || !poCT->Transform(1, &x, &y))
				printf("Transformation failed.\n");
			else
				printf("(%f,%f) -> (%f,%f)\n",
				lat[i],
				lon[i],
				x, y);
			lat[i] = y;
			lon[i] = x;
		}

		int nGCP = 5;

		GDAL_GCP *pasGCPs = (GDAL_GCP*)CPLMalloc(nGCP*sizeof(GDAL_GCP));
		GDALInitGCPs(nGCP, pasGCPs);

		pasGCPs[0].dfGCPPixel = 0;
		pasGCPs[0].dfGCPLine = 0;
		pasGCPs[0].dfGCPX = lon[0];
		pasGCPs[0].dfGCPY = lat[0];

		pasGCPs[1].dfGCPPixel = (width - 1);
		pasGCPs[1].dfGCPLine = 0;
		pasGCPs[1].dfGCPX = lon[1];
		pasGCPs[1].dfGCPY = lat[1];

		pasGCPs[2].dfGCPPixel = (width - 1);
		pasGCPs[2].dfGCPLine = (height - 1);
		pasGCPs[2].dfGCPX = lon[2];
		pasGCPs[2].dfGCPY = lat[2];

		pasGCPs[3].dfGCPPixel = 0;
		pasGCPs[3].dfGCPLine = (height - 1);
		pasGCPs[3].dfGCPX = lon[3];
		pasGCPs[3].dfGCPY = lat[3];

		pasGCPs[4].dfGCPPixel = (width/2 - 1);
		pasGCPs[4].dfGCPLine = (height/2 - 1);
		pasGCPs[4].dfGCPX = lon[4];
		pasGCPs[4].dfGCPY = lat[4];

		GDALGCPsToGeoTransform(nGCP, pasGCPs, adfGeoTransform, TRUE);

		printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);
	
		//tl
		lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//tr
		lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//br
		lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//bl
		lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//c
		lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
		lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

		printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);

	
	}
	else{
		printf("No geo info\n");
	}

	// フルパスを分解
	char szDir[_MAX_DIR];
	char szDrive[_MAX_DRIVE];
	char szFName[_MAX_FNAME];
	char szExt[_MAX_EXT];
	_splitpath(yaStr.systemStringToChar(fname), szDrive, szDir, szFName, szExt);

	// フォルダ、ファイル名取得
	sprintf(raster_fill_path, "%s%s", szDrive, szDir);
	sprintf(raster_file_name, "%s%s", szFName, szExt);

	printf("%s\n", raster_file_name);

	switch (paBand->GetRasterDataType()){
	case GDT_Byte:
		data_type = CV_8U;
		depth = 8;
		channel = 1;
		break;
	case GDT_UInt16:
		data_type = CV_16U;
		depth = 16;
		channel = 1;
		break;
	case GDT_Int16:
		data_type = CV_16S;
		depth = 16;
		channel = 1;
		break;
	case GDT_UInt32://OpenCVに該当するデータタイプなし
		data_type = 0;
		depth = 32;
		channel = 1;
		break;
	case GDT_Int32:
		data_type = CV_32S;
		depth = 32;
		channel = 1;
		break;
	case GDT_Float32:
		data_type = CV_32F;
		depth = 32;
		channel = 1;
		break;
	case GDT_Float64:
		data_type = CV_64F;
		depth = 64;
		channel = 1;
		break;
	case GDT_CInt16:
		data_type = CV_16SC2;
		depth = 16;
		channel = 2;
		break;
	case GDT_CInt32:
		data_type = CV_32SC2;
		depth = 32;
		channel = 2;
		break;
	case GDT_CFloat32:
		data_type = CV_32FC2;
		depth = 32;
		channel = 2;
		break;
	case GDT_CFloat64:
		data_type = CV_64FC2;
		depth = 64;
		channel = 2;
		break;
	}

	cv::Rect roi(0, 0, width, height);

	orgMat.create(roi.size(), data_type);

	paBand->RasterIO(GF_Read, roi.x, roi.y, roi.width, roi.height, orgMat.data,
		roi.width, roi.height, paBand->GetRasterDataType(), 0, 0);

	//GPUのメモリに載らないときはCPUで計算
	if ((long long)width*(long long)height > 600000000){
		printf("[Loading with CPU]\n");
		dspMat = convertToMagnitude(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
		logMat = convertToLog(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
	}
	else{
		printf("[Loading with GPU]\n");
		dspMat = convertToMagnitude_gpu(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
		logMat = convertToLog_gpu(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
	}

	cv::resize(dspMat, browseMat, cv::Size(), 0.25, 0.25);
	cv::Mat in[] = { browseMat, browseMat, browseMat };
	cv::Mat result = cv::Mat(browseMat.rows, browseMat.cols, CV_8UC3);
	cv::merge(in, 3, browseMat);//3バンドの色合成

	return 1;
}

int yaImageStack::readRasterFile_2bandSLC(System::String^ fname)
{
	GDALDataset *paDataset;
	yaString yaStr;
	cv::Mat src_img;
	cv::Mat dst_img;

	GDALAllRegister();

	paDataset = (GDALDataset*)GDALOpen(yaStr.systemStringToChar(fname), GA_ReadOnly);

	//バンド情報→OpenCV
	GDALRasterBand  *paBand,*paBand2;
	int             nBlockXSize, nBlockYSize;
	int             bGotMin, bGotMax;

	paBand = paDataset->GetRasterBand(1);
	paBand2 = paDataset->GetRasterBand(2);
	paBand->GetBlockSize(&nBlockXSize, &nBlockYSize);
	printf("Block=%dx%d Type=%s, ColorInterp=%s\n", nBlockXSize, nBlockYSize,
		GDALGetDataTypeName(paBand->GetRasterDataType()),
		GDALGetColorInterpretationName(paBand->GetColorInterpretation()));

	adfMinMax[0] = paBand->GetMinimum(&bGotMin);
	adfMinMax[1] = paBand->GetMaximum(&bGotMax);
	if (!(bGotMin && bGotMax)){
		GDALComputeRasterMinMax((GDALRasterBandH)paBand, TRUE, adfMinMax);
		printf("Min=%.3fd, Max=%.3f\n", adfMinMax[0], adfMinMax[1]);
	}
	if (paBand->GetOverviewCount() > 0){
		printf("Band has %d overviews.\n", paBand->GetOverviewCount());
	}
	if (paBand->GetColorTable() != NULL){
		printf("Band has a color table with %d entries.\n", paBand->GetColorTable()->GetColorEntryCount());
	}

	width = paDataset->GetRasterXSize();
	height = paDataset->GetRasterYSize();
	image_view_center_x = width / 2;
	image_view_center_y = height / 2;

	//幾何情報
	//double adfGeoTransform[6];

	//printf("Error code %d\n", paDataset->GetGeoTransform(adfGeoTransform));

	if (paDataset->GetGeoTransform(adfGeoTransform) == CE_None ||
		GDALGCPsToGeoTransform(paDataset->GetGCPCount(), paDataset->GetGCPs(), adfGeoTransform, TRUE)){
		printf("Origin is (%.6f,%.6f)\n",
			adfGeoTransform[0], adfGeoTransform[3]);

		printf("Pixel size is (%.6f,%.6f)\n",
			adfGeoTransform[1], adfGeoTransform[5]);

		/*
		y         tl ---tr           |       (0,0)     (w,0)
		^          |    |            |
		|-> +x    bl----br           |
		--------------------equator  |       (0,h)     (w,h)
		*/

		//tl
		lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//tr
		lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//br
		lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//bl
		lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//c
		lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
		lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

		char* Wkt = (char *)paDataset->GetProjectionRef();
		printf("%s\n", Wkt);
		OGRSpatialReference oSourceSRS, oTargetSRS;
		OGRCoordinateTransformation *poCT;
		double                  x, y;

		oSourceSRS.importFromWkt(&Wkt);
		//importFromEPSG(32653);
		oTargetSRS.importFromEPSG(4326);

		for (int i = 0; i < 5; i++){
			poCT = OGRCreateCoordinateTransformation(&oSourceSRS,
				&oTargetSRS);
			x = lat[i];
			y = lon[i];

			if (poCT == NULL || !poCT->Transform(1, &x, &y))
				printf("Transformation failed.\n");
			else
				printf("(%f,%f) -> (%f,%f)\n",
				lat[i],
				lon[i],
				x, y);
			lat[i] = y;
			lon[i] = x;
		}

		int nGCP = 5;

		GDAL_GCP *pasGCPs = (GDAL_GCP*)CPLMalloc(nGCP*sizeof(GDAL_GCP));
		GDALInitGCPs(nGCP, pasGCPs);

		pasGCPs[0].dfGCPPixel = 0;
		pasGCPs[0].dfGCPLine = 0;
		pasGCPs[0].dfGCPX = lon[0];
		pasGCPs[0].dfGCPY = lat[0];

		pasGCPs[1].dfGCPPixel = (width - 1);
		pasGCPs[1].dfGCPLine = 0;
		pasGCPs[1].dfGCPX = lon[1];
		pasGCPs[1].dfGCPY = lat[1];

		pasGCPs[2].dfGCPPixel = (width - 1);
		pasGCPs[2].dfGCPLine = (height - 1);
		pasGCPs[2].dfGCPX = lon[2];
		pasGCPs[2].dfGCPY = lat[2];

		pasGCPs[3].dfGCPPixel = 0;
		pasGCPs[3].dfGCPLine = (height - 1);
		pasGCPs[3].dfGCPX = lon[3];
		pasGCPs[3].dfGCPY = lat[3];

		pasGCPs[4].dfGCPPixel = (width / 2 - 1);
		pasGCPs[4].dfGCPLine = (height / 2 - 1);
		pasGCPs[4].dfGCPX = lon[4];
		pasGCPs[4].dfGCPY = lat[4];

		GDALGCPsToGeoTransform(nGCP, pasGCPs, adfGeoTransform, TRUE);

		printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);

		//tl
		lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//tr
		lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//br
		lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//bl
		lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//c
		lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
		lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

		printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);


	}
	else{
		printf("No geo info\n");
	}

	// フルパスを分解
	char szDir[_MAX_DIR];
	char szDrive[_MAX_DRIVE];
	char szFName[_MAX_FNAME];
	char szExt[_MAX_EXT];
	_splitpath(yaStr.systemStringToChar(fname), szDrive, szDir, szFName, szExt);

	// フォルダ、ファイル名取得
	sprintf(raster_fill_path, "%s%s", szDrive, szDir);
	sprintf(raster_file_name, "%s%s", szFName, szExt);

	printf("%s\n", raster_file_name);

	switch (paBand->GetRasterDataType()){
	case GDT_Byte:
		data_type = CV_8UC2;
		depth = 8;
		channel = 2;
		break;
	case GDT_UInt16:
		data_type = CV_16UC2;
		depth = 16;
		channel = 2;
		break;
	case GDT_Int16:
		data_type = CV_16SC2;
		depth = 16;
		channel = 2;
		break;
	case GDT_UInt32://OpenCVに該当するデータタイプなし
		data_type = 0;
		depth = 32;
		channel = 2;
		break;
	case GDT_Int32:
		data_type = CV_32SC2;
		depth = 32;
		channel = 2;
		break;
	case GDT_Float32:
		data_type = CV_32FC2;
		depth = 32;
		channel = 2;
		break;
	case GDT_Float64:
		data_type = CV_64FC2;
		depth = 64;
		channel = 2;
		break;
	}

	cv::Rect roi(0, 0, width, height);

	cv::Mat temp_I(roi.size(), CV_16SC1);
	cv::Mat temp_Q(roi.size(), CV_16SC1);

	orgMat.create(roi.size(), data_type);

	paBand->RasterIO(GF_Read, roi.x, roi.y, roi.width, roi.height, temp_I.data,
		roi.width, roi.height, paBand->GetRasterDataType(), 0, 0);
	paBand2->RasterIO(GF_Read, roi.x, roi.y, roi.width, roi.height, temp_Q.data,
		roi.width, roi.height, paBand->GetRasterDataType(), 0, 0);


	vector<cv::Mat> mv2;

	mv2.push_back(temp_I);
	mv2.push_back(temp_Q);
	merge(mv2, orgMat);

	//GPUのメモリに載らないときはCPUで計算
	if ((long long)width*(long long)height > 600000000){
		printf("[Loading with CPU]\n");
		dspMat = convertToMagnitude(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
		logMat = convertToLog(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
	}
	else{
		printf("[Loading with GPU]\n");
		dspMat = convertToMagnitude_gpu(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
		logMat = convertToLog_gpu(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
	}

	cv::resize(dspMat, browseMat, cv::Size(), 0.25, 0.25);
	cv::Mat in[] = { browseMat, browseMat, browseMat };
	cv::Mat result = cv::Mat(browseMat.rows, browseMat.cols, CV_8UC3);
	cv::merge(in, 3, browseMat);//3バンドの色合成

	return 1;
}

int yaImageStack::readRasterFileColor(System::String^ fname_r, System::String^ fname_g, System::String^ fname_b)
{
	GDALDataset *paDataset;
	GDALDataset *paDataset_g;
	GDALDataset *paDataset_b;
	yaString yaStr;
	cv::Mat src_img;
	cv::Mat dst_img;

	GDALAllRegister();

	paDataset = (GDALDataset*)GDALOpen(yaStr.systemStringToChar(fname_r), GA_ReadOnly);
	paDataset_g = (GDALDataset*)GDALOpen(yaStr.systemStringToChar(fname_g), GA_ReadOnly);
	paDataset_b = (GDALDataset*)GDALOpen(yaStr.systemStringToChar(fname_b), GA_ReadOnly);

	//バンド情報→OpenCV
	GDALRasterBand  *paBand;
	GDALRasterBand  *paBand_g;
	GDALRasterBand  *paBand_b;
	int             nBlockXSize, nBlockYSize;
	int             bGotMin, bGotMax;

	paBand = paDataset->GetRasterBand(1);
	paBand_g = paDataset_g->GetRasterBand(1);
	paBand_b = paDataset_b->GetRasterBand(1);
	paBand->GetBlockSize(&nBlockXSize, &nBlockYSize);
	printf("Block=%dx%d Type=%s, ColorInterp=%s\n", nBlockXSize, nBlockYSize,
		GDALGetDataTypeName(paBand->GetRasterDataType()),
		GDALGetColorInterpretationName(paBand->GetColorInterpretation()));

	adfMinMax[0] = paBand->GetMinimum(&bGotMin);
	adfMinMax[1] = paBand->GetMaximum(&bGotMax);
	if (!(bGotMin && bGotMax)){
		GDALComputeRasterMinMax((GDALRasterBandH)paBand, TRUE, adfMinMax);
		printf("Min=%.3fd, Max=%.3f\n", adfMinMax[0], adfMinMax[1]);
	}
	if (paBand->GetOverviewCount() > 0){
		printf("Band has %d overviews.\n", paBand->GetOverviewCount());
	}
	if (paBand->GetColorTable() != NULL){
		printf("Band has a color table with %d entries.\n", paBand->GetColorTable()->GetColorEntryCount());
	}

	width = min(paDataset->GetRasterXSize(), min(paDataset_g->GetRasterXSize(), paDataset_b->GetRasterXSize()));
	height = min(paDataset->GetRasterYSize(), min(paDataset_g->GetRasterYSize(), paDataset_b->GetRasterYSize()));
	image_view_center_x = width / 2;
	image_view_center_y = height / 2;

	//幾何情報
	//double adfGeoTransform[6];

	//printf("Error code %d\n", paDataset->GetGeoTransform(adfGeoTransform));

	if (paDataset->GetGeoTransform(adfGeoTransform) == CE_None ||
		GDALGCPsToGeoTransform(paDataset->GetGCPCount(), paDataset->GetGCPs(), adfGeoTransform, TRUE)) {
		printf("Origin is (%.6f,%.6f)\n",
			adfGeoTransform[0], adfGeoTransform[3]);

		printf("Pixel size is (%.6f,%.6f)\n",
			adfGeoTransform[1], adfGeoTransform[5]);

		/*
		y         tl ---tr           |       (0,0)     (w,0)
		^          |    |            |
		|-> +x    bl----br           |
		--------------------equator  |       (0,h)     (w,h)
		*/

		//tl
		lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//tr
		lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//br
		lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//bl
		lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//c
		lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
		lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

		char* Wkt = (char *)paDataset->GetProjectionRef();
		printf("%s\n", Wkt);
		OGRSpatialReference oSourceSRS, oTargetSRS;
		OGRCoordinateTransformation *poCT;
		double                  x, y;

		oSourceSRS.importFromWkt(&Wkt);
		//importFromEPSG(32653);
		oTargetSRS.importFromEPSG(4326);

		for (int i = 0; i < 5; i++) {
			poCT = OGRCreateCoordinateTransformation(&oSourceSRS,
				&oTargetSRS);
			x = lat[i];
			y = lon[i];

			if (poCT == NULL || !poCT->Transform(1, &x, &y))
				printf("Transformation failed.\n");
			else
				printf("(%f,%f) -> (%f,%f)\n",
					lat[i],
					lon[i],
					x, y);
			lat[i] = y;
			lon[i] = x;
		}

		int nGCP = 5;

		GDAL_GCP *pasGCPs = (GDAL_GCP*)CPLMalloc(nGCP * sizeof(GDAL_GCP));
		GDALInitGCPs(nGCP, pasGCPs);

		pasGCPs[0].dfGCPPixel = 0;
		pasGCPs[0].dfGCPLine = 0;
		pasGCPs[0].dfGCPX = lon[0];
		pasGCPs[0].dfGCPY = lat[0];

		pasGCPs[1].dfGCPPixel = (width - 1);
		pasGCPs[1].dfGCPLine = 0;
		pasGCPs[1].dfGCPX = lon[1];
		pasGCPs[1].dfGCPY = lat[1];

		pasGCPs[2].dfGCPPixel = (width - 1);
		pasGCPs[2].dfGCPLine = (height - 1);
		pasGCPs[2].dfGCPX = lon[2];
		pasGCPs[2].dfGCPY = lat[2];

		pasGCPs[3].dfGCPPixel = 0;
		pasGCPs[3].dfGCPLine = (height - 1);
		pasGCPs[3].dfGCPX = lon[3];
		pasGCPs[3].dfGCPY = lat[3];

		pasGCPs[4].dfGCPPixel = (width / 2 - 1);
		pasGCPs[4].dfGCPLine = (height / 2 - 1);
		pasGCPs[4].dfGCPX = lon[4];
		pasGCPs[4].dfGCPY = lat[4];

		GDALGCPsToGeoTransform(nGCP, pasGCPs, adfGeoTransform, TRUE);

		printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);

		//tl
		lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//tr
		lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
		lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

		//br
		lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//bl
		lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
		lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

		//c
		lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
		lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

		printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);


	}
	else {
		printf("No geo info\n");
	}

	// フルパスを分解
	char szDir[_MAX_DIR];
	char szDrive[_MAX_DRIVE];
	char szFName[_MAX_FNAME];
	char szExt[_MAX_EXT];
	_splitpath(yaStr.systemStringToChar(fname_r), szDrive, szDir, szFName, szExt);

	// フォルダ、ファイル名取得
	sprintf(raster_fill_path, "%s%s", szDrive, szDir);
	sprintf(raster_file_name, "%s%s", szFName, szExt);

	printf("%s\n", raster_file_name);

	switch (paBand->GetRasterDataType()){
	case GDT_Byte:
		data_type = CV_8U;
		depth = 8;
		channel = 1;
		break;
	case GDT_UInt16:
		data_type = CV_16U;
		depth = 16;
		channel = 1;
		break;
	case GDT_Int16:
		data_type = CV_16S;
		depth = 16;
		channel = 1;
		break;
	case GDT_UInt32://OpenCVに該当するデータタイプなし
		data_type = 0;
		depth = 32;
		channel = 1;
		break;
	case GDT_Int32:
		data_type = CV_32S;
		depth = 32;
		channel = 1;
		break;
	case GDT_Float32:
		data_type = CV_32F;
		depth = 32;
		channel = 1;
		break;
	case GDT_Float64:
		data_type = CV_64F;
		depth = 64;
		channel = 1;
		break;
	case GDT_CInt16:
		data_type = CV_16SC2;
		depth = 16;
		channel = 2;
		break;
	case GDT_CInt32:
		data_type = CV_32SC2;
		depth = 32;
		channel = 2;
		break;
	case GDT_CFloat32:
		data_type = CV_32FC2;
		depth = 32;
		channel = 2;
		break;
	case GDT_CFloat64:
		data_type = CV_64FC2;
		depth = 64;
		channel = 2;
		break;
	}

	cv::Rect roi(0, 0, width, height);

	cv::Mat band_r = cv::Mat(roi.size(), data_type);
	cv::Mat band_g = cv::Mat(roi.size(), data_type);
	cv::Mat band_b = cv::Mat(roi.size(), data_type);

	//orgMat.create(roi.size(), data_type);

	paBand->RasterIO(GF_Read, roi.x, roi.y, roi.width, roi.height, band_r.data,
		roi.width, roi.height, paBand->GetRasterDataType(), 0, 0);
	paBand_g->RasterIO(GF_Read, roi.x, roi.y, roi.width, roi.height, band_g.data,
		roi.width, roi.height, paBand_g->GetRasterDataType(), 0, 0);
	paBand_b->RasterIO(GF_Read, roi.x, roi.y, roi.width, roi.height, band_b.data,
		roi.width, roi.height, paBand_b->GetRasterDataType(), 0, 0);


	cv::Mat in[] = { band_b, band_g, band_r };

	cv::merge(in, 3, orgMat);//3バンドの色合成

	channel = 3;

	//GPUのメモリに載らないときはCPUで計算
	printf("[Loading with CPU]\n");
	dspMat = convertToMagnitude(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));
	logMat = convertToLog(orgMat, channel, depth, MAX(abs(adfMinMax[0]), abs(adfMinMax[1])));

	cv::resize(dspMat, browseMat, cv::Size(), 0.25, 0.25);

	return 1;
}

//描画関係
// cv::Mat to Bitmap
Bitmap^ yaImageStack::mat2bmp(cv::Mat img)
{
	cv::Mat out;
	if (img.channels() == 1){

		cv::Mat in[] = { img, img, img };//R G B
		out = cv::Mat(img.cols, img.rows, CV_8UC3);

		cv::merge(in, 3, out);
	}
	else{
		out = img.clone();
	}

	const int aligneCol = static_cast<int>(cv::alignSize(out.cols, 4));
	cv::Mat t_mat = cv::Mat(out.rows, aligneCol, out.type()); //row colの順

	cv::Mat roi_mat2 = cv::Mat(t_mat, cv::Rect(0, 0, out.cols, out.rows));//col rowの順

	out.copyTo(roi_mat2);
	Bitmap^ inter_bmp = gcnew Bitmap(roi_mat2.cols, roi_mat2.rows, roi_mat2.step,
		PixelFormat::Format24bppRgb, IntPtr(roi_mat2.ptr()));

	Bitmap^ bmp = gcnew Bitmap(inter_bmp);

	return bmp;
}

cv::Mat yaImageStack::convertToMagnitude(cv::Mat input, int channel, int depth, float scale)
{
	cv::Mat output;
	cv::Mat src_img, dst_img;
	float new_max, new_min;

	if (channel == 2){
		//実部と虚部に分離
		vector<Mat> mv;
		split(input, mv);

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[1].convertTo(dst_img, CV_64F);
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[1].convertTo(dst_img, CV_32F);
		}

		//絶対値
		magnitude(src_img, dst_img, src_img);

		//float new_scale = viewHistogram(src_img, scale);
		viewHistogram(src_img, scale, &new_max, &new_min);

		//8ビット整数に変換
		dst_img = 255. / (new_max-new_min) * (src_img-new_min);
		dst_img.convertTo(output, CV_8UC1);

		//equalizeHist(output, output);
	}
	else if (channel == 3){
		dst_img = 255. / scale * input;
		dst_img.convertTo(output, CV_8UC3);
	}
	else{

		//float new_scale = viewHistogram(input, scale);
		viewHistogram(input, scale, &new_max, &new_min);

		//dst_img = 255. / new_scale * input;
		dst_img = 255. / (new_max - new_min) * (input - new_min);
		dst_img.convertTo(output, CV_8UC1);
	}

	return output;
}

cv::Mat yaImageStack::convertToMagnitude_gpu(cv::Mat input, int channel, int depth, float scale)
{
	cv::cuda::GpuMat input_gpu;
	cv::Mat output;
	cv::cuda::GpuMat output_gpu;
	cv::cuda::GpuMat src_img, dst_img;
	input_gpu.upload(input);
	float new_max, new_min;

	if (channel == 2){
		//実部と虚部に分離
		vector<cv::cuda::GpuMat> mv;
		cv::cuda::split(input_gpu, mv);
		input_gpu.release();

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_64F);
			mv[1].release();
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_32F);
			mv[1].release();
		}

		//絶対値
		cv::cuda::magnitude(src_img, dst_img, src_img);

		src_img.download(output);
		viewHistogram(output, scale,&new_max,&new_min);


		//cv::cuda::equalizeHist(src_img, src_img);

		//8ビット整数に変換
		cv::cuda::add(src_img, -new_min, src_img);
		cv::cuda::multiply(255. / (new_max-new_min), src_img, dst_img);
		//dst_img.convertTo(dst_img, dst_img.type(), max_val ? 200. / max_val : 0., 0);
		src_img.release();
		dst_img.convertTo(output_gpu, CV_8UC1);

		//cv::cuda::equalizeHist(output_gpu, output_gpu);

		dst_img.release();
	}
	else if (channel == 3){
		cv::cuda::multiply(255. / scale, input_gpu, dst_img);
		input_gpu.release();
		dst_img.convertTo(output_gpu, CV_8UC3);
		dst_img.release();
	}
	else{
		input_gpu.download(output);
		output.convertTo(output, CV_32F);
		viewHistogram(output, scale, &new_max, &new_min);

		cv::cuda::add(input_gpu, -new_min, input_gpu);
		cv::cuda::multiply(255. / (new_max - new_min), input_gpu, dst_img);
		input_gpu.release();
		dst_img.convertTo(output_gpu, CV_8UC1);
		dst_img.release();
	}

	output_gpu.download(output);
	output_gpu.release();

	return output;
}

cv::Mat yaImageStack::convertToMagnitude_gpu_f(cv::Mat input, int channel, int depth, float scale)
{
	cv::cuda::GpuMat input_gpu;
	cv::Mat output;
	cv::cuda::GpuMat output_gpu;
	cv::cuda::GpuMat src_img, dst_img;
	input_gpu.upload(input);
	double minVal, maxVal;
	float new_max, new_min;

	if (channel == 2){
		//実部と虚部に分離
		vector<cv::cuda::GpuMat> mv;
		cv::cuda::split(input_gpu, mv);
		input_gpu.release();

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_64F);
			mv[1].release();
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_32F);
			mv[1].release();
		}

		//絶対値
		cv::cuda::magnitude(src_img, dst_img, src_img);

		src_img.download(output);

		minMaxLoc(output, &minVal, &maxVal, NULL, NULL, Mat());

		printf("%f %f\n", minVal, maxVal);

		viewHistogram(output, maxVal, &new_max, &new_min);

		cv::cuda::add(src_img, -new_min, src_img);
		cv::cuda::multiply(255. / (new_max - new_min), src_img, output_gpu);

		src_img.release();
		dst_img.release();
	}
	else if (channel == 3){
		cv::cuda::multiply(255. / scale, input_gpu, output_gpu);
		input_gpu.release();
		dst_img.release();
	}
	else{
		input_gpu.download(output);
		output.convertTo(output, CV_32F);
		viewHistogram(output, scale, &new_max, &new_min);

		cv::cuda::add(input_gpu, -new_min, input_gpu);
		cv::cuda::multiply(255. / (new_max - new_min), input_gpu, output_gpu);
		input_gpu.release();
		dst_img.release();
	}

	output_gpu.download(output);
	output_gpu.release();

	return output;
}

void yaImageStack::viewHistogram(cv::Mat input, float scale,float *new_max,float *new_min)
{

	// (2)allocate Mat to draw a histogram image
	const int ch_width = 1028;
	const int sch = input.channels();
	Mat hist_img(cv::Size(ch_width * sch, 200), CV_8UC3, Scalar::all(255));

	vector<MatND> hist(3);
	const int hist_size = 1024;
	const int hdims[] = { hist_size };
	const float hranges[] = { 0, scale };
	const float* ranges[] = { hranges };
	double max_val = .0;

	if (sch == 1) {
		// (3a)if the source image has single-channel, calculate its histogram
		calcHist(&input, 1, 0, Mat(), hist[0], 1, hdims, ranges, true, false);
		minMaxLoc(hist[0], 0, &max_val);
	}
	else {
		// (3b)if the souce image has multi-channel, calculate histogram of each plane
		for (int i = 0; i < sch; ++i) {
			calcHist(&input, 1, &i, Mat(), hist[i], 1, hdims, ranges, true, false);
			double tmp_val;
			minMaxLoc(hist[i], 0, &tmp_val);
			max_val = max_val < tmp_val ? tmp_val : max_val;
		}
	}


	int j;
	float hist_sum[3] = { 0, 0, 0 };
	for (int i = 0; i < sch; i++) {
		if (sch == 1){
			for (j = 0; j < hist_size; j++){
				hist_sum[0] += hist[0].at<float>(j);

				if (hist_sum[0] > 0.95*(float)input.cols*(float)input.rows){
					break;
				}
			}
		}
	}

	*new_max = j*scale / 1024.;
	printf("scale=%f/%f, %f %d %d\n",*new_max , scale, hist_sum[0], input.cols, input.rows);
	
	hist_sum[0] = 0;
	for (int i = 0; i < sch; i++) {
		if (sch == 1){
			for (j = 0; j < hist_size; j++){
				hist_sum[0] += hist[0].at<float>(j);

				if (hist_sum[0] > 0.05*(float)input.cols*(float)input.rows){
					break;
				}
			}
		}
	}

	*new_min = j*scale / 1024.;
	printf("scale=%f/%f, %f %d %d\n", *new_min, scale, hist_sum[0], input.cols, input.rows);

	// (4)scale and draw the histogram(s)
	Scalar color = Scalar::all(100);
	for (int i = 0; i<sch; i++) {
		if (sch == 3){
			color = Scalar((0xaa << i * 8) & 0x0000ff, (0xaa << i * 8) & 0x00ff00, (0xaa << i * 8) & 0xff0000, 0);
		}
		hist[i].convertTo(hist[i], hist[i].type(), max_val ? 200. / max_val : 0., 0);
		for (int j = 0; j<hist_size; ++j) {
			int bin_w = saturate_cast<int>((double)ch_width / hist_size);
			rectangle(hist_img,
				cv::Point(j*bin_w + (i*ch_width), hist_img.rows),
				cv::Point((j + 1)*bin_w + (i*ch_width), hist_img.rows - saturate_cast<int>(hist[i].at<float>(j))),
				color, -1);
		}
	}

	// (5)show the histogram iamge, and quit when any key pressed
	namedWindow("Histogram", CV_WINDOW_AUTOSIZE);
	imshow("Histogram", hist_img);

	//return new_scale;
}

cv::Mat yaImageStack::convertToLog(cv::Mat input, int channel, int depth, float scale)
{
	cv::Mat output;
	cv::Mat src_img, dst_img;
	double minVal, maxVal;

	if (channel == 2){
		//実部と虚部に分離
		vector<Mat> mv;
		split(input, mv);

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[1].convertTo(dst_img, CV_64F);
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[1].convertTo(dst_img, CV_32F);
		}

		//絶対値
		magnitude(src_img, dst_img, src_img);

		log(src_img + 1, src_img);

		minMaxLoc(src_img, &minVal, &maxVal, NULL, NULL, Mat());

		printf("%f %f\n", minVal, maxVal);

		//8ビット整数に変換
		dst_img = 255.*(src_img - minVal) / (maxVal - minVal);
		dst_img.convertTo(output, CV_8UC1);
	}
	else{
		input.convertTo(input, CV_32F);

		log(input + 1, input);

		minMaxLoc(input, &minVal, &maxVal, NULL, NULL, Mat());

		printf("%f %f\n", minVal, maxVal);

		//8ビット整数に変換
		dst_img = 255.*(input - minVal) / (maxVal - minVal);
		dst_img.convertTo(output, CV_8UC1);
	}

	return output;
}

cv::Mat yaImageStack::convertToLog_gpu(cv::Mat input, int channel, int depth, float scale)
{
	cv::cuda::GpuMat input_gpu;
	cv::Mat output;
	cv::cuda::GpuMat output_gpu;
	cv::cuda::GpuMat src_img, dst_img;
	input_gpu.upload(input);
	double minVal, maxVal;

	if (channel == 2){
		//実部と虚部に分離
		vector<cv::cuda::GpuMat> mv;
		cv::cuda::split(input_gpu, mv);
		input_gpu.release();

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_64F);
			mv[1].release();
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_32F);
			mv[1].release();
		}

		//絶対値
		cv::cuda::magnitude(src_img, dst_img, src_img);

		cv::cuda::add(src_img, 1, src_img);

		cv::cuda::log(src_img, src_img);


		src_img.download(output);
		minMaxLoc(output, &minVal, &maxVal, NULL, NULL, Mat());

		printf("%f %f\n", minVal, maxVal);

		//8ビット整数に変換
		//cv::add(src_img, -minVal, src_img);
		cv::cuda::multiply(255. / (maxVal - minVal), src_img, dst_img);
		src_img.release();
		dst_img.convertTo(output_gpu, CV_8UC1);
		dst_img.release();
	}
	else{
		input_gpu.convertTo(src_img, CV_32F);
		input_gpu.release();

		cv::cuda::add(src_img, 1, src_img);

		cv::cuda::log(src_img, src_img);

		src_img.download(output);
		minMaxLoc(output, &minVal, &maxVal, NULL, NULL, Mat());

		//8ビット整数に変換
		//cv::add(src_img, -minVal, src_img);
		cv::cuda::multiply(255. / (maxVal - minVal), src_img, dst_img);
		src_img.release();
		dst_img.convertTo(output_gpu, CV_8UC1);
		dst_img.release();
	}

	output_gpu.download(output);
	output_gpu.release();

	return output;
}

cv::Mat yaImageStack::convertToLog_gpu_f(cv::Mat input, int channel, int depth, float scale)
{
	cv::cuda::GpuMat input_gpu;
	cv::Mat output;
	cv::cuda::GpuMat output_gpu;
	cv::cuda::GpuMat src_img, dst_img;
	input_gpu.upload(input);
	double minVal, maxVal;

	if (channel == 2){
		//実部と虚部に分離
		vector<cv::cuda::GpuMat> mv;
		cv::cuda::split(input_gpu, mv);
		input_gpu.release();

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_64F);
			mv[1].release();
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[0].release();
			mv[1].convertTo(dst_img, CV_32F);
			mv[1].release();
		}

		//絶対値
		cv::cuda::magnitude(src_img, dst_img, src_img);

		cv::cuda::add(src_img, 1, src_img);
		cv::cuda::log(src_img, src_img);

		src_img.download(output);
		minMaxLoc(output, &minVal, &maxVal, NULL, NULL, Mat());

		printf("%f %f\n", minVal, maxVal);

		//8ビット整数に変換
		cv::cuda::multiply(255. / (maxVal - minVal), src_img, output_gpu);
		src_img.release();
		dst_img.release();
	}
	else{
		input_gpu.convertTo(src_img, CV_32F);
		input_gpu.release();

		cv::cuda::add(src_img, 1, src_img);

		cv::cuda::log(src_img, src_img);

		src_img.download(output);
		minMaxLoc(output, &minVal, &maxVal, NULL, NULL, Mat());

		//8ビット整数に変換
		//cv::add(src_img, -minVal, src_img);
		cv::cuda::multiply(255. / (maxVal - minVal), src_img, output_gpu);
		src_img.release();
		dst_img.release();
	}

	output_gpu.download(output);
	output_gpu.release();

	return output;
}

cv::Mat yaImageStack::convertToAngle(cv::Mat input, int channel, int depth)
{
	cv::Mat output;
	cv::Mat src_img, dst_img;

	if (channel == 2){
		//実部と虚部に分離
		vector<Mat> mv;
		split(input, mv);

		if (depth == 64){
			//倍精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_64F);
			mv[1].convertTo(dst_img, CV_64F);
		}
		else{
			//単精度浮動小数点に変換
			mv[0].convertTo(src_img, CV_32F);
			mv[1].convertTo(dst_img, CV_32F);
		}

		//位相
		phase(src_img, dst_img, src_img, true);

		//8ビット整数に変換
		dst_img = 255. / 360.* src_img;
		dst_img.convertTo(output, CV_8UC1);
	}
	else{
		dst_img = 128;
		dst_img.convertTo(output, CV_8UC1);
	}

	return output;
}

cv::Mat yaImageStack::twoImageRegistartion(yaImageStack mImageStack[], System::Drawing::Rectangle theRectangle, int active_image_layer, int sub_image_layer, float scale_facter, int channel)
{
	int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
	int result_img_height = theRectangle.Height / scale_facter;

	int start_x = mImageStack[active_image_layer].image_view_start_x + theRectangle.X / scale_facter;
	int start_y = mImageStack[active_image_layer].image_view_start_y + theRectangle.Y / scale_facter;
	int end_x = start_x + result_img_width;
	int end_y = start_y + result_img_height;

	cv::Mat roi_mat = cv::Mat(mImageStack[active_image_layer].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	double start_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + start_x * mImageStack[active_image_layer].adfGeoTransform[1] + start_y * mImageStack[active_image_layer].adfGeoTransform[2];
	double start_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + start_x * mImageStack[active_image_layer].adfGeoTransform[4] + start_y * mImageStack[active_image_layer].adfGeoTransform[5];

	double end_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + end_x * mImageStack[active_image_layer].adfGeoTransform[1] + end_y * mImageStack[active_image_layer].adfGeoTransform[2];
	double end_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + end_x * mImageStack[active_image_layer].adfGeoTransform[4] + end_y * mImageStack[active_image_layer].adfGeoTransform[5];

	//平均値の計算
	cv::Mat tmp_average;

	cv::reduce(roi_mat, tmp_average, 1, CV_REDUCE_AVG);

	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_AVG);
	std::cout << tmp_average << std::endl;

	double a0 = mImageStack[sub_image_layer].adfGeoTransform[0];
	double a1 = mImageStack[sub_image_layer].adfGeoTransform[1];
	double a2 = mImageStack[sub_image_layer].adfGeoTransform[2];
	double a3 = mImageStack[sub_image_layer].adfGeoTransform[3];
	double a4 = mImageStack[sub_image_layer].adfGeoTransform[4];
	double a5 = mImageStack[sub_image_layer].adfGeoTransform[5];

	int start_x_sub = (a5*(start_x_proj - a0) - a2*(start_y_proj - a3)) / (a1*a5 - a2*a4);
	int start_y_sub = (-a4*(start_x_proj - a0) + a1*(start_y_proj - a3)) / (a1*a5 - a2*a4);

	int end_x_sub = (a5*(end_x_proj - a0) - a2*(end_y_proj - a3)) / (a1*a5 - a2*a4);
	int end_y_sub = (-a4*(end_x_proj - a0) + a1*(end_y_proj - a3)) / (a1*a5 - a2*a4);

	cv::Mat mOrgLayer_ROI = cv::Mat(mImageStack[sub_image_layer].orgMat, cv::Rect(start_x_sub, start_y_sub, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub)));

	//cv::Mat mDspLayer_ROI = mImageStack[active_image_layer].convertToMagnitude(mOrgLayer_ROI, mImageStack[active_image_layer].channel, mImageStack[active_image_layer].depth, MAX(abs(mImageStack[active_image_layer].adfMinMax[0]), abs(mImageStack[active_image_layer].adfMinMax[1])));

	cv::Mat mDspLayer_ROI = cv::Mat(mImageStack[sub_image_layer].dspMat, cv::Rect(start_x_sub, start_y_sub, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub)));

	cv::reduce(mDspLayer_ROI, tmp_average, 1, CV_REDUCE_AVG);

	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_AVG);
	std::cout << tmp_average << std::endl;

	cv::resize(mOrgLayer_ROI, mOrgLayer_ROI, cv::Size(),
		mImageStack[sub_image_layer].adfGeoTransform[1] / mImageStack[active_image_layer].adfGeoTransform[1],
		mImageStack[sub_image_layer].adfGeoTransform[5] / mImageStack[active_image_layer].adfGeoTransform[5]);

	cv::resize(mDspLayer_ROI, mDspLayer_ROI, cv::Size(),
		mImageStack[sub_image_layer].adfGeoTransform[1] / mImageStack[active_image_layer].adfGeoTransform[1],
		mImageStack[sub_image_layer].adfGeoTransform[5] / mImageStack[active_image_layer].adfGeoTransform[5]);

	cv::resize(mDspLayer_ROI, mDspLayer_ROI, cv::Size(roi_mat.cols,roi_mat.rows));

	printf("sub %d %d %d %d\n", start_x_sub, start_y_sub, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub));

	/*cv::Mat matHann;
	createHanningWindow(matHann, roi_mat.size(), CV_32F);
	double response;

	cv::Mat src1, src2;
	roi_mat.convertTo(src1, CV_32FC1);
	mDspLayer_ROI.convertTo(src2, CV_32FC1);
	Point2d shift = cv::phaseCorrelate(src1,src2, matHann, &response);
	printf("Shift X: %g\nShift Y: %g\nResponse: %g\n", shift.x, shift.y, response);

	double min_val, max_val;
	cv::Point min_loc, max_loc;
	cv::Mat dst_img;
	cv::matchTemplate(roi_mat, mDspLayer_ROI, dst_img, CV_TM_CCOEFF_NORMED);
	cv::minMaxLoc(dst_img, &min_val, &max_val, &min_loc, &max_loc, Mat());

	printf("Shift X: %g\nShift Y: %g\nResponse: %g\n", max_loc.x, max_loc.y, max_val);

	cv::Mat co_mat = (cv::Mat_<double>(2, 3) << 0, 0, shift.x, 0, 0, shift.y);
	warpAffine(mDspLayer_ROI, mDspLayer_ROI, co_mat, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);*/


	//動きを定義
	const int warp_mode = MOTION_HOMOGRAPHY;// 
	//const int warp_mode = MOTION_EUCLIDEAN;
	//const int warp_mode = MOTION_AFFINE;

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
	int number_of_iterations = 500;

	// Specify the threshold of the increment
	// in the correlation coefficient between two iterations
	double termination_eps = 0.01;// 1e-10;

	// Define termination criteria
	TermCriteria criteria(TermCriteria::COUNT + TermCriteria::EPS, number_of_iterations, termination_eps);

	//imshow("base",roi_mat);
	//imshow("target",mOrgLayer_ROI);

	// Run the ECC algorithm. The results are stored in warp_matrix.

	//printf("%d\n", roi_mat.type());
	//printf("%d\n", mDspLayer_ROI.type());

	imwrite("test1.png", roi_mat);
	imwrite("test2.png", mDspLayer_ROI);

	cv::Mat gray_img;
	double cc;
	if (mDspLayer_ROI.type() != roi_mat.type()){
		cvtColor(mDspLayer_ROI, gray_img, CV_RGB2GRAY);

		cc = findTransformECC(
			roi_mat,
			gray_img,
			warp_matrix,
			warp_mode,
			criteria
			);
	}
	else{
		cc = findTransformECC(
			roi_mat,
			mDspLayer_ROI,
			warp_matrix,
			warp_mode,
			criteria
			);
	}

	if (cc == -1)
	{
		printf("error\n");

		if (channel == 1){
			return mDspLayer_ROI;
		}
		else{
			return mOrgLayer_ROI;
		}
	}

	Mat sub_aligned;

	if (channel == 1){
		if (warp_mode != MOTION_HOMOGRAPHY){
			// Use warpAffine for Translation, Euclidean and Affine
			//warpAffine(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			warpAffine(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
		else{
			// Use warpPerspective for Homography
			//warpPerspective(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			warpPerspective(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
	}
	else{
		if (warp_mode != MOTION_HOMOGRAPHY){
			// Use warpAffine for Translation, Euclidean and Affine
			//warpAffine(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			warpAffine(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
		else{
			// Use warpPerspective for Homography
			//warpPerspective(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			warpPerspective(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
	}

	return sub_aligned;
}

cv::Mat yaImageStack::twoImageRegistartion2(yaImageStack mImageStack[], System::Drawing::Rectangle theRectangle, int active_image_layer, int sub_image_layer, float scale_facter, int channel)
{
	int result_img_width = theRectangle.Width / scale_facter;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
	int result_img_height = theRectangle.Height / scale_facter;

	int start_x = mImageStack[active_image_layer].image_view_start_x + theRectangle.X / scale_facter;
	int start_y = mImageStack[active_image_layer].image_view_start_y + theRectangle.Y / scale_facter;
	int end_x = start_x + result_img_width;
	int end_y = start_y + result_img_height;

	cv::Mat roi_mat = cv::Mat(mImageStack[active_image_layer].dspMat, cv::Rect(start_x, start_y, result_img_width, result_img_height));

	double start_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + start_x * mImageStack[active_image_layer].adfGeoTransform[1] + start_y * mImageStack[active_image_layer].adfGeoTransform[2];
	double start_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + start_x * mImageStack[active_image_layer].adfGeoTransform[4] + start_y * mImageStack[active_image_layer].adfGeoTransform[5];

	double end_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + end_x * mImageStack[active_image_layer].adfGeoTransform[1] + end_y * mImageStack[active_image_layer].adfGeoTransform[2];
	double end_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + end_x * mImageStack[active_image_layer].adfGeoTransform[4] + end_y * mImageStack[active_image_layer].adfGeoTransform[5];

	//平均値の計算
	cv::Mat tmp_average;

	cv::reduce(roi_mat, tmp_average, 1, CV_REDUCE_AVG);

	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_AVG);
	std::cout << tmp_average << std::endl;

	double a0 = mImageStack[sub_image_layer].adfGeoTransform[0];
	double a1 = mImageStack[sub_image_layer].adfGeoTransform[1];
	double a2 = mImageStack[sub_image_layer].adfGeoTransform[2];
	double a3 = mImageStack[sub_image_layer].adfGeoTransform[3];
	double a4 = mImageStack[sub_image_layer].adfGeoTransform[4];
	double a5 = mImageStack[sub_image_layer].adfGeoTransform[5];

	int start_x_sub = (a5*(start_x_proj - a0) - a2*(start_y_proj - a3)) / (a1*a5 - a2*a4);
	int start_y_sub = (-a4*(start_x_proj - a0) + a1*(start_y_proj - a3)) / (a1*a5 - a2*a4);

	int end_x_sub = (a5*(end_x_proj - a0) - a2*(end_y_proj - a3)) / (a1*a5 - a2*a4);
	int end_y_sub = (-a4*(end_x_proj - a0) + a1*(end_y_proj - a3)) / (a1*a5 - a2*a4);

	cv::Mat mOrgLayer_ROI = cv::Mat(mImageStack[sub_image_layer].orgMat, cv::Rect(start_x_sub, start_y_sub, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub)));

	//cv::Mat mDspLayer_ROI = cv::Mat(mImageStack[sub_image_layer].dspMat, cv::Rect(start_x_sub+50, start_y_sub+50, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub)));
	cv::Mat mDspLayer_ROI = cv::Mat(mImageStack[sub_image_layer].dspMat, cv::Rect(start_x_sub, start_y_sub, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub)));

	cv::reduce(mDspLayer_ROI, tmp_average, 1, CV_REDUCE_AVG);

	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_AVG);
	std::cout << tmp_average << std::endl;

	cv::resize(mOrgLayer_ROI, mOrgLayer_ROI, cv::Size(),
		mImageStack[sub_image_layer].adfGeoTransform[1] / mImageStack[active_image_layer].adfGeoTransform[1],
		mImageStack[sub_image_layer].adfGeoTransform[5] / mImageStack[active_image_layer].adfGeoTransform[5]);

	cv::resize(mDspLayer_ROI, mDspLayer_ROI, cv::Size(),
		mImageStack[sub_image_layer].adfGeoTransform[1] / mImageStack[active_image_layer].adfGeoTransform[1],
		mImageStack[sub_image_layer].adfGeoTransform[5] / mImageStack[active_image_layer].adfGeoTransform[5]);

	cv::resize(mDspLayer_ROI, mDspLayer_ROI, cv::Size(roi_mat.cols, roi_mat.rows));

	printf("sub %d %d %d %d\n", start_x_sub, start_y_sub, abs(end_x_sub - start_x_sub), abs(end_y_sub - start_y_sub));

	cv::Mat src1, src2;
	roi_mat.convertTo(src1, CV_8UC1);
	mDspLayer_ROI.convertTo(src2, CV_8UC1);

	medianBlur(src1, src1, 29);
	medianBlur(src2, src2, 29);

	//src1 = yaEditImage::GetGradient(src1);
	//src2 = yaEditImage::GetGradient(src2);

	imwrite("src1.png", src1);
	imwrite("src2.png", src2);

	/*Point2d shift = cv::phaseCorrelate(src1,src2, matHann, &response);
	printf("Shift X: %g\nShift Y: %g\nResponse: %g\n", shift.x, shift.y, response);*/

	cv::Mat src3 = cv::Mat(cv::Size(2 * src1.cols, 2 * src1.rows), src1.type(),Scalar::all(0));

	cv::Mat src3_roi = cv::Mat(src3, cv::Rect(0.5*src1.cols, 0.5*src1.rows, src1.cols, src1.rows));

	src1.copyTo(src3_roi);

	imwrite("src3.png", src3);

	double min_val, max_val;
	cv::Point min_loc, max_loc;
	cv::Mat dst_img;
	cv::matchTemplate(src3, src2, dst_img, CV_TM_CCOEFF_NORMED);
	cv::minMaxLoc(dst_img, &min_val, &max_val, &min_loc, &max_loc, Mat());

	imshow("dst", dst_img);
	imwrite("dst.png", dst_img);

	printf("Shift X: %d\nShift Y: %d\nResponse: %g\n", max_loc.x - src1.cols/2, max_loc.y - src1.rows/2, max_val);

	cv::Mat src4;

	cv::Mat co_mat = (cv::Mat_<double>(2, 3) << 1, 0, -(max_loc.x-0.5*src1.cols), 0, 1, -(max_loc.y-0.5*src1.rows));
	warpAffine(mDspLayer_ROI, src4, co_mat, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
	warpAffine(src2, src2, co_mat, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);

	imwrite("src2_2.png", src2);
	imwrite("src4.png", src4);


	//動きを定義
	//const int warp_mode = MOTION_HOMOGRAPHY;// 
	//const int warp_mode = MOTION_EUCLIDEAN;
	const int warp_mode = MOTION_AFFINE;

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
	int number_of_iterations = 500;

	// Specify the threshold of the increment
	// in the correlation coefficient between two iterations
	double termination_eps = 0.01;// 1e-10;

	// Define termination criteria
	TermCriteria criteria(TermCriteria::COUNT + TermCriteria::EPS, number_of_iterations, termination_eps);

	cv::Mat gray_img;
	double cc;
	if (mDspLayer_ROI.type() != roi_mat.type()){
		cvtColor(mDspLayer_ROI, gray_img, CV_RGB2GRAY);

		cc = findTransformECC(
			roi_mat,
			gray_img,
			warp_matrix,
			warp_mode,
			criteria
			);
	}
	else{
		cc = findTransformECC(
			src1,
			src2,
			warp_matrix,
			warp_mode,
			criteria
			);
	}

	if (cc == -1)
	{
		printf("error\n");

		if (channel == 1){
			return mDspLayer_ROI;
		}
		else{
			return mOrgLayer_ROI;
		}
	}

	Mat sub_aligned;

	if (channel == 1){
		if (warp_mode != MOTION_HOMOGRAPHY){
			// Use warpAffine for Translation, Euclidean and Affine
			//warpAffine(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			//warpAffine(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
			warpAffine(src4, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
		else{
			// Use warpPerspective for Homography
			//warpPerspective(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			//warpPerspective(mDspLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
			warpPerspective(src4, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
	}
	else{
		if (warp_mode != MOTION_HOMOGRAPHY){
			// Use warpAffine for Translation, Euclidean and Affine
			//warpAffine(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			warpAffine(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
		else{
			// Use warpPerspective for Homography
			//warpPerspective(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_LINEAR + WARP_INVERSE_MAP);
			warpPerspective(mOrgLayer_ROI, sub_aligned, warp_matrix, roi_mat.size(), INTER_CUBIC + WARP_INVERSE_MAP);
		}
	}

	return sub_aligned;
}


int yaImageStack::addNewLayer(yaImageStack mImageStack[], System::Drawing::Rectangle theRectangle, int active_image_layer, cv::Mat newMat, double scale_facter_in)
{
	scale_facter = 1;

	orgMat = newMat.clone();
	dspMat = newMat.clone();
	logMat = newMat.clone();

	cv::resize(dspMat, browseMat, cv::Size(), 0.25, 0.25);
	if (browseMat.channels() == 1){
		cv::resize(dspMat, browseMat, cv::Size(), 0.25, 0.25);
		cv::Mat in[] = { browseMat, browseMat, browseMat };
		cv::Mat result = cv::Mat(browseMat.rows, browseMat.cols, CV_8UC3);
		cv::merge(in, 3, browseMat);//3バンドの色合成
	}

	int result_img_width = theRectangle.Width / scale_facter_in;  //scale_facter=1なら等倍、１以上なら拡大なので必要な領域は1/scale_facter
	int result_img_height = theRectangle.Height / scale_facter_in;

	int start_x = mImageStack[active_image_layer].image_view_start_x + theRectangle.X / scale_facter_in;
	int start_y = mImageStack[active_image_layer].image_view_start_y + theRectangle.Y / scale_facter_in;

	double start_x_proj = mImageStack[active_image_layer].adfGeoTransform[0] + start_x * mImageStack[active_image_layer].adfGeoTransform[1] + start_y * mImageStack[active_image_layer].adfGeoTransform[2];
	double start_y_proj = mImageStack[active_image_layer].adfGeoTransform[3] + start_x * mImageStack[active_image_layer].adfGeoTransform[4] + start_y * mImageStack[active_image_layer].adfGeoTransform[5];

	strcpy(raster_fill_path, mImageStack[active_image_layer].raster_fill_path);
	strcpy(raster_file_name, "new");

	/*cv::Mat tmp_average;

	cv::reduce(orgMat, tmp_average, 1, CV_REDUCE_MAX);
	cv::reduce(tmp_average, tmp_average, 0, CV_REDUCE_MAX);
	adfMinMax[0] << tmp_average << std::endl;*/

	adfMinMax[0] = 255;
	adfMinMax[1] = 0;

	width = orgMat.cols;
	height = orgMat.rows;
	image_view_center_x = width / 2;
	image_view_center_y = height / 2;

	adfGeoTransform[0] = start_x_proj;
	adfGeoTransform[1] = mImageStack[active_image_layer].adfGeoTransform[1];
	adfGeoTransform[2] = mImageStack[active_image_layer].adfGeoTransform[2];
	adfGeoTransform[3] = start_y_proj;
	adfGeoTransform[4] = mImageStack[active_image_layer].adfGeoTransform[4];
	adfGeoTransform[5] = mImageStack[active_image_layer].adfGeoTransform[5];


	printf("active %d\n", active_image_layer);
	printf("%d %d %lf %lf\n", width, height, start_x_proj, start_y_proj);

	//tl
	lat[0] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + 0 * adfGeoTransform[2];
	lon[0] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + 0 * adfGeoTransform[5];

	//tr
	lat[1] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + 0 * adfGeoTransform[2];
	lon[1] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + 0 * adfGeoTransform[5];

	//br
	lat[2] = adfGeoTransform[0] + (width - 1) * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
	lon[2] = adfGeoTransform[3] + (width - 1) * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

	//bl
	lat[3] = adfGeoTransform[0] + 0 * adfGeoTransform[1] + (height - 1) * adfGeoTransform[2];
	lon[3] = adfGeoTransform[3] + 0 * adfGeoTransform[4] + (height - 1) * adfGeoTransform[5];

	//c
	lat[4] = adfGeoTransform[0] + (width / 2 - 1) * adfGeoTransform[1] + (height / 2 - 1) * adfGeoTransform[2];
	lon[4] = adfGeoTransform[3] + (width / 2 - 1) * adfGeoTransform[4] + (height / 2 - 1) * adfGeoTransform[5];

	printf("projection\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n (%f,%f)\n", lat[0], lon[0], lat[1], lon[1], lat[2], lon[2], lat[3], lon[3], lat[4], lon[4]);

	data_type = orgMat.type();
	depth = orgMat.depth();
	channel = orgMat.channels();

	return 1;

}