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

int G[maxn][maxn]; // G[i][j]表示i到j的距离
bool isVisited[maxn];
int step[maxn]; // 记录第i步走的是step[i]个城市
int min_step[maxn]; // 这是最终答案，每找到一个最小值更新一次
int n;
int ans = inf;
void dfs(int x, int cnt, int length){
	isVisited[x] = true;
	step[cnt] = x;
	if (length > ans){
		return;
	}
	if (cnt == n){ // 如果已经访问了n个点
		step[n + 1] = 1;
		if (length + G[x][1] < ans){ 	// 加G[x][1]代表从x点回到1点
			ans = length + G[x][1];
			for (int i = 1; i <= n + 1; i++){ // 更新路径答案
				min_step[i] = step[i];
			}
		}
	}
	// 遍历所有分支
	for (int i = 1; i <= n; i++){
		if (i == x){ // 不能自己访问自己，所以continue
			continue;
		}
		if (!isVisited[i]){
			// 标记这个点已将访问过了
			isVisited[i] = true;
			dfs(i, cnt + 1, length + G[x][i]);
			// 将它的标记去掉，以便回溯
			isVisited[i] = false;
		}
	}
}
int main(int argc, char * argv[]) 
{
	cout << "请输入城市的个数：" << endl;
	cin >> n;
	cout << "请输入每个城市到其他城市的距离（到自己的距离为0）：" << endl;
    for (int i = 1; i <= n; i++){
    	for (int j = 1; j <= n; j++){
    		cin >> G[i][j];
    	}
    }
    dfs(1, 1, 0);
    cout << "最短距离为：";
    cout << ans << endl;
    cout << "路线为：" << endl;
    for (int i = 1; i <= n + 1; i++){
    	cout << min_step[i];
    	if (i == n + 1){
    		cout << endl;
    	}
    	else{
    		cout << "->";
    	}
    }
    return 0;
}