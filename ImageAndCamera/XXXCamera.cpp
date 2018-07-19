#include "stdafx.h"
#include "XXXCamera.h"

ImageAndCamera::XXXCameraWrapper::XXXCameraWrapper()
{
	
}

void ImageAndCamera::XXXCameraWrapper::XXXGetImage(XXXImageWrapper ^ xiw)
{
	CXImage* p  = xiw->XXXXGetImage();
	p->Set(15);
	int k = p->Get();

}
