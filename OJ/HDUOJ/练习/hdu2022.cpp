#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m, n;
	while(cin >> m && cin >> n)
	{
		int mi, mj;
		int a[m + 1][n + 1];
		for (int i = 1; i  <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		int max = abs(a[1][1]);
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (max < abs(a[i][j]))
				{
					max = abs(a[i][j]);
					mi = i;
					mj = j;
				}
			}
		}

		cout << mi << " " << mj << " " << a[mi][mj] << endl;
	}

	return 0;
}