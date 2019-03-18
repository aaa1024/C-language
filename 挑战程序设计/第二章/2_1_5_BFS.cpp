#include <iostream>
#include <map>
#include <queue>
using namespace std;
#define maxn 10000
const int INF = -1;
typedef pair<int, int> P;
char maze[maxn][maxn];
int N, M;
int sx, sy;		//起点坐标
int gx, gy;		//终点坐标
int d[maxn][maxn];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int bfs(){
	queue<P> que;
	//把所有位置都初始化为INF
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (maze[i][j] == 'S'){
				sx = i;
				sy = j;
			}
			if (maze[i][j] == 'G'){
				gx = i;
				gy = j;
			}
			d[i][j] = INF;
		}
	}
	//将起点放入队列，并把这一地点的距离设置为0
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	//不断循环直到队列的长度为0
	while (que.size()){
		//从队列的最前端取出元素
		P p = que.front(); que.pop();
		if (p.first == gx && p.second == gy) break;
		//四个方向循环
		for (int i = 0; i < 4; i++){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			//判断是否可以移动以及是否已经访问过(d[nx][ny] != INF即为访问过)
			if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && 
				d[nx][ny] == INF){
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}
void slove(){
	int res = bfs();
	printf("%d\n", res);
}
void printd(){
	for (int i = 0; i < N; i++){
		for (int j = 0; j <M; j++){
			printf("%5d", d[i][j]);
		}
		cout << endl;
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	cin >> N >> M;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			cin >> maze[i][j];
		}
	}
	slove();
	printd();
//	printf("sx:%d, sy:%d\ngx:%d, gy:%d\n", sx, sy, gx, gy);
	return 0;
}