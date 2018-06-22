#include <iostream>
using namespace std;
class Figure{
public:
	virtual double getArea() const = 0;
};

class Rectangle:public Figure{
protected:
	double w;
	double l;
public:
	Rectangle(double _w = 0, double _l = 0):w(_w), l(_l){
		
	}
	double getArea() const{
		return w * l;
	}
};
class Square:public Figure{
protected:
	double a;
public:
	Square(double _a = 0):a(_a){
		
	}
	double getArea()const{
		return a * a; 
	}
};
class Circle:public Figure{
protected:
	double r;
public:
	Circle(double _r = 0):r(_r){

	}
	double getArea() const{
		return r * r * 3.1415926;
	}
};
bool compare(Figure &a, Figure &b){
//	cout << a.getArea() << " " << b.getArea() << endl;
	return a.getArea() < b.getArea();
}
int main(){
	Rectangle ra(5, 10);
	Square sa(3);
	Circle ca(100);
	Figure a;
	cout << compare(sa, ra) << endl;
	cout << compare(sa, ca) << endl;
	cout << compare(ca, ra) << endl;
} 
