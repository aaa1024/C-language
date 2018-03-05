#include <stdio.h>
#include <math.h>

int isPrimeNumber(int n)
{
	int a = sqrt(n);
	int i;
	for (i = 2; i <= a; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int a, b, i, n;
	int flag;
	while (scanf("%d%d", &a, &b) != EOF && (a != 0 || b != 0))
	{
		flag = 1;
		for (i = a + 1; i < b; i++)
		{
			n = i * i + i + 41;
			if (!isPrimeNumber(n))
			{
				printf("Sorry\n");
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("OK\n");
		}
	}
	return 0;
}