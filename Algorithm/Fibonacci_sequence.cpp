#include <cstdio>
int main()
{
	int a = 1, b = 1;
	int t;
	for (int i = 1; i <= 10; i++)
	{
		t = a;
		a = b;
		b = t + b;
		printf("%d ", b);
	}
}