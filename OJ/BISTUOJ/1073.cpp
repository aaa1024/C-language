#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1, s2;
	int N;
	scanf("%d", &N);
	while (N--)
	{
		cin >> s1;
		cin >> s2;
		int count = 0;
		for (int i = 0; i < s2.size() - s1.size() + 1; i++)
		{
			int flag = 0;
			for (int j = 0; j < s1.size(); j++)
			{
				if(s1[j] != s2[i + j])
				{
					flag = 1;
					break;
				}
			}
			if (!flag)
			{
				count ++;
			}
		}

		cout << count << endl;
	}
	return 0;
}