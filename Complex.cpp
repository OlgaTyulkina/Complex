#include "Complex.h"


Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double x, double y)
{
	re = x;
	im = y;
}

Complex::Complex(Complex& A)
{
	re = A.re;
	im = A.im;
}

void Complex::set(double x, double y)
{
	re = x;
	im = y;
}

Complex Complex::get()
{
	Complex z(re, im);
	return z;
}
//перегрузка операций
Complex operator + (Complex& x, Complex& y)
{
	return Complex(x.re + y.re, x.im + y.im);
}

Complex operator - (Complex& x, Complex& y)
{
	Complex z;
	z.re = x.re - y.re;
	z.im = x.im - y.im;
	return z;
}

Complex operator * (Complex& x, Complex& y)
{
	Complex z;
	z.re = x.re * y.re - x.im * y.im;
	z.im = x.re * y.im + y.re * x.im;
	return z;
}

Complex operator / (Complex& x, Complex& y)
{
	Complex z;
	z.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	z.im = (y.re * x.im - x.re * y.im) / (y.re * y.re + y.im * y.im);
	return z;
}

Complex& Complex:: operator =(const Complex& x)
{
	re = x.re;
	im = x.im;
	return *this;
}

bool operator == (Complex& x, Complex& y)
{
	return ((x.re == y.re) && (x.im == y.im));
}

ostream& operator << (ostream& out, Complex& y)
{
	out << y.re << "+" << y.im << "i";
	return out;
}

istream& operator >> (istream& in, Complex& y)
{
	in >> y.re;
	in >> y.im;
	return in;
}
