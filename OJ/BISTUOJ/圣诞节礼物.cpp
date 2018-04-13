#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF && (n || m))
	{
		int a[100005], b[100005];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &b[i]);
		}

		int flag = 0, flag2 = 0;
		for (int i = 0; i < m; i++)
		{
			flag = 1;
			for (int j = 0; j < n; j++)
			{
				if(b[i] == a[j])
				{
					flag = 0;
					break;
				}
			}

			if (flag)
			{
				printf("NO\n");
				flag2 = 1;
				break;
			}
		}
		if(!flag)
			printf("YES\n");
	}

	return 0;
}