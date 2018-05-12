#ifndef _ya_common_
#define _ya_common_

#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>

#include <Windows.h>

#include <gdal_priv.h>
#include <cpl_conv.h>
#include <ogr_core.h>
#include <ogr_spatialref.h>

#include <opencv2/opencv.hpp>

#include <opencv2/core.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/video/tracking.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/superres.hpp>
#include <opencv2/superres/optical_flow.hpp>
#include <opencv2/opencv_modules.hpp>
#include <opencv2/features2d.hpp>

#include <opencv2/photo.hpp>

#include <opencv2/cudaimgproc.hpp>
#include <opencv2/cudaarithm.hpp>
#include <opencv2/cudawarping.hpp>

/*#include <tiff.h>
#include <tiffio.h>
#include <xtiffio.h>
#include <geotiff.h>
#include <geokeys.h>
#include <geo_tiffp.h>
#include <geo_normalize.h>
#include <geo_simpletags.h>
#include <geovalues.h>*/

#endif

#ifdef _DEBUG
#pragma comment(lib,"opencv_core320d.lib")
#pragma comment(lib,"opencv_features2d320d.lib")
#pragma comment(lib,"opencv_flann320d.lib")
#pragma comment(lib,"opencv_highgui320d.lib")
#pragma comment(lib,"opencv_imgcodecs320d.lib")
#pragma comment(lib,"opencv_imgproc320d.lib") 
#pragma comment(lib,"opencv_objdetect320d.lib")
#pragma comment(lib,"opencv_photo320d.lib")
#pragma comment(lib,"opencv_stitching320d.lib")
#pragma comment(lib,"opencv_superres320d.lib")
#pragma comment(lib,"opencv_video320d.lib")
#pragma comment(lib,"opencv_videoio320d.lib")
#pragma comment(lib,"opencv_videostab320d.lib")
#pragma comment(lib,"opencv_viz320d.lib")

#pragma comment(lib,"opencv_cudaarithm320d.lib")
#pragma comment(lib,"opencv_cudabgsegm320d.lib")
#pragma comment(lib,"opencv_cudacodec320d.lib")
#pragma comment(lib,"opencv_cudafeatures2d320d.lib")
#pragma comment(lib,"opencv_cudafilters320d.lib")
#pragma comment(lib,"opencv_cudaimgproc320d.lib")
#pragma comment(lib,"opencv_cudalegacy320d.lib")
#pragma comment(lib,"opencv_cudaobjdetect320d.lib")
#pragma comment(lib,"opencv_cudaoptflow320d.lib")
#pragma comment(lib,"opencv_cudastereo320d.lib")
#pragma comment(lib,"opencv_cudawarping320d.lib")
#else
#pragma comment(lib,"opencv_core320.lib")
#pragma comment(lib,"opencv_features2d320.lib")
#pragma comment(lib,"opencv_flann320.lib")
#pragma comment(lib,"opencv_highgui320.lib")
#pragma comment(lib,"opencv_imgcodecs320.lib")
#pragma comment(lib,"opencv_imgproc320.lib") 
#pragma comment(lib,"opencv_objdetect320.lib")
#pragma comment(lib,"opencv_photo320.lib")
#pragma comment(lib,"opencv_stitching320.lib")
#pragma comment(lib,"opencv_superres320.lib")
#pragma comment(lib,"opencv_video320.lib")
#pragma comment(lib,"opencv_videoio320.lib")
#pragma comment(lib,"opencv_videostab320.lib")
#pragma comment(lib,"opencv_viz320.lib")

#pragma comment(lib,"opencv_cudaarithm320.lib")
#pragma comment(lib,"opencv_cudabgsegm320.lib")
#pragma comment(lib,"opencv_cudacodec320.lib")
#pragma comment(lib,"opencv_cudafeatures2d320.lib")
#pragma comment(lib,"opencv_cudafilters320.lib")
#pragma comment(lib,"opencv_cudaimgproc320.lib")
#pragma comment(lib,"opencv_cudalegacy320.lib")
#pragma comment(lib,"opencv_cudaobjdetect320.lib")
#pragma comment(lib,"opencv_cudaoptflow320.lib")
#pragma comment(lib,"opencv_cudastereo320.lib")
#pragma comment(lib,"opencv_cudawarping320.lib")
#endif

#pragma comment(lib,"libtiff_i.lib")
//#pragma comment(lib,"geotiff.lib")
#pragma comment(lib,"gdal_i.lib")


#define sign_float(a,b) (a>b)?1.0f:(a<b)?-1.0f:0.0f 

#define MAX_IMAGE_STACK 32