#include <iostream>
using namespace std;
int main()
{
	int r = 0 - '0';
	char ele[5] = "CHON";
	double wei[5] = {12.01, 1.008, 16.00, 14.01};
	int N;
	cin >> N;
	while (N--)
	{
		double sum = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (s[i] == ele[j])
				{
					int t = 0;
					if ((s[i + 1] > '9' || s[i + 1] < '0' || i == s.size() - 1) && (s[i] > '9' || s[i] < '0'))
					{
						sum += wei[j];
					}
					else
					{
						i++;
						while (s[i] >= '0' && s[i] <= '9')
						{
							t *= 10;
							t += s[i] + r;
							i++;
						}
						i--;
						sum += t * wei[j];
					}
					break;	
				}
			}
		}
		printf("%.3lf\n", sum);
	}
}