#include <stdio.h>
#include <iostream>
using namespace std;
class Stonewt
{
private:
	double lbs;
public:
	Stonewt(){}
	Stonewt(double _lbs){
		lbs = _lbs;
	}
	~Stonewt(){}
	void print(){
		printf("%lf\n", lbs);
	}
};
class ex
{
private:
	double d;
public:
	ex(){}
	explicit ex(double _d){
		d = _d;
	}
	~ex(){}
	void print(){
		printf("%lf\n", d);
	}
	
};
int main(int argc, char * argv[]) {
	Stonewt a = 8.9;
	a.print();

//	ex b = 92.2; //not valid if ex(double) is declared as explicit
	ex b = ex(92.2); //valid, an explicit conversion
	b.print();
    return 0;
}