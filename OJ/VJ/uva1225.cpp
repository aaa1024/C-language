#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		int map[12] = {0};
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int t = i;
			while (t >= 1)
			{
				map[(t % 10)]++;
				t /= 10;
			}
		}
		int flag = 1;
		for (int i = 0; i < 10; i++)
		{
			if (flag)
			{
				cout << map[i];
				flag = 0;
			}
			else
			{
				cout << " " << map[i];
			}
		}
		cout << endl;
	}
	return 0;
}