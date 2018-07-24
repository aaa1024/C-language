#include <cstdio>
using namespace std;
int main()
{
	int t = 'A' - 10;
	int n, r;

	while (scanf("%d%d", &n, &r) != EOF)
	{
		int i = 0, flag = 0;
		int a[1000] = {0};

		if (n < 0)
		{
			n *= -1;
			flag = 1;
		}
		else if (n == 0)
		{
			printf("0\n");
			return 0;
		}
		while (n >= 1)
		{
			a[i++] = n % r;
		//	printf("%d ", n % r);
			n = n / r;
		}
		if(flag)
		{
			printf("-");
		}
		while (i--)
		{
			if (a[i] <10)
				printf("%d", a[i]);
			else
			{
				printf("%c", a[i] + t);
			}
		}
		printf("\n");
	}
	return 0;
}