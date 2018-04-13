#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF && (a || b))
	{
		int flag = 1;
		for (int i = 0; i <= 99; i++)
		{
			if (((a * 100) + i) % b == 0)
			{
				if (flag)
				{
					printf("%02d", i);
					flag = 0;
				}
				else
				{
					printf(" %02d", i);
				}
			}
		}
		printf("\n");
	}

	return 0;
}