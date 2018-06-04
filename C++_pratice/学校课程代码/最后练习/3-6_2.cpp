
#include<iostream>
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(double a)
	{
	    real=a;
	}
	
	Complex(double a, double b)
	{
		real = a;
		imag = b;
	}
	Complex operator +(Complex &c)
	{
		return Complex(real + c.real, imag + c.imag);
	}

	friend Complex operator *(Complex &c1,Complex &c2);
	
	friend ostream& operator <<(ostream& out, Complex &c)
	{
		out << c.real << "+" <<c.imag << "i" << endl;
		 return out;
	}
	Complex operator-=(Complex c);
	Complex operator-(Complex &c);
};
Complex::Complex operator-(Complex &c)
{
	return Complex(real-c.real, imag - c.imag);
}
Complex::Complex operator*(Complex &c1,Complex &c2)
{
	return Complex(c1.real*c2.real - c1.imag * c2.imag, c1.real*c2.imag + c1.imag * c2.real);
}
Complex::Complex operator -=(Complex c)
{
	return Complex(real -= c.real, imag -= c.imag);
}
int main() {
	Complex c2(2., 3.), c3 = c2 - Complex(1., 2.), c1(c2);
	Complex c4;
	c4 -= c2 * c3 - c2;
	std::cout << c1 << c2 << c3 << c4;

	return 0;
}

