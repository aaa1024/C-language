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
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define MAX_V 1007
const int inf = 0x3f3f3f3f;
struct edge
{
	int to, cap, rev;
};
vector<edge> G[MAX_V];
bool used[MAX_V];
void add_edge(int from, int to, int cap){
	G[from].push_back((edge){to, cap, (int)G[to].size()});
	G[to].push_back((edge){from, 0, (int)G[from].size() - 1});
}

int dfs(int v, int t, int f){
	if (v == t) return f;
	used[v] = true;
	for (int i = 0; i < (int)G[v].size(); i++){
		edge &e = G[v][i];
		if (!used[e.to] && e.cap > 0){
			int d = dfs(e.to, t, min(f, e.cap));
			if (d > 0){
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}
int max_flow(int s, int t){
	int flow = 0;
	for (;;){
		memset(used, 0, sizeof(used));
		int f = dfs(s, t, inf);
		if (f == 0) return flow;
		flow += f;
	}
}
int main(int argc, char * argv[]) 
{
    
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t, n, m, a, b, c;
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i = 0; i < m; i++){
			cin >> a >> b >> c;
			if (b == 0){
				b = n + 1;
			}
			add_edge(a, b, c);
		}
		cout << max_flow(0, n + 1) << endl;
	}
    return 0;
}