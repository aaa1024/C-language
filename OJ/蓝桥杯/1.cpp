#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
	long  long int n, m;
	while (scanf("%ld%ld", &n, &m) != EOF)
	{
		int a[n+1][m+1], count = 0;
		
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				a[i][j] = 1;				
			}
		}		
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				for (int x = 1; x * i <= n; x++)
				{
					for (int y = 1; y * j <= m ;y++)
					{
						a[x * i][y * j] *= -1;
					}
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if(a[i][j] == -1)
				{
					count++;
				}
			}
		}

		printf("%d\n", count);
	}
	
	return 0;
}