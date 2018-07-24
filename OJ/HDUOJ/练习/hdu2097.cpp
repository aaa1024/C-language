#include <cstdio>
int shi(const int a, const int c)
{
	int s = 0;
	int b = a;
	while(b >= 1)
	{
		
		s += b % c;
		b /= c;
	}
	return s;
}
int main()
{
	int a;
	while (scanf("%d", &a) != EOF && a)
	{
		if (shi(a, 10) == shi(a, 16) && shi(a, 16) == shi(a, 12))
		{
			printf("%d is a Sky Number.\n", a);
		}
		else
		{
			printf("%d is not a Sky Number.\n", a);
		}
	}
	return 0;
}