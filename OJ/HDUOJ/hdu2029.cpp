#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int flag = 1;
		string s;
		cin >> s;

		for (int i = 0, j = s.size() - 1; i < j; i++, j--)
		{
			if(s[i] != s[j])
			{
				flag = 0;
				break;
			}
		}

		if(flag)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}

	return 0;
}