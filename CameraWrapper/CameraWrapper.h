#pragma once

using namespace System;
using namespace NSImageWrapper;

namespace NSCameraWrapper {
	public ref class CameraWrapper
	{
		// TODO: 在此处添加此类的方法。
	public:
		CameraWrapper();
		CameraWrapper(int i);
		~CameraWrapper();
		void GetImage(ImageWrapper^ iw);

	};
}
