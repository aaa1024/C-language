#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
#define PI 3.1415927

class Complex {
private:
     double x;
     double y;
public:
	Complex(double _x = 0, double _y = 0):x(_x), y(_y){
		
	}
	float getR(){
		double ans = sqrt(x * x + y * y);
		return ans;
	}
	float getA(){
		double r = getR();
		if (r == 0) return 0;
		double ans;
		ans = acos(x / r);
		if (y < 0){
			ans = 2 * PI - ans;
		}
		return ans;
	}
	Complex operator+(const Complex & b){
		Complex t;
		t.x = this->x + b.x;
		t.y = this->y + b.y;
		return t;
	}
	Complex operator=(const Complex & b){
		this->x = b.x;
		this->y = b.y;
		return *this;
	}
	friend ostream& operator << (ostream& out, const Complex& c);
};

ostream& operator << (ostream& out, const Complex& c){
    return out << c.x << " + " << c.y << " i\n";
}

int main() {
     int n;
     scanf("%d", &n);
     while(n--){
         double a, b;
         scanf("%lf %lf", &a, &b);
         Complex c1(a,b);
         printf("친:%f, 류실:%f\n", c1.getR(), c1.getA());
         scanf("%lf %lf", &a, &b);
         Complex c2(a,b);
         printf("친:%f, 류실:%f\n", c2.getR(), c2.getA());
         Complex c3;
         c3 = c1 + c2;
         std::cout << c3;
         printf("친:%f, 류실:%f\n", c3.getR(), c3.getA()); 
     }
     return 0;
}
