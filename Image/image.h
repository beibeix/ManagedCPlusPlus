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

#endif // IMAGE_H_H