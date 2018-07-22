#ifndef IMAGE_H_H
#define IMAGE_H_H

#pragma once

#include "global.h"
#include "image.h"
class CPLUSPLUSAPI CXImage
{
public:
	CXImage();
	~CXImage();
	void Set(int j) { i = j; }
	int Get() { return i; }

private:
	int i;
};



//using namespace System;
//
//namespace Wrapper {
//	public ref class CXImageWrapper
//	{
//	public:
//		CXImageWrapper();
//		~CXImageWrapper();
//		CXImage* GetImage();
//
//		void Set(int val);
//		int Get();
//
//	private:
//		CXImage * m_image;
//	};

//}

#endif // IMAGE_H_H