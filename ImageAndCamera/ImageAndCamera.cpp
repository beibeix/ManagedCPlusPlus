#include "stdafx.h"

#include "ImageAndCamera.h"

ImageAndCamera::XXXImageWrapper::XXXImageWrapper()
{
	m_image = new CXImage();
}

ImageAndCamera::XXXImageWrapper::~XXXImageWrapper()
{
	
}

CXImage * ImageAndCamera::XXXImageWrapper::XXXXGetImage()
{
	return m_image;
}
