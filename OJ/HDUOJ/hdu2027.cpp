#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	getchar();
	char ans[100] = "aeiou";
	char ans2[100] = "AEIOU";
	//getchar();
	while (T--)
	{
		char s[100];
		int cnt[100] = {0};

		fgets(s, 100, stdin);
		for (int i = 0; i < strlen(s) - 1; i++)
		{
		//	printf("%c\n", s[i]);
			for (int j = 0; j < 5; j++)
			{
			//	printf("%c ", ans[j]);
				if (s[i] == ans[j])
				{
					cnt[j]++;
				}
			}
		//	printf("\n");
		}

		for (int i = 0; i < 5; i++)
		{
			printf("%c:%d\n", ans[i], cnt[i]);
		}
		if (T)
			printf("\n");

	}

	return 0;
}