#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int a[31][31];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				a[i][1] = 1;
				a[i][i] = 1;
				if (i >= 3 && j >= 2 && j < i)
				{
					a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
				}
			}
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < i; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("%d\n", a[i][i]);
		}
		printf("\n");
	}
}
