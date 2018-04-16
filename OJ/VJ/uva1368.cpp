#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int m, n, sum = 0;
		cin >> m >> n;
		string s[m];
		char ans;
		string ss = "ACGT";
		for (int i = 0; i < m; i++) 
			cin >> s[i];
		
		int num[n][5];

		memset(num, 0, sizeof(num));
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
			{
				if (s[i][j] == 'A')
				{
					num[j][0]++;
				}
				else if (s[i][j] == 'C')
				{
					num[j][1]++;
				}
				else if (s[i][j] == 'G')
				{
					num[j][2]++;
				}
				else if (s[i][j] == 'T')
				{
					num[j][3]++;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			int max = 0;
			ans = ss[0];
			for (int j = 0; j < 4; j++)
			{
				if(num[i][j] > max)
				{
					max = num[i][j];
					ans = ss[j];
				}
			}
			cout << ans;
			sum += m - max;
		}
		cout << endl;
		cout << sum << endl;
	}

	return 0;
}