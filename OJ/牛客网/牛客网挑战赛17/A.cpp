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
#define maxn 1005
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL



int main(int argc, char * argv[]) {
	int n, m;
	cout << "aaa" << endl;
	while(scanf("%d%d", &n, &m) != EOF){
		int map[maxn][maxn];
		int tot = 1;
		int x = 1, y = 1;
		while (tot <= m){
			while (tot <= m && x <= n){
				x++;
				tot++;
			}
			while (tot <= m && y <= n){
				y++;
				tot++;
			}
			while (tot <= m && x >= 1){
				x--;
				tot++;
			}
			while (tot <= m && y >= 1){
				y--;
				tot++;
			}
		}
		cout << x << " " << y << endl;
	}
    return 0;
}