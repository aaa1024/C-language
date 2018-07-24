#include <cstdio>
int main()
{
	int a, n, m, sum = 0, x;
	int i, flag;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		sum = 0;
		a = 0;
		flag = 1;
		for (i = 1; i <= n; i++)
		{
			a += 2;
			sum += a;
			if (i % m == 0)
			{
				if (flag)
				{
					printf("%d", sum / m);
					flag = 0;
				}
				else
				{
					printf(" %d", sum / m);
				}
				sum = 0;
			}
			else if (i == n && i % m != 0)
			{
				if (flag)
				{
					printf("%d", sum / (n % m));
					flag = 0;
				}
				else
				{
					printf(" %d", sum / (n % m));
				}
			}

		}
		printf("\n");
	}

	return 0;
}