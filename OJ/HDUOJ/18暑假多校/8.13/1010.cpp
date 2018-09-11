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
#define maxn 1000
#define LOCAL
ll A, B, C, D,P, n;
ll gao(int x){
	ll ans;
	if (x == 1) return A;
	else if (x == 2) return B;
	else{
	//	ans = (C * gao(x - 2) + D * gao(x - 1) + floor(P / x)) % mod;
		return ans;
	}
}
int main(int argc, char * argv[]) {
//	freopen("in.txt", "r", stdin);
	int T;
	scanf("%d", &T);
	while (T--){
		scanf("%lld%lld%lld%lld%lld%lld", &A, &B, &C, &D, &P, &n);
		if (n == 1){
			printf("%lld\n", A);
		}
		else if (n == 2){
			printf("%lld\n", B);
		}
		else{
/*
			ll F[maxn];
			F[1] = A;
			F[2] = B;
			for (int i = 3; i <= n; i++){
				F[i] = C * F[i - 2] + D * F[i - 1] + floor(P / i);
			}
	
			printf("%lld\n", gao(n));
*/
			ll Fn;
			ll temp[5];
			temp[1] = A;
			temp[2] = B;
			for (int i = 3; i <= n; i++){
				Fn = C * temp[(i - 2)% 3] + D * temp[(i - 1)%3] + floor(P / i);
				Fn %= 1000000007;
				if (i % 3 == 0){
					temp[0] = Fn;
				}
				else if (i % 3 == 1){
					temp[1] = Fn;
				}
				else if (i  % 3 == 2){
					temp[2] = Fn;
				}
			}
			printf("%lld\n", Fn);
		}
	}
    return 0;
}