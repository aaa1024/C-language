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
const int inf = 0x3f3f3f3f;
#define maxn 10000
#define LOCAL
char M[maxn][maxn];
int m, n, p, q;
void solve(){
	int r = 0, c = 0;
	bool final = true;
	for (int i = 1; i <= n / 2; i++){
		bool flag = true; //标记
		for (int j = 1; j <= m / 2; j++){
			//如果出现这种情况说明这行不对称
			if (M[i][j] != M[i][m - j + 1]){
				//如果最外行不对称则直接判0
				if (i == 1 || j == 1){
					final = 0;break;
				}
				flag = false;
				break;
			}
		}
		if (!final){
			cout << 0 << endl;
			return;
		}
		if (flag){
			c++;
		}
	}

	for (int j = 1; j <= m / 2; j++){
		bool flag = true;
		for (int i = 1; i <= n / 2; i++){
			if (M[i][j] != M[n - i + 1][j]){
				if (i == 1 || j == 1){
					final = 0;break;
				}
				flag = false;
				break;
			}
		}
		if (!final){
			cout << 0 << endl;
			return;
		}
		if (flag){
			r++;
		}
	}

	if (!final){
		cout << 0 << endl;
	}
	else{
		cout << c * r << endl;
	}
}
int main(int argc, char * argv[]) {
	freopen("F.in", "r", stdin);
	int t;
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> M[i][j];
			}
		}
		solve();
	}
    return 0;
}