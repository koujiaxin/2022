// Complex.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Complex.h"


inline complex& __doapl(complex* ths, const complex& r)
{
	ths->re += r.re;
	ths->im += r.im;

	return *ths;
}

inline complex& complex::operator+= (const complex& r)
{
	return __doapl(this, r);
}

inline complex operator+ (const complex& x, const complex& y)
{
	return complex((x.real() + y.real()), (x.imag() + y.imag()));
}

inline complex operator+ (const complex& x, const double y)
{
	return complex((x.real() + y), x.imag());
}

inline complex operator+ (const double x, const complex& y)
{
	return complex((x + y.real()), y.imag());
}
