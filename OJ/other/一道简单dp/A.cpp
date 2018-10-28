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
#define maxn 107
const int inf = 0x3f3f3f3f;
int n, m, K, k = 0;
int a[maxn][maxn];
bool visit[maxn][maxn];
int sum[maxn * maxn];
int nextx[2] = {0, 1};
int nexty[2] = {1, 0};
void dfs(int x, int y, int s){
//	printf("a[%d][%d] = %d, s = %d\n", x, y, a[x][y], s);
	//cout << a[x][y] << endl;
//	s += a[x][y];
	//visit[x][y] = 1;
	if (x == n && y == m){
//		printf("finish:%d\n", s);
		sum[k++] = s;
		return;
	}
	for (int i = 0; i < 2; i++){
		int nx = x + nextx[i];
		int ny = y + nexty[i];
		if (nx <= n && ny <= m){
			dfs(nx, ny, s + a[nx][ny]);
		}
	}
}

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while (cin >> n >> m >> K){
		ms(visit);
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		dfs(1, 1, a[1][1]);
		sort(sum, sum + k);
		for (int i = 0; i < K; i++){
			printf("%d", sum[k - i - 1]);
			if (i == K - 1){
				cout << endl;
			}
			else{
				cout << " ";
			}
		}
	}
    return 0;
}