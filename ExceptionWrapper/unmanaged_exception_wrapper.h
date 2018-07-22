#pragma once

void ThrowUmanagedException(int type);
namespace UmanagedCPPException {
	public enum class UmanagedExceptionType {
		THROWERRORCODE = 2,
		THROWCUSTOMEXCEPTION,
		THROWSTDEXCEPTION
	};


	public ref class ThrowUnmanagedExceptionWrapper
	{
	public:
		static void CallUnManagedException(UmanagedExceptionType type);
	};
}


