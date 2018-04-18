#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int ans1, ans2;
		int i = 0, j = 0, t = 0, a, b;
		int mark = 0;
		for (; i < s1.size() && j < s2.size();)
		{
			if((s1[i] - '0') + (s2[j] - '0') <= 3)
			{
				i++;
				j++;
			}
			else
			{
				j = 0;
				i = ++t;
			}
		}
		ans1 = s1.size() + s2.size() - j;

		i = 0; j = 0; t = 0;
		for (; j < s1.size() && i < s2.size();)
		{
			if((s1[j] - '0') + (s2[i] - '0') <= 3)
			{
				i++;
				j++;
			}
			else
			{
				j = 0;
				i = ++t;
			}
		}
		ans2 = s1.size() + s2.size() - j;

		cout << min(ans1, ans2) << endl;
	}
	return 0;
}