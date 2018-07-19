#ifndef GLOBAL_H_H
#define GLOBAL_H_H

#define CPLUSPLUS_EXPORT

#ifdef CPLUSPLUS_EXPORT
#define CPLUSPLUSAPI  __declspec(dllexport)
#else
#define CPLUSPLUSAPI  __declspec(dllimport)
#endif//CPLUSPLUS_EXPORT


#pragma once
#endif // !GLOBAL_H_H