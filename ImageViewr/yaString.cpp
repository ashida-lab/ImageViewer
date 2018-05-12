//#include "yaCommon.h" 
#include "yaString.h"


//using namespace std;
using namespace cv;

yaString::yaString()
{

}

const char* yaString::systemStringToChar(System::String^ systemStr)
{
	using namespace System;
	using namespace System::Runtime::InteropServices;

	// �����R�[�h�́A���ɍ��킹��(���ʂ�UTF-8)
	int len = System::Text::Encoding::GetEncoding("UTF-8")->GetByteCount(systemStr);
	if (len > 0){
		char* rtnSts = new char[len + 1];
		memset(rtnSts, 0x00, sizeof(char)*len + 1);
		const char* buf = static_cast<const char*>((Marshal::StringToHGlobalAnsi(systemStr)).ToPointer());
		// �擾������������R�s�[
		strncpy_s(rtnSts, len + 1, buf, _TRUNCATE);
		// �������J��
		Marshal::FreeHGlobal(IntPtr((void*)buf));
		return rtnSts;
	}
	return NULL;
}

System::String^  yaString::charToSystemString(char *charStr){
	System::IntPtr ptr(charStr);
	System::String^ systemStr;
	systemStr = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(ptr);

	return systemStr;
}

int yaString::systemStringToInt(System::String^ systemStr)
{
	using namespace System;
	using namespace System::Runtime::InteropServices;
	const char* chars = systemStringToChar(systemStr);
	// NULL��������0��Ԃ�
	int rtnSts = 0;
	if (chars != NULL){
		rtnSts = atoi(chars);
	}
	delete chars;
	return rtnSts;
}

double yaString::systemStringToDouble(System::String^ systemStr)
{
	using namespace System;
	using namespace System::Runtime::InteropServices;
	const char* chars = systemStringToChar(systemStr);
	// NULL��������0��Ԃ�
	double rtnSts = 0;
	if (chars != NULL){
		rtnSts = atof(chars);
	}
	delete chars;
	return rtnSts;
}