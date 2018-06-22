#include <iostream>
#include <cstdio>
using namespace std;
class Complex{
private:
	double r;
	double i;
public:
	Complex(){
		r = 0;
		i = 0;
	}
	Complex(double _r, double _i):r(_r), i(_i){
		
	}
	Complex(const Complex & other){
		this->r = other.r;
		this->i = other.i;
	}
	Complex & operator=(const Complex & other)
	{
		this->r = other.r;
		this->i = other.i;
		return *this;
	}
	Complex operator-(const Complex & b);
	Complex & operator-=(const Complex & b){
		this->i = this->i - b.i;
		this->r = this->r - b.r;
		return *this;
	}
	friend std::ostream & operator <<(std::ostream & o, Complex & t);
	friend Complex operator*(const Complex & a, const Complex & b);
};
std::ostream & operator <<(std::ostream & o, Complex & t){
	o << t.r << " + " << t.i << "i" << endl;
	return o;
}

Complex Complex::operator-(const Complex & b){
		Complex t;
		t.i = this->i - b.i;
		t.r = this->r - b.r;
		return t;
}
Complex operator*(const Complex & a, const Complex & b){
		Complex t;
		t.r = a.r * b.r - a.i * b.i;
		t.i = a.r * b.i + a.i * b.r;
		return t;
}
int main () {
    Complex c2(2., 3.), c3 = c2-Complex(1., 2.) ,c1(c2);
    Complex c4;
    c4-=c2*c3-c2;
    std::cout << c1 << c2 << c3 << c4;
    return 1;
}
