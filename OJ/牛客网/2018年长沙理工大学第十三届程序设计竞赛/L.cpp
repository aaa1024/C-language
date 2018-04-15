#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int a, b, n, flag = 0;
		int r[1000];
		cin  >> a >> b >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> r[i];
		}

		sort(r, r + n);

		for (int i = n - 1; i >= 0; i--)
		{
			
			while (r[i] >= 2 && b)
			{
				r[i] -= 2;
				b--;
			}
			while (r[i] && a)
			{
				r[i]--;
				a--;
			}
			if ((!a && !b && i != 0)|| r[i])
			{
				flag = 1;
				cout << "No" << endl;
				break;
			}
		}
		if (!flag)
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}