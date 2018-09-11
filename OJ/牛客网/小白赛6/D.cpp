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
#define maxn 100
#define LOCAL

int main(int argc, char * argv[]) {
//	read("in.txt");
	int num[maxn];
	int c[100];
	int t = 'a';
	int n, m, x;
	while (~scanf("%d%d", &n, &m)){
		ms(num);
		ms(c);
		char s[maxn];
		scanf("%s", s);
		for (int i = 0; i < n; i++){
			c[s[i] - 'a']++;
			num[i] = c[s[i] - 'a'];
		}
		for (int i = 0; i < m; i++){
			scanf("%d", &x);
			x--;
			printf("%d\n", num[x]);
		}
	}
    return 0;
}