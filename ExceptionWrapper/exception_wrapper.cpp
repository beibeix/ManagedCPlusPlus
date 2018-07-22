#include "exception_wrapper.h"

namespace UmanagedCPPException {
	ExceptionWrapper::ExceptionWrapper(String ^ err_msg, int err_code)
		: ApplicationException(err_msg)
	{
		m_err_code = err_code;
	}
}
