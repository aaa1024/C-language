#include <cstdio>
#include <iostream>
using namespace std;

class Complex
{

private:
	double real;
	double imagine;
public:

	Complex()
	{

	}


	Complex(double real_, double imagine_):real(real_), imagine(imagine_)
	{

	}
	
	Complex(const Complex & other) 
	{
		this->real = other.real;
		this->imagine = other.imagine;
	}


	Complex operator+(const Complex  other) const
	{

		Complex t;
		t.real = this->real + other.real;
		t.imagine = this->imagine + other.imagine;
		return t;
	}
	Complex operator-(const Complex & other) const
	{

		Complex t;
		t.real = this->real - other.real;
		t.imagine = this->imagine - other.imagine;
		return t;
	}

	Complex & operator=(const Complex & other)
	{
		this->real = other.real;
		this->imagine = other.imagine;
		return *this;
	}
	friend Complex operator*(const Complex &a, const Complex & b);
	friend std::ostream & operator<<(std::ostream &o, Complex a);

};

Complex operator*(const Complex &a, const Complex & b)
{
	Complex t;
	t.real = a.real * b.real - a.imagine * b.imagine;
	t.imagine = a.real * b.imagine + a.imagine * b.real;
	return t;
}

std::ostream & operator<<(std::ostream &o,const Complex a) 
{
	o<< a.real << " + " << a.imagine << " i";
	return o;
}
int main(){

    Complex c1(4.234234, -27.6), c2(3.5, -4.7);

    Complex c3, c4;

    c3 = c2 + c1;

    c4 = c3 * c1;

    c2 = c4 - c1;

    cout  << c1  << c2  << c3  << c4  << c1 - c4 ;

    return 0;

}
