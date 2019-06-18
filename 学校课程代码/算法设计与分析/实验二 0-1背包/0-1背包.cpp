// #pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL
const int maxn = 1e3 + 7;


int main(int argc, char * argv[]) 
{
	int N, W, w[maxn], v[maxn]; 
	// N代表物品个数，W代表背包容量，w[i]代表第i个物品的重量，v[i]代表第i个物品的价值
	int dp[maxn][maxn];
	cout << "请输入物品的个数：" << endl;
	cin >> N;
	cout << "请输入背包的容量：" << endl;
	cin >> W;
	cout << "请输入每个物品的重量：" << endl;
	for (int i = 1; i <= N; i++){
		cin >> w[i];
	}
	cout << "请输入每个物品的价值：" << endl;
	for (int i = 1; i <= N; i++){
		cin >> v[i];
	}
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= W; j++){
			if (j >= w[i]){
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
			else{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << "所能取的最大价值为:" << endl;
	cout << dp[N][W] << endl;
    return 0;
}