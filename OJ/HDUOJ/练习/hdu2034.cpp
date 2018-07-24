#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int find(int *a, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
            return 1;
    }
    return 0;
}
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
        if (n == 0 && m == 0)
            break;

		int a[100], b[100], ans[100];
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &b[j]);
		}
		sort(a, a + n);
		sort(b, b + m);

		for (int i = 0; i < n; i++)
		{
            if (!find(b, a[i], m))
            {
                ans[k++] = a[i]; 
            }
		}

        if (k)
        {
            sort(ans, ans + k - 1);
        }
        else
        {
            printf("NULL\n");
            continue;
        }
		for(int  i = 0; i < k; i++)
		{
            printf("%d ", ans[i]);
		}
        printf("\n");
	}

	return 0;
}
