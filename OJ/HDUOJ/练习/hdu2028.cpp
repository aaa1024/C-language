#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	long long int n;
	while (cin >> n)
	{
		int a[10005];
		long long int fac = 1, max = -1000;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			fac *= a[i];
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		for (int i = max; i <= fac; i++)
		{
			cnt = 0;
			for (int j = 0; j < n; j++)
			{
				if (i % a[j] == 0)
				{
					cnt++;
				}
			}
			if (cnt == n)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}