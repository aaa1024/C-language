#include <cstdio>
#include <cstring>
int main()
{
	int n, i, count;
	char s[1000];
	scanf("%d", &n);

	while (n--)
	{
		scanf("%s", s);
		count = 0;

		for (i = 0; i < strlen(s); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}