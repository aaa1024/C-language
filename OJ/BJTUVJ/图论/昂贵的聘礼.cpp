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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 105
#define LOCAL
struct Node
{
	int p, l, x;
	bool visit;
};
int m, n, t, v, now, ans = inf;
int arc[maxn][maxn], d[maxn];
Node a[maxn];
void init(){
	for (int i = 1; i <= n; i++){
		a[i].visit = false;
		for (int j = 1; j <= n; j++){
			arc[i][j] = inf;
		}
	}
}
void get(){
	for (int i = 1; i <= n; i++){
		cin >> a[i].p >> a[i].l >> a[i].x;
		for (int j = 1; j <= a[i].x; j++){
			cin >> t >> v;
			arc[t][i] = v;
		}
	}
}
int dijkstra(){
	for (int i = 1; i <= n; i++) d[i] = a[i].p;
	for (int i = 1; i <= n; i++){
		int temp = inf, x;
		for (int j = 1; j <= n; j++){
			if (d[j] < temp && !a[j].visit){
				temp = d[x = j];
			}
		}
		a[x].visit = 1;
		for (int j = 1; j <= n; j++){
			if (!a[j].visit && arc[x][j] + d[x] < d[j]){
				d[j] = d[x]+arc[x][j];
			}
		}
	}
	return d[1];
}
int main(int argc, char * argv[]) {
	read("input.txt");
	while (cin >> m >> n){
		init();
		get();
		for (int i = 1; i <= n; i++){
			int minL = a[i].l;
			for (int j = 1; j <= n; j++){
				if (a[j].l - minL > m || minL > a[j].l) a[j].visit = true;
				else a[j].visit = false;
			}
			now = dijkstra();
			ans = min(now, ans);
		}
		cout << ans << endl;
	}
    return 0;
}