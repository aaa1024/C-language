#include <cstdio>
int add(int a, int b);
double add(double a, double b);

int main()
{
	int a = 100, b = 200;
	double c = 1.3, d = 3.4;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%lf + %lf = %lf\n", c, d, add(c, d));
}

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

