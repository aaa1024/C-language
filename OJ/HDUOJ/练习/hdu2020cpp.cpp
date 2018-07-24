#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define N 100
int a[N + 1];
bool cmp(int a, int b)
{
	return abs(a) > abs(b);
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 0) break;
		else
		{
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			sort(a, a + n, cmp);
			cout << a[0];
			for (int i = 1; i < n; i++)
			{
				cout << " " <<a[i];
			}
			cout << endl;
		}
	}

	return 0;
}