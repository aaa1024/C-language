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
#define maxn 600
#define mod 100000000
#define LOCAL
int state[maxn], cur[maxn],dp[maxn][maxn];
int m, n, top;
inline void init(){
	top = 0;
	int up = 1 << n;
	for (int i = 0; i < up; i++){
		if (!(i & i<<1)){
			state[++top] = i;
		}
	}
}
inline bool fit(int x, int k){
	if (x & cur[k]) return false;
	return true;
}

void print(){
	cout << "print()\n";
	cout << "cur:" << endl;
	for (int i = 1; i <= m; i++){
		cout << cur[i] << endl;
	}
	cout << "dp:" << endl;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= top; j++){
			cout << dp[i][j];
		}
		cout << endl;
	}
	cout << "state" << endl;
	for (int i = 1; i <= top; i++){
		cout << state[i] << endl;
	}

	cout << endl;
}

int main(int argc, char * argv[]){
	freopen("in.txt", "r", stdin);
	while (scanf("%d%d", &m, &n) != EOF){
		int num;
		ms(dp);
		ms(cur);
		init();
		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= n; j++){
				scanf("%d", &num);
				if (num == 0){
					cur[i] += (1 << (n - j));
				}
			}
		}
		for (int i = 1; i <= top; i++){
			if (fit(state[i], 1)){
				dp[1][i] = 1;
			}
		}
		for (int i = 2; i <= m; i++){
			for (int k = 1; k <= top; k++){
				 if(!fit(state[k],i))continue; //直到找到第k个满足的状态为止
				 for (int j = 1; j <= top; j++){
				 	if(!fit(state[j],i-1))continue;  //判断是否符合第i-1行实际情况
				 	if(state[k]&state[j])continue;  //判断是否与第i行冲突
				 	dp[i][k] = (dp[i - 1][j] + dp[i][k]) % mod;
				 }

			}
		}
		print();
       int ans = 0;
       for(int i = 1; i <= top; ++i){ //累加最后一行所有可能状态的值，即得最终结果！！！泥马写注释累死我了终于写完了！
           ans = (ans + dp[m][i])%mod;
       }
       printf("%d\n",ans);
	}
    return 0;
}