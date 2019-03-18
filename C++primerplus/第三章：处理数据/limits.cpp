#include <iostream>
#include <cmath>
#include <climits>
int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_shot = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "char:" << sizeof(char) << endl
	<< "short:" << sizeof(short) << endl
	<< "int:" << sizeof(int) << endl
	<< "float:" << sizeof(float) << endl
	<< "double:" << sizeof(double) << endl
	<< "long:" << sizeof(long) << endl
	<< "long long:" << sizeof(long long) << endl;

	cout << "Maximum values:" << endl;
	cout << "int:" << n_int << endl;
	cout << "short:" << n_shot << endl;
	cout << "long:" << n_long << endl;
	cout << "long long:" << n_llong << endl;
	return 0;
}