#include <cstdio>
bool judge(int a)
{
	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	while (scanf("%d", &a) != EOF && a)
	{
		int cnt = 0;
		for (int i = 2; i < a / 2; i++)
		{
			if (judge(i) && judge(a - i))
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}

	return 0;
}