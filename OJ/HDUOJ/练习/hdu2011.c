#include <stdio.h>

int main()
{
	double n, sum;
	int i, a, m, k;
	while (scanf("%d", &m) != EOF)
	{
		for (k = 0; k < m; k++)
		{
			scanf("%lf", &n);
			a = 1;
			sum = 0;
			for (i = 1; i <= n; i++)
			{
				sum += a * 1.0 / i;
				a *= -1;
			}
			printf("%.2lf\n", sum);
		}
	}
	return 0;
}