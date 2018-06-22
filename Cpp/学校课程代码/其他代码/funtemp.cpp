#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;
}

int main()
{
	int a, b;
	double c, d;

	cin >>a >>b;
	cin >>c >>d;
	Swap(a, b);
	Swap(c, d);
	cout << a << " " << b <<endl;
	cout << c << " " << d <<endl;
}