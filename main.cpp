#include "Complex.h"
#include <iostream>
using namespace std;

int main() 
{
	Complex x;
	Complex y(7, 6);
	Complex z(y);
	cout << x << " " << y << " " << z << " Constructors" << endl;
	z.set(5, 3);
	cout << z << " set&&get " << endl;
	Complex d;
	d = x + y;
	cout << d << " operator + " << endl;
	d = d - y;
	cout << d << " operator - " << endl;
	d = z * y;
	cout << d << " operator * " << endl;
	d = z / y;
	cout << " operator / " << d << endl;
	d = y;
	cout << d << " operator = " << endl;
	cout << (d == y) << " operator == " << endl;
	cout << (x == y) << " operator == " << endl;

	Complex r;
	cin >> r;
	cout << r << " operator cin>> " << endl;

	return 0;
}
