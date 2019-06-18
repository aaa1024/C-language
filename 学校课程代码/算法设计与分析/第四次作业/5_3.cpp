// #pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL
const int maxn = 1e3 + 7;

int n, m, d;
int w[maxn][maxn]; // w[i][j]
int c[maxn][maxn];
int min_w = inf;
int ans = inf;
int min_step[maxn];
int step[maxn];
void dfs(int cur_i, int cur_w, int cur_c){ // 当前正在为第cur_i个部件选择供货商
	// 当前的重量为总和cur_w，价格总和为cur_c
	if (cur_c > d){
		return; //如果当前的价值总和超过d了，那这个分支就不能走了，直接return。
	}
	if (cur_i == n + 1){ // cur_i等于n + 1就代表前n个物品已经都选完了
		if (cur_w < ans){ // 如果当前的重量小于已知的最优解，则更新最优解
			ans = cur_w;  // 
			for (int i = 1; i <= n; i++){
				// 把当前步骤放到最优步骤中
				min_step[i] = step[i]; 
			}
		}
		return;
	}
	for (int i = 1; i <= m; i++){
		step[cur_i] = i;
		dfs(cur_i + 1, cur_w + w[cur_i][i], cur_c + c[cur_i][i]);
	}
}
int main(int argc, char * argv[]) 
{
	cout << "请输入：" << endl;
	cin >> n >> m >> d;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> c[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> w[i][j];
		}
	}
	dfs(1, 0, 0);
	cout << "最小重量为：" << endl;
	cout << ans << endl;
	cout << "选择方案为：" << endl;
	for (int i = 1; i <= n; i++){
		cout << min_step[i];
		if (i == n){
			cout << endl;
		}
		else{
			cout << " ";
		}
	}
    return 0;
}