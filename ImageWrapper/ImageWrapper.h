#pragma once
#include "image.h"
using namespace System;

namespace NSImageWrapper {
	public ref class ImageWrapper
	{
		// TODO: 在此处添加此类的方法。
	public:
		ImageWrapper();
		~ImageWrapper();
		CXImage* GetImage();
		void* XGetImage();



	private:
	private:
		CXImage * m_image;
	};
}
