#pragma once

using namespace System;
#include "image.h"

namespace ImageAndCamera {
	public ref class XXXImageWrapper
	{
		// TODO: 在此处添加此类的方法。
	public:
		XXXImageWrapper();
		~XXXImageWrapper();

		CXImage *XXXXGetImage();

	private:
		CXImage * m_image;

	};
}
