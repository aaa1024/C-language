#include <iostream>
#include <cstdio>
using namespace std;
int a[100][100]; // 矩阵
bool isVisited[100]; // 这个点是否被走过
int buzhou[100]; //每个的步骤
int zuizhongbuzhou[100];  //最短的那个步骤
int n, m;
int Min; //最小值

//x代表当前在的点，cost代表走到x这里共消耗了多少，step代表这是第几补
void dfs(int x, int cost, int step){
	//下面这行的意思就是，第step步走了x这个点。
	buzhou[step] = x;
	//当它绕了一圈回到1点的时候，它走了m + 1步（第一步在1，然后m - 1步走完其他点，再走1步回到1，加起来也就是m + 1）
	//饶了一圈了，就需要返回了
	if (step == m + 1){
		if (cost < Min){
			Min = cost; // 更新最小值
			//更新最小步骤
			for (int i = 1; i <= m + 1; i++){
				zuizhongbuzhou[i] = buzhou[i]; 
			}
		}
		return;
	}

	// 判断与当前点所连接的所有点是否能走
	for (int i = 1; i <= m; i++){

		// （有边 && 没被访问过）|| （已经走了m步了，下一步就是1，回到起点了）
		if ((a[x][i] != -1 && isVisited[i] == 0) || ((step == m) && i == 1)){
			// 先标记当前这个x点已经走了
			isVisited[x] = 1;
			// 然后走i点，它的消耗也就是当前这个消耗加上从x点到i点的边长(去看一下函数那里的cost的定义)
			dfs(i, cost + a[x][i], step + 1);
			//把当前点作为没跑过的点，这里不是很好解释。
			isVisited[x] = 0;
		}
	}
}
int main(){
//	freopen("in.txt", "r", stdin);
	cin >> n;
	while (n--){
		// 默认最小值是一个巨大的值。
		Min = 1000000000;
		// 输入
		cin >> m;
		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		// 跑这个dfs，跑完了全局变量就是输出结果了

		dfs(1, 0, 1);
		cout << Min << endl;
		for (int i = 1; i <= m + 1; i++){
			printf("%d ", zuizhongbuzhou[i]);
		}
	}
}