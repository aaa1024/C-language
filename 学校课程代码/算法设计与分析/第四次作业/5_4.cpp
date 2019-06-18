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
int p[maxn][maxn];  	// p[i][j]代表男运动员i和女运动员j配对组成的混合双打的男运动员的优势
int q[maxn][maxn]; 		// q[i][j]代表男运动员i和女运动员j配对组成的混合双打的女运动员的优势
int n;
int step[maxn]; // 记录第i个男队员选择了第step[i]个女队员配对
int min_step[maxn]; // 记录最优的方案
int ans = 0;
int book[maxn]; // book[i]代表第i名女队员已经被选过了
void dfs(int cur_i, int cur_sum){ // 为第cur_i名男队员选择配对的女队员
	if (cur_i == n + 1){ // cur_i == n + 1代表n个男队员都选过了
		if (cur_sum > ans){
			ans = cur_sum;
			for (int i = 1; i <= n; i++){
				min_step[i] = step[i];
			}
		}
		return;
	}
	for (int i = 1; i <= n; i++){
		if (!book[i]){
			step[cur_i] = i; // 记录当前步骤
			book[i] = true;  // 标记第i名女队员已经被选过了
			dfs(cur_i + 1, cur_sum + p[cur_i][i] * q[cur_i][i]);
			book[i] = false; // 去除标记
		}
	}
}
int main(int argc, char * argv[]) 
{
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> p[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> q[i][j];
		}
	}
	dfs(1, 0);
	cout << "优势总和最大值：" << endl;
	cout << ans << endl;
	for (int i = 1; i <= n; i++){
		printf("第%d名男队员跟第%d名女队员配对\n", i, min_step[i]);
	}
    return 0;
}