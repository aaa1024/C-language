#include <stdio.h>
#define n 5

void QuickSort(int left, int right);
int a[100];

int main()
{
	int i;
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	QuickSort(1, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
}

void QuickSort(int left, int right)
{
	int i = left, j = right;
	int mid = a[left];
	int t;

	if (left > right)
		return;

	while (i != j)
	{
		while (a[j] >= mid && i < j)
			j--;

		while (a[i] <= mid && i < j)
			i++;
		
		if (i < j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}	
	}

	a[left] = a[i];
	a[i] = mid;
	QuickSort(left, i - 1);
	QuickSort(i + 1, right);
}	