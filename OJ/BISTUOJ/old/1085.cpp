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
#define maxn 1000000
#define LOCAL
bool judge(int h, int m, int s){
	if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59){
		return true;
	}
	else{
		return false;
	}
}
int main(int argc, char * argv[]) {
	int sh, sm, ss;
	int eh, em, es;
	int rh, rm, rs;
	scanf("%d:%d:%d", &sh, &sm, &ss);
	scanf("%d:%d:%d", &eh, &em, &es);
	int n;
	cin >> n;
	if (!judge(sh, sm, ss) || !judge(eh, em, es)){
		printf("提供的时间无效！\n");
		return 0;
	}
	int sum1 = sh * 3600 + sm * 60 + ss;
	int sum2 = eh * 3600 + em * 60 +es;
	int ans = (sum2 - sum1) / n;
	rh = ans / 3600;
	ans %= 3600;
	rm = ans / 60;
	rs = ans % 60;
	printf("%d:%d:%d\n", rh, rm, rs);
    return 0;
}