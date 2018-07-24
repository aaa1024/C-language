#include <stdio.h>
double max(double *a, int n)
{
	double max = a[0];
	int i;
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}
double min(double *a, int n)
{
	double min = a[0];
	int i;
	for (i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}

int main()
{
	int n, i;
	double a[105], sum, result;
	while (scanf("%d", &n) != EOF)
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%lf", &a[i]);
			sum += a[i];
		}
		result = (sum - max(a, n) - min(a, n)) / (n - 2);
		printf("%.2lf\n", result);
	}
	return 0;
}