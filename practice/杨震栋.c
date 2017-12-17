#include <stdio.h>

int main()
{
	int n;
	int i, j;
	float sum = 0;

	printf("Please input n: ");
	scanf("%d", &n);
	if (n != 0)
		printf("Output:\n");
	while (n != 0)
	{
		sum = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j < n - i; j++)
				if ( j == 0)
					sum = sum + 1;
				else
				   	sum = sum + 2.0 / (float)(j + 1);
		printf("the total is: %.2f\n", sum);
		printf("Please input n: ");
		scanf("%d", &n);
	}

	return 0;
}
