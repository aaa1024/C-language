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
#define maxn 31
const int inf = 0x3f3f3f3f;
bool mark[maxn][maxn][maxn];
char a[maxn][maxn][maxn]; //a代表地图,b[i][j]代表从起点到b[i][j]的路程
int l, r, c;
/*
	前
  左  右
	后
*/
//fz,fx,fy依次对应的
//后，右，前，左, 上，下
int fz[] = {0, 0, 0, 0, 1, -1};
int fx[] = {0, 1, 0, -1, 0, 0};
int fy[] = {1, 0, -1, 0, 0, 0};

int sz = 0, sx = 0, sy = 0; //起点坐标
int tz = 0, tx = 0, ty = 0; //终点坐标
struct point
{
	int z;
	int x;
	int y;
	int step;
};
bool ok(int nz, int nx, int ny){
	return (!mark[nz][nx][ny] && a[nz][nx][ny] != '#'
		&& nz >= 0 && nz < l
		&& nx >= 0 && nx < r
		&& ny >= 0 && ny < c
		);
}
int bfs(int z, int x, int y){
	//z代表层数，x, y代表起点坐标
	point a, next;
	queue<point> q;
	a.x = x, a.y = y, a.z = z;
	a.step = 0;
	mark[sz][sx][sy] = 1;
	q.push(a);
	while (!q.empty()){
		a = q.front();
		q.pop();
		// printf("current:%d %d %d\n", cz, cx, cy);		
        if(a.x == tx && a.y == ty && a.z == tz)
            return a.step;
		for (int i = 0; i < 6; i++){
			next = a;
			next.x = a.x + fx[i];
			next.y = a.y + fy[i];
			next.z = a.z + fz[i];
			if (ok(next.z, next.x, next.y)){
				//比它的前驱大1
				mark[next.z][next.x][next.y] = 1;
				next.step = a.step + 1;
				q.push(next);
			}
		}
	}
	return 0;
}

int main(int argc, char * argv[]) {
    
    //freopen("2251.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	while (scanf("%d%d%d", &l, &r, &c), l + r + c){
		for (int k = 0; k < l; k++){
			for (int i = 0; i < r; i++){
				scanf("%s", a[k][i]);
				for (int j = 0; j < c; j++){
					if (a[k][i][j] == 'S'){
						sz = k; //设置起点，终点
						sx = i; 
						sy = j;
					}
					else if (a[k][i][j] == 'E'){
						tz = k;
						tx = i;
						ty = j;
					}
				}
			}
		}
		// printf("%d %d %d\n", sz, sx, sy);
		// printf("%d %d %d\n", tz, tx, ty);
		ms(mark);
		int ans = bfs(sz, sx, sy);
		if (ans){
			printf("Escaped in %d minute(s).\n", ans);
		}
		else{
			printf("Trapped!\n");
		}
	}
	return 0;
}