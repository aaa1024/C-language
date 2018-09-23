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
#define maxn 5007
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
int arc[maxn][maxn];
int len;
int dfs(int x){
	int i;
	for (i = 0; i < n - 1; i++){
		if (argc[x][i]){
			len += arg[x][i];
			dfs(i);
		}
	}
	if (i == n - 1){
		return;
	}
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, x, b, u, v, w;
	while (cin >> n >> x){
		for (int i = 0; i < n - 1; i++){
			cin >> u >> v >> w;
			arc[u][v] = w;
		}
		len = 0;
		dfs(x);
	}
    return 0;
}