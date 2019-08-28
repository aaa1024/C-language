/*
记录所有点的入度，把所有入度为0的点推入队列。
接着每次取出队列里的首元素，将首元素加入拓扑序，并且首元素所指向的点的入度减一
如果减到0了则将该节点入队
依次执行以上操作，知道队列为空位置。
*/


// #pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL
const int maxn = 1e6 + 7;
int read(){
    int x = 0; int zf = 1; char ch = ' ';
    while (ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
    while (ch >= '0' && ch <= '9') x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}

int n, m;
std::vector<int> G[maxn];
int in_degree[maxn];
std::vector<int> tuopu; // 用于存放拓扑序
void init(){
	// 初始化
	tuopu.clear();
	for (int i = 1; i <= n; i++){
		G[i].clear();
		in_degree[i] = 0;
	}
}
void add(int p, int q){
	// 加边操作，加边时入度加一
	G[p].push_back(q);
	in_degree[q]++;
}
int main(int argc, char * argv[]) 
{
	while (cin >> n >> m){
		init();
		// 建图
		for (int i = 1; i <= m; i++){
			add(read(), read());
		}
		queue <int> q;
		// 先将所有入度为0的点入队
		for (int i = 1; i <= n; i++){
			if (in_degree[i] == 0){
				q.push(i);
			}
		}
		while (!q.empty()){
			// 遍历队列
			int t = q.front(); q.pop();
			tuopu.push_back(t); // 把队首袁术加入拓扑序
			for (int i = 0; i < G[t].size(); i++){
				// 遍历队首元素所指向的点
				in_degree[G[t][i]]--; // 入度减1
				if (in_degree[G[t][i]] == 0){
					// 如果减到0则推入队
					q.push(G[t][i]);
				}
			}
		}
		for (int x : tuopu){
			printf("%d\n", x);
		}
	}
    return 0;
}