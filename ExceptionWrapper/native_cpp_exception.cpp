#include <exception>
#include "unmanaged_exception.h"

using namespace std;


void ThrowUmanagedException(int type)
{
	if (2 == type)
	{
		throw 123;
	}
	else if (3 == type)//�Զ���C++�쳣��
	{
		throw  CUnmanagedException("user defined exception.");
	} 
	else if (4 == type) 
	{
		throw std::exception("Unmanaged std exception.");
	}

}