#include <iostream>
using namespace std;
#define maxn 1000
string a[maxn];
int n, m;
int xx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int yy[] = {0, -1, -1, -1, 0, 1, 1, 1};
int cnt = 0;
bool ok(int i, int j)
{
	return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '.');
}
void bfs(int x, int y)
{	
	if (!ok(x, y))
	{
		return;
	}
	if (a[x][y] != '.')
	{
		a[x][y] = '.';
	}
	for(int i = 0; i < 8; i++)
	{
		if (ok(x + xx[i], y + yy[i]))
		{
			bfs(x + xx[i], y + yy[i]);
		}
	}
}
int main()
{	
	int T;
	cin >> T;
	while (T--)
	{

		cin >> n >> m;
		cnt = 0;
		for (int i  = 0; i < n ;i++) cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] != '.')
				{
					cnt++;
				}
				bfs(i, j);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}