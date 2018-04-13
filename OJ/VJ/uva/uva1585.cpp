#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		int k = 0, sum = 0;
		for (int i = 0; i < s.size(); i++)
		{

			if (s[i] == 'O')
			{
				sum += ++k;
			}
			else
			{
				k = 0;
			}
		}

		cout << sum << endl;
	}

	return 0;
}