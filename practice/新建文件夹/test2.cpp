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
#define maxn 10005
#define LOCAL

int main(int argc, char * argv[]) {
	freopen("out.txt", "w", stdout);
	int t, ans[maxn];
	for (int i = 1; i <= 5; i++){
		ans[i] = i;
	}
	for (int i = 6; i <= maxn;i++){
		ans[i] = maxn;
		for (int j = 1; j <= i; j++){
			int temp = j + ceil((double)i / (double)j - 1) * 2 + 5;
			ans[i] = min(ans[i], temp);
			ans[i] = min(ans[i], ans[i - 1] + 1);
		}
	}
	for (int i = 1; i <= maxn; i++){
		printf("%d, ", ans[i]);
		if (i % 20 == 0) cout << endl;
	}
    return 0;
}