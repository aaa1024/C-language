#include <iostream>
#include <cstdio>
#include <cstring>
#define maxn 1005
using namespace std;


int main(){
	int n, m;
	while (cin >> n >> m){
		int tot = 0;
		int x = 1, y = 1;
		bool mark[maxn][maxn];
		memset(mark, 0, sizeof(mark));
		while (tot < m){
			while(x < n && tot < m && !mark[x + 1][y]){
			//	printf("%d %d %d\n", x, y, tot);
				mark[x][y] = 1;
				x++;
				tot++;
			} 
			while(y < n && tot < m && !mark[x][y + 1]){
		//		printf("%d %d %d\n", x, y, tot);
				mark[x][y] = 1;
				y++;
				tot++;
			}
			while (x > 1 && tot < m && !mark[x - 1][y]){
		//		printf("%d %d %d\n", x, y, tot);
				mark[x][y] = 1;
				x--;
				tot++;
			}
			while (y > 1 && tot < m && !mark[x][y - 1]){
	//			printf("%d %d %d\n", x, y, tot);
				mark[x][y] = 1;
				y--;
				tot++;
			}
			if (tot == m - 1){
				mark[x][y] = 1;
				break;
			}
		}
		cout << x << " " << y << endl;
	}
	return 0;
}
