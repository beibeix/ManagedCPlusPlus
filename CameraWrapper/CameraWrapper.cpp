#include "stdafx.h"

#include "CameraWrapper.h"
#include "image.h"
//class CXImage;

NSCameraWrapper::CameraWrapper::CameraWrapper()
{

}

NSCameraWrapper::CameraWrapper::CameraWrapper(int i)
{
	
}

NSCameraWrapper::CameraWrapper::~CameraWrapper()
{
	
}

void NSCameraWrapper::CameraWrapper::GetImage(ImageWrapper ^ iw)
{
	 CXImage* pImg = iw->GetImage();
	 pImg->Set(5);
	 int k = pImg->Get();
	void* p = iw->XGetImage();

}
