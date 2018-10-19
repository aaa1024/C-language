#include <stdio.h>
#define n 5
int a[10];

void dfs(int left, int right);

int main()
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	dfs(0, n - 1);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void dfs(int left, int right)
{
	if (left > right)
		return;
	int i = left;
	int j = right;
	int t,temp = a[left];

	while (i != j)
	{
		while (a[j] >= temp && i < j)
			j--;
		while (a[i] <= temp && i < j)
			i++;
		if (i != j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}

	a[left] = a[i];
	a[i] = temp;
	dfs(left, i - 1);
	dfs(i + 1, right);
 }