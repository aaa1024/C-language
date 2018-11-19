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
bool mark[maxn][maxn][maxn];
int a[maxn][maxn][maxn], b[maxn][maxn][maxn]; //a代表地图,b[i][j]代表从起点到b[i][j]的路程
int l, r, c;
int fx[] = {0, 1, 0, -1};
int fy[] = {1, 0, -1, 0};
int sx = 0, sy = 0; //起点坐标
int tx = 0, ty = 0; //终点坐标
int ans = inf;
int flag = 0;
struct point
{
	int x;
	int y;
	point(int xx, int yy){
		x = xx;
		y = yy;
	}
};
int dfs(int step, int k, int x, int y){
//	printf("%d %d %d \n", x, y, step);
	int temp = inf;
	if (a[k][x][y] == 2){
		ans = min(ans, step);
		flag = 1;
		return step;
	}
	if (k < l - 1){
		if (a[k + 1][x][y] != 0){
			mark[k][x][y] = 1;
			dfs(step + 1, k + 1, x, y);
			mark[k][x][y] = 0;
		}
	}
	for (int i = 0; i < 4; i++){
		int nx = x + fx[i];
		int ny = y + fy[i];
		if (a[k][nx][ny] != 0 && !mark[k][nx][ny]){
			mark[k][x][y] = 1;
			temp = min(temp, dfs(step + 1, k, nx, ny));
			mark[k][x][y] = 0;
		}
	}
	return temp;
//	return 0;
}

int main(int argc, char * argv[]) 
{
    //freopen("2251.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	char t;
	while (cin >> l >> r >> c){
		if (!l && !r && !c){
			break;
		}
		ms(mark);
		ms(a);
		ms(b);
		ans = inf;
		flag = 0;
		for (int k = 0; k < l; k++){
			for (int i = 0; i < r; i++){
				for (int j = 0; j < c; j++){
					cin >> t;
					if (t == '.'){
						a[k][i][j] = 1; //1代表可走
					}
					else if (t == '#'){
						a[k][i][j] = 0; //0代表不可走
					}
					else if (t == 'S'){
						sx = i; //设置起点，终点
						sy = j;
						a[k][i][j] = -1; //-1代表起点
					}
					else if (t == 'E'){
						tx = i;
						ty = j;
						a[k][i][j] = 2; //2代表终点
					}
				}
			}
		}
		dfs(0, 0, sx, sy);
		if (flag){
			printf("Escaped in %d minute(s).\n", ans);
		}
		else{
			printf("Trapped!\n");
		}
	//	printf("%d\n", ans);
	//	printa();
	//	cout << sx << " " << sy << endl;
	/*	for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	*/
	}
    return 0;
}