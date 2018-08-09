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
#define maxn 1000000
#define LOCAL
int n, l[maxn];
void slove(){
	ll ans = 0;
	while (n > 1){
		int mii1 = 0, mii2 = 1;
		if (l[mii1] > l[mii2]) swap(mii1, mii2);

		for (int i = 2; i < n; i++){
			if (l[i] < l[mii1]){
				mii2 = mii1;
				mii1 = i;
			}
			else if (l[i] < l[mii2]){
				mii2 = i;
			}
		}
		int t = l[mii1] + l[mii2];
		ans += t;
		if (mii1 == n - 1) swap(mii1, mii2);
		l[mii1] = t;
		l[mii2] = l[n - 1];
		n--;
	}
	printf("%lld\n", ans);
}
int main(int argc, char * argv[]) {
	while (cin >> n){
		for (int i = 0; i < n ; i++) cin >> l[i];
		slove();
	}
    return 0;
}