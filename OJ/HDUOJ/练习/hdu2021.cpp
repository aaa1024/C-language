#include <cstdio>
#include <iostream>
#define N 1000
using namespace std;
int p[N + 1] = {100, 50, 10, 5, 2, 1};
int minn(int t)
{
	int s = 0;
	for (int i = 0; i < 6; i++)
	{
		s += t / p[i];
		t %= p[i];
	}
	return s;
}
int main()
{
	int n;
	int a[N + 1];
	
	while (cin >> n)
	{
		if (n <= 0) break;
		int num = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			num += minn(a[i]);
		}
		cout << num << endl;
	}

	return 0;
}