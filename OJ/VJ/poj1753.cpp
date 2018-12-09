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
#define maxn 10000007
const int inf = 0x3f3f3f3f;
int ans = inf;
int Map[5][5];
bool judge(){
	int x = Map[0][0];
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			if (Map[i][j] != x){
				return 0;
			}
		}
	}
	return 1;
}
bool ok(int x, int y){
	return (x >= 0 && x < 4 && y >= 0 && y < 4);
}
void fan(int x, int y){
	if (x < 4 && x >= 0 && y < 4 && y >= 0){
		Map[x][y] = !Map[x][y];
	}
	if (x + 1 < 4){
		Map[x + 1][y] = !Map[x + 1][y];
	}
	if (x - 1 >= 0){
		Map[x - 1][y] = !Map[x - 1][y];
	}
	if (y + 1 < 4){
		Map[x][y + 1] = !Map[x][y + 1];
	}
	if (y - 1 >= 0){
		Map[x][y - 1] = !Map[x][y - 1];
	}
}
void dfs(int x, int y, int t){
	if (judge()){
		if (ans > t){
			ans = t;
		}
		return;
	}
	if (!ok(x, y)){
		return;
	}
	int nx = (x + 1) % 4;
	int ny = y + ((x + 1)/ 4);

	fan(x, y);
	dfs(nx, ny, t + 1);

	fan(x, y);
	dfs(nx, ny, t);
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s;
	for (int i = 0; i < 4; i++){
		cin >> s;
		for (int j = 0; j < 4; j++){
			//'b'mark as 1, 'w'mark as 0
			if (s[j] == 'b'){
				Map[i][j] = 1;
			}
			else{
				Map[i][j] = 0;
			}
		}
	}
	dfs(0, 0 , 0);
	if (ans != inf){
		cout << ans << endl;
	}
	else{
		cout << "Impossible" << endl;
	}
	/*
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << Map[i][j];
		}
		cout << endl;
	}
	*/
    return 0;
}