#include <cstdio>
#include <cmath>
#include <cstring>
int max(int a, int b)
{
	return a > b ? a:b;
}
int main()
{
	
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n + 1], b[m + 1];
	int ans[n + m + 1];

	memset(ans, 0, sizeof(int));
	
	for (int i = 0; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i <= m; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i <= n + m; i++)
	{
		ans[i] = 0;
		for (int j = 0; j <= i; j++)
		{
			if (j <= n && (i - j) <= m)
			{
				ans[i] += a[j] * b[i - j];
			}
		}
	}
	int flag = 0;
	for (int i = 0; i <= n + m; i++)
	{
		if (flag == 0)
		{
			printf("%d", ans[i]);
			flag = 1;
		}
		else
			printf(" %d", ans[i]);
	}
	printf("\n");

	return 0;
}