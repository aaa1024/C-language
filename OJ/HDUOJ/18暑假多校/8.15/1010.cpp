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
#define maxn 100005
#define LOCAL

int main(int argc, char * argv[]) {
//	read("in.txt");
	long long p, q, ans, t;
	int T;
	scanf("%d", &T);
	while (T--){
		long long a[maxn];
		long long n, m;
		scanf("%lld%lld", &n, &m);
		a[0] = 0;
		for (int i = 1; i <= n; i++){
			scanf("%lld", &a[i]);
		}
		for (int i = 1; i <= m; i++){
			ans = 0;
			scanf("%lld%lld", &p, &q);
			t = a[p];
			a[p] = q;
			for (int i = 1; i <= n; i++){
				if (a[i] > a[i - 1]){
					ans++;
				}
				if (a[i] < a[i - 1]){
					break;
				}
			}
			printf("%lld\n", ans);
			a[p] = t;
		}

	}
    return 0;
}