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
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 10000
#define LOCAL
int n, m;
char M[maxn][maxn];
int num[maxn];
int main(int argc, char * argv[]) {
	//read("input.txt");
	while (cin >> n >> m){
		int cnt = 0;
		ms(M);
		ms(num);
		for (int i = 1; i <= m; i++){
			int a, b;
			cin >> a >> b;
			M[a][b] = '1';
		//	num[b]++;
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (M[j][i] == '1'){
					for (int k = 1; k <= n; k++){
						if(M[j][k] == '1'|| (M[j][i] == '1' && M[i][k] == '1')){
							M[j][k] = '1';
						}
					}
				}
			}
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
			//	printf("%d ", M[i][j]);
				if (i == j){
					continue;
				}
				if (M[j][i] == '1'){
					num[i]++;
				}
			}
			if (num[i] == n - 1){
				cnt++;
			}
		//	printf("%d\n", num[i]);
		//	printf("\n");
		}
		printf("%d\n", cnt);
	}
    return 0;
}