#include "unmanaged_exception_wrapper.h"
#include <exception>
#include "unmanaged_exception.h"
#include "exception_wrapper.h"

namespace UmanagedCPPException {
	void ThrowUnmanagedExceptionWrapper::CallUnManagedException(UmanagedExceptionType type)
	{
		try
		{
			ThrowUmanagedException((int)type);
		}
		catch (int e)
		{
			throw gcnew ExceptionWrapper(e.ToString(), e);
		}
		catch (CUnmanagedException & e) 
		{
			throw gcnew ExceptionWrapper(gcnew String(e.what()), 1);
		}
		catch (const std::exception& e)
		{
			//e.what();
			throw gcnew ExceptionWrapper(gcnew String(e.what()), 0);
		}
	}
}