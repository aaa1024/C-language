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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
const int inf = 0x3f3f3f3f;
#define maxn 10005
#define LOCAL
int n, m;
bool M[maxn][maxn];
int num[maxn];
int main(int argc, char * argv[]) {
	while (cin >> n >> m){
		ms(M);
		ms(num);
		for (int i = 1; i <= m; i++){
			int a, b;
			cin >> a >> b;
			M[a][b] = true;
			num[b]++;
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (M[j][i] == true){
					for (int k = 1; k <= n; k++){
						M[j][k] = (M[j][k] || (M[j][i] && M[i][k]));
					}
				}
			}
		}
	}
    return 0;
}