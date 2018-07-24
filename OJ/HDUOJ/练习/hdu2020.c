#include <stdio.h>
#include <math.h>

int a[100][2];

void dfs(int left, int right);

int main()
{
	int n, i;

	while (scanf("%d", &n) != EOF && n != 0)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i][0]);
			a[i][1] = abs(a[i][0]);
		}

		dfs(0, n - 1);

		for (i = 0; i < n - 1; i++)
		{
			printf("%d ", a[i][0]);
		}
		printf("%d\n", a[n - 1][0]);
	}
}

void dfs(int left, int right)
{
	int i = left, j = right, temp = a[left][1], temp2 = a[left][0];
	int t;
	if (left > right)
		return ;

	while (i != j)
	{
		while (a[j][1] <= temp && i < j)
			j--;
		while (a[i][1] >= temp && i < j)
			i++;

		if (i != j)
		{
			t = a[i][1];
			a[i][1] = a[j][1];
			a[j][1] = t;

			t = a[i][0];
			a[i][0] = a[j][0];
			a[j][0] = t;
		}

	}

	a[left][1] = a[i][1];
	a[i][1] = temp;

	a[left][0] = a[i][0];
	a[i][0] = temp2;

	dfs(left, i -1);
	dfs(i + 1, right);
}