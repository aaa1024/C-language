#include <stdio.h>
#define n 6
void dfs(int step);

int a[100];
int book[100];

int main()
{
	dfs(1);
}

void dfs(int step)
{
	int i;
	if (step == n + 1)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d ", a[i]);
		}

		printf("\n");
		return;
	}

	for (i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			book[i] = 1;
			a[step] = i;
			dfs(step + 1);
			book[i] = 0;
		}
	}
}
