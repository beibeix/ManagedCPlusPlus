#pragma once
#include <exception>
#include <iostream>
class CUnmanagedException : public std::exception
{
public:
	CUnmanagedException(char const* const _Message);
	~CUnmanagedException();
};

//// �Զ����쳣��
//class MyExcepction
//{
//public:
//
//	// ���캯��,����Ϊ�������
//	MyExcepction(int errorId)
//	{
//		// ������캯����������Ϣ
//		std::cout << "MyExcepction is called" << std::endl;
//		m_errorId = errorId;
//	}
//
//	// �������캯��
//	MyExcepction(MyExcepction& myExp)
//	{
//		// ����������캯����������Ϣ
//		std::cout << "copy construct is called" << std::endl;
//		this->m_errorId = myExp.m_errorId;
//	}
//
//	~MyExcepction()
//	{
//		// �������������������Ϣ
//		std::cout << "~MyExcepction is called" << std::endl;
//	}
//
//	// ��ȡ������
//	int getErrorId()
//	{
//		return m_errorId;
//	}
//
//private:
//	// ������
//	int m_errorId;
//};