#include <iostream>
#include <cstdio>
using namespace std;
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
} 
int main()
{
	int i = 10;
	int j = 20;
	Swap(i, j);
	cout << i << " " << j << endl;

	double a = 30;
	double b = 40;
	Swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}