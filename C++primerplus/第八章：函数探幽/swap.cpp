#include <cstdio>
#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int n = 2, m = 10;
	Swap(n, m);
	cout << n << " "<< m;
	return 0;
}