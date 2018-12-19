#include <stdio.h>
#include <iostream>
using namespace std;
void QuickSort(int *a, int left, int right);

int main()
{
	//freopen("in.txt", "r", stdin);
	int a[100];
	int i, n;
	cin >> n;

	//这里的数组下表从1开始，直到n
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	//直接调函数
	QuickSort(a, 1, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
}

void QuickSort(int *a, int left, int right)
{
	int i = left, j = right;
	int mid = a[left];
	int t;
	// 当右大于左的时候返回
	// 相等不返回
	if (left > right)
		return;

	//相等时跳出
	while (i != j)
	{
		// 先动右边的
		while (a[j] >= mid && i < j)
			j--;
		// 再动左边的
		while (a[i] <= mid && i < j)
			i++;
		
		// 交换
		if (i < j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}	
	}
	// 把左边的跟中间值替换。
	a[left] = a[i];
	a[i] = mid;
	QuickSort(a, left, i - 1);
	QuickSort(a, i + 1, right);
}	