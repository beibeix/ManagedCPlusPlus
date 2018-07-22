#pragma once

using namespace System;

namespace UmanagedCPPException {
	public ref class ExceptionWrapper : public ApplicationException
	{
	public:
		ExceptionWrapper(String^ err_msg, int err_code);
		property int err_code {
			int get() { return m_err_code; }
		}
	private:
		int m_err_code;
	};
}
