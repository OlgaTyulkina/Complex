#include "Complex.h"

Complex::Complex()
{
	Re = 0;
	Im = 0;
}

Complex::Complex(double x, double y)
{
	Re = x;
	Im = y;
}

Complex::Complex(Complex& A)
{
	Re = A.Re;
	Im = A.Im;
}

void Complex::set(double x, double y)
{
	Re = x;
	Im = y;
}

Complex Complex::get()
{
	Complex z(Re, Im);
	return z;
}

Complex operator + (Complex &x, Complex &y)
{

	return Complex(x.Re + y.Re, x.Im + y.Im);
}

Complex operator * (Complex &x, Complex &y)
{
	Complex z;
	z.Re = x.Re*y.Re - x.Im*y.Im;
	z.Im = x.Re*y.Im + y.Re*x.Im;
	return z;
}

Complex operator - (Complex &x, Complex &y)
{
	Complex z;
	z.Re = x.Re - y.Re;
	z.Im = x.Im - y.Im;
	return z;
}

Complex operator / (Complex &x, Complex &y)
{
	Complex z;
	z.Re = (x.Re*y.Re + x.Im*y.Im) / (y.Re*y.Re + y.Im*y.Im);
	z.Im = (y.Re*x.Im - x.Re*y.Im) / (y.Re*y.Re + y.Im*y.Im);
	return z;
}

Complex &Complex:: operator =(const Complex &x)
{
	Re = x.Re;
	Im = x.Im;
	return *this;
}

bool operator == (Complex &x, Complex &y)
{
	return ((x.Re == y.Re) && (x.Im == y.Im));
}

ostream& operator << (ostream &out, Complex &y)
{
	out << y.Re << "+" << y.Im << "i";
	return out;
}

istream& operator >> (istream &in, Complex &y)
{
	in >> y.Re;
	in >> y.Im;
	return in;
}
