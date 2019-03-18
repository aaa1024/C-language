#include <stdio.h>
#include <iostream>
using namespace std;
class to_double
{
private:
	double a;
public:
	to_double(){}
	to_double(double _a){
		a = _a;
	}
	~to_double(){}
	operator double()const{
		return a;
	}
/*	operator int()const{
		return int(a + 0.5);
	}
*/
};
int main(int argc, char * argv[]) {
 	to_double a = 100.2;
 	double b = a;
 	cout << b << endl;

 	int c = a;
 	cout << c << endl;

 	cout << a << endl;
    return 0;
}