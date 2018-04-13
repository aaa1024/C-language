#include <cstdio>
#include <iostream>
using namespace std;
//declare a class
class Complex
{
//private available
private:
	double real;
	double imagine;
public:
	//The default constructor
	Complex()
	{

	}

	//The constuctor with availables
	Complex(double real_, double imagine_):real(real_), imagine(imagine_)
	{

	}
	//Copy constructor
	//"const" must be write, otherwise the constructor can't accept rvalue reference
	Complex(const Complex & other) 
	{
		this->real = other.real;
		this->imagine = other.imagine;
	}

	//overloading operator +
	Complex operator+(const Complex  other) const
	{
		//declare a temporary variable to save the value of "this + other"
		Complex t;
		t.real = this->real + other.real;
		t.imagine = this->imagine + other.imagine;
		return t;
	}
	//overloading operator -
	Complex operator-(const Complex & other) const
	{
		//declare a temporary variable to save the value of "this - other"
		Complex t;
		t.real = this->real - other.real;
		t.imagine = this->imagine - other.imagine;
		return t;
	}
	//overloading operator =
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
int main()
{
	Complex a(1, 3), b(3, 4), c(5, 6);
	
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;

	return 0;
}