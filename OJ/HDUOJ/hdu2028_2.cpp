#include <cstdio>
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int ans = 1, temp, m;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &m);
			temp = gcd(ans, m);
			ans = ans / temp * m; 
		}

		printf("%d\n", ans);
	}

	return 0;
}