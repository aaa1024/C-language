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
//	freopen("in.txt", "r", stdin);
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF){
		char s[maxn];
		scanf("%s", s);
		int R[maxn], B[maxn];
		int t1 = 0, t2 = 0;
		for (int i = 0; i < n; i++){
			if (s[i] == 'R'){
				R[t1++] = i + 1;
			}
			else{
				B[t2++] = i + 1;
			}
		}
		for (int i = 0; i < m; i++){
			char a;
			int b;
			getchar();
			scanf("%c%d", &a, &b);
			if (a == 'R'){
				if (b > t1){
					printf("-1\n");
				}
				else{
					printf("%d\n", R[b - 1]);
				}
			}
			else if(a == 'B'){
				if (b > t2){
					printf("-1\n");
				}
				else{
					printf("%d\n", B[b - 1]);
				}
			}
		}
	}
    return 0;
}