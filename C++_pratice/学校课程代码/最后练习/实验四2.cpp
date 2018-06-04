#include <iostream>
#include <string>
using namespace std;
class Figure{
public:
	constexpr const static double pi = 3.1415927;
	virtual double getArea()const{};
	virtual void print()const{};
};

class Rectangle:public Figure{
private:
	double w;
	double l;
	double area;
public:
	Rectangle(double _w = 0, double _l = 0):w(_w), l(_l){
		area = _w * _l;
	}
	double getArea()const{
		return area;
	}
	void print()const{
		cout << "Rectangle:" << area;
	}
};

class Circle:public Figure{
private:
	double r;
	double area;
public:
	Circle(double _r = 0):r(_r){
		area = r * r * Figure::pi;
	}
	double getArea()const{
		return area;
	}
	void print()const{
		cout << "Circle:" << area;
	}
};

class Square:public Figure{
private:
	double a;
	double area;
public:
	Square(double _a = 0):a(_a){
		area = a * a;
	}
	double getArea()const{
		return area;
	}
	void print()const{
		cout << "Square:" << area;	
	}
};

bool compare(const Figure *a, const Figure *b){
	return a->getArea() < b->getArea();
}

int main(){
    Rectangle rect(3. , 5.);
    Circle circle(8. / Figure::pi);
    Square square(4.);
    
    Figure *pList [] = {&rect, &circle, &square};
    Figure *min = pList[0];
    for(int i = 1; i < 3; ++i){
        if(compare(pList[i], min)){
            pList[i]->print();
            printf(" < ");
            min->print();
            printf("\n");
            min = pList[i];
        }
        else{
            min->print();
            printf(" < ");
            pList[i]->print();
            printf("\n");
        }
    }
    printf("Minimum:\n");
    min->print();
    printf("\n");
    return 0;
}
