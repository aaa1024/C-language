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
#define maxn 107
const int inf = 0x3f3f3f3f;
bool vis[4][maxn * 2]; //vis[0]代表列，vis[1]代表主对角线，vis[2]代表副对角线
int pos[maxn];
int n;
int tot = 0;
void dfs(int cur){
	/*
	if (tot > 3){
		return;
	}*/
	if (cur == n){
		tot++;
		for (int i = 0; i < n; i++){
			cout << pos[i] + 1 << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++){
		if (!vis[0][i] && !vis[1][cur - i + n] && !vis[2][cur + i]){
			vis[0][i] = vis[1][cur - i + n] = vis[2][cur + i] = true;
			pos[cur] = i;
		//	cur[x] = i;
			dfs(cur + 1);
			vis[0][i] = vis[1][cur - i + n] = vis[2][cur + i] = false;
		}
	}
	return;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
 
	while (cout << "input:" << endl && cin >> n){
		tot = 0;
		ms(vis);
		ms(pos);
		cout << "output:" << endl;
		dfs(0);
		cout << tot << endl;
	//	cout << ans[n - 6] << endl;
	}
    return 0;
}
