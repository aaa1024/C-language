#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
int main()
{
	int a, b;
	a = 3;
	b = 5;
	Swap(a, b);
	cout << a << " " << b << endl;

	return 0;
}