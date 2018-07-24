#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int T;
	scanf ("%d", &T);
	getchar();
	while (T--)
	{

		char s[1000];
		fgets(s, 1000, stdin);
		int cnt = 0, num = 0;
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] < 0 )
			{
				cnt++;
			}
		}
		
		printf("%d\n", cnt / 2);
	}

	return 0;
}