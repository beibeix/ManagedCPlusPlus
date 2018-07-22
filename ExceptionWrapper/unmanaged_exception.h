#pragma once
#include <exception>
#include <iostream>
class CUnmanagedException : public std::exception
{
public:
	CUnmanagedException(char const* const _Message);
	~CUnmanagedException();
};

//// 自定义异常类
//class MyExcepction
//{
//public:
//
//	// 构造函数,参数为错误代码
//	MyExcepction(int errorId)
//	{
//		// 输出构造函数被调用信息
//		std::cout << "MyExcepction is called" << std::endl;
//		m_errorId = errorId;
//	}
//
//	// 拷贝构造函数
//	MyExcepction(MyExcepction& myExp)
//	{
//		// 输出拷贝构造函数被调用信息
//		std::cout << "copy construct is called" << std::endl;
//		this->m_errorId = myExp.m_errorId;
//	}
//
//	~MyExcepction()
//	{
//		// 输出析构函数被调用信息
//		std::cout << "~MyExcepction is called" << std::endl;
//	}
//
//	// 获取错误码
//	int getErrorId()
//	{
//		return m_errorId;
//	}
//
//private:
//	// 错误码
//	int m_errorId;
//};