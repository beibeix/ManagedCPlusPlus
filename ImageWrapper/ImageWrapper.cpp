#include "stdafx.h"

#include "ImageWrapper.h"

#include "image.h"

#pragma make_public(CXImage)  

NSImageWrapper::ImageWrapper::ImageWrapper()
{
	m_image = new CXImage();
}

NSImageWrapper::ImageWrapper::~ImageWrapper()
{
	if (nullptr != m_image)
	{
		delete m_image;
		m_image = nullptr;
	}
}

CXImage * NSImageWrapper::ImageWrapper::GetImage()
{
	return m_image;
}

void * NSImageWrapper::ImageWrapper::XGetImage()
{
	return m_image;
}
