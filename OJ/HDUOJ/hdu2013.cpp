#include <iostream>
#include <cstdio>

int main()
{
	int day, sum;
	while (scanf("%d", &day) != EOF)
	{
		sum = 1;
		for (int i = 1; i < day; i++)
		{
			sum = (sum + 1) * 2; 
		}
		printf("%d\n", sum);
	}

	return 0;
}