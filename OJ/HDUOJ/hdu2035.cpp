#include <iostream>
#include <cmath>
using namespace std;
int Pow(int a, int b)
{
	int fac = 1;
	for (int i = 0; i < b; i++)
	{
		
		fac *= a;
		fac %= 1000;
	}
	return fac;
}
int main(int argc, char const *argv[])
{
	int a, b;
	while (scanf("%d%d", &a, &b) && (a || b))
	{
		a %= 1000;
		b %= 1000;
		int ans = Pow(a, b);
		printf("%d\n", ans);
	}
	return 0;
}