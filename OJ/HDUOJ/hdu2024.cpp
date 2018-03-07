#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int judge(char a)
{
	if((a >='a' && a <= 'z')||(a >='A' && a <= 'Z') || a =='_' || (a >= '0' && a <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
        getchar();
		for (int i = 0; i < n; i++)
		{
			int flag = 1;
			string a;
			getline(cin, a);
			if(a[0] >= '0' && a[0]<= '9' || !judge(a[0]))
			{
				flag = 0;
			}
			else
			{
				for (int i = 1; i < a.size(); i++)
				{
					if (!judge(a[i]))
					{
						flag = 0;
						break;
					}
				}
			}
			if(flag)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
}
