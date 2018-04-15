#include <iostream>
using namespace std;
#define maxn 1000
int w[maxn], v[maxn];
int N, V;
int dp[maxn][maxn];
int main()
{
	
	cin >> N >> V;
	for (int i = 1; i <= N; i++)
	{
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i  <= N ; i++)
	{
		for (int j = 1; j <= V; j++)
		{
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
		}
	}

	cout << dp[N][V];
}