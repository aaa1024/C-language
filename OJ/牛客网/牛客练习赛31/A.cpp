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
typedef int ll;
typedef unsigned int ull;
#define ms(s) memset(s, 0, sizeof(s))
#define maxn 1007
const int inf = 0x3f3f3f3f;
int n, m;
int cnt = 0;
int d[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
// char Map[maxn][maxn];
//bool mark[maxn][maxn];
// vector<vector<bool>> mark;
//vector<vector<char>>(n + 1, vector<char>(m + 1)).swap(a)
vector<vector<char>> Map;
int ok(int x, int y){
//	cout << "in ok" << endl;
    if (x < n && y < m 
    	&& Map[x][y] == '.'
    	&& x >= 0 && y >= 0){
        return 1;
    }
    else{
        return 0;
    }
}
void print(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << Map[i][j];
		}
		cout << endl;
	}
}
void dfs(int x, int y){
   	// printf("dfs(%d,%d)\n", x, y);
    Map[x][y] = '#';
    cnt++;
    for (int i = 0; i < 4; i++){
    //	printf("%d\n", i);
        int nx = x + d[i][0];
        int ny = y + d[i][1];
        if (ok(nx, ny)){
            dfs(nx, ny);
        }
    }
    return;
}
int main(int argc, char * argv[]) 
{
    //freopen("A.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	// ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string temp;
	char c;
	while (cin >> n >> m){
		Map.clear();
		int ans = 0;
		//Map = vector<vector<char>>(n + 1, vector<char>(m + 1));
		for (int i = 0; i < n; i++){
			vector<char> temp;
			temp.clear();
			for (int j = 0; j < m; j++){
				cin >> c;
			//	cin >> Map[i];
				temp.emplace_back(c);
			}
		/*	for (int j = 0; j < (int)temp.size(); j++){
				cout << temp[i];
			}
			cout << endl;*/
			Map.emplace_back(temp);
		}
	//	vector<vector<char>>(n + 1, vector<char>(m + 1)).swap(Map);
	//	print();
		//先横着扫第0行和第n - 1行
		for (int i = 0; i < m; i++){
			if (Map[0][i] == '.'){
				cnt = 0;
				dfs(0, i);
				ans += cnt;
			}
			if (Map[n - 1][i] == '.'){
				cnt = 0;
				dfs(n - 1, i);
				ans += cnt;
			}
		}
		//再竖着扫第0列和 m - 1列
		for (int i = 0; i < n; i++){
			if (Map[i][0] == '.'){
				cnt = 0;
				dfs(i, 0);
				ans += cnt;
			}
			if (Map[i][m - 1] == '.'){
				cnt = 0;
				dfs(i, m - 1);
				ans += cnt;
			}
		}
		printf("%d\n", n * m - ans);
	}
    return 0;
}
