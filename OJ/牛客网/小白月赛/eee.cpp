#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	const double v = 1000000;
	double e = pow (1 + 1 / v, v);
	std::cout << e << std::endl;
	std::cout << M_E << endl;
	printf ("%lf\n", 6 * 483 * M_E);
	return 0;
}