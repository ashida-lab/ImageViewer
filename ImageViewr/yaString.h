#ifndef _YA_STRING_
#define _YA_STRING_

#include "yaCommon.h"

using namespace cv;
//using namespace std;
using namespace cv::superres;

public ref class yaString{
public:
	yaString();
	static const char* systemStringToChar(System::String^ systemStr);
	static System::String^  charToSystemString(char *charStr);
	static int systemStringToInt(System::String^ systemStr);
	static double systemStringToDouble(System::String^ systemStr);
private:
};

#endif