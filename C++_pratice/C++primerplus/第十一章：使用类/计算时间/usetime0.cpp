#include <iostream>
#include "mytime0.h"
using namespace std;
int main()
{
	Time a(13,5);
	Time b(12, 30);
	a.print();
	Time c = a + b;
	c.print();
	cout << c << a << "h";
	a.print();
	b.print();
	return 0;
}