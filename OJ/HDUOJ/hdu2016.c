#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int i;
	int n, a[105], m, flag, min, t;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		flag = 1;
		min = 100000000;
		m = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if (min > a[i])
			{
				min = a[i];
				m = i;
			}
		}
		t = a[0];
		a[0] = a[m];
		a[m] = t;
		for (i = 0; i < n; i++)
		{
			if (flag)
			{
				printf("%d", a[i]);
				flag = 0;
			}
			else
			{
				printf(" %d", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}