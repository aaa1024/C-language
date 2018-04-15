#include <iostream>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int len1 = s1.size();
		int len2 = s2.size();
		int m = max(len1, len2);
		int a[1000] = {0};

		for (int i = m - 1, j = len1 - 1, k = len2 - 1; i >= 0 ; i--, j--, k--)
		{
			a[i] = ((s1[j] % 16) + (s2[k] % 16)) % 10;
		}
		int flag = 0;
		for (int i = 0; i < m; i++)
		{
			
			if (a[i] || flag)
			{
				cout << a[i];
				flag = 1;
			}
		}
		if(!flag)
		{
			cout << '0' << endl;
		}
		else
		{
			cout << endl;
		}
	}
	return 0;
}