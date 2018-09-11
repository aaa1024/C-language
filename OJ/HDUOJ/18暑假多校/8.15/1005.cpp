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
char a[4][4];
void solve(int d, char c){
	char t;
	if (d == 1 || d == 3){
		if (d == 3) d = 2;
		if (c == 'C'){
/*			t = a[1][1];
			a[1][1] = a[2][1];
			a[2][1] = a[2][2];
			a[2][2] = a[1][2];
			a[1][2] = t;
*/
			t = a[d][1];
			a[d][1] = a[d + 1][1];
			a[d + 1][1] = a[d + 1][2];
			a[d + 1][2] = a[d][2];
			a[d][2] = t;
		}
		else if (c == 'R'){
			t = a[d][1];
			a[d][1] = a[d][2];
			a[d][2] = a[d + 1][2];
			a[d + 1][2] = a[d + 1][1];
			a[d + 1][1] = t;			
		}
	}
	else if (d == 2 || d == 4){
		if (d == 2) d = 1;
		if (d == 4) d = 2;
		if (c == 'C'){
/*			t = a[1][1];
			a[1][1] = a[2][1];
			a[2][1] = a[2][2];
			a[2][2] = a[1][2];
			a[1][2] = t;
*/
			t = a[d][2];
			a[d][2] = a[d + 1][2];
			a[d + 1][2] = a[d + 1][3];
			a[d + 1][3] = a[d][3];
			a[d][3] = t;
		}
		else if (c == 'R'){
			t = a[d][2];
			a[d][2] = a[d][3];
			a[d][3] = a[d + 1][3];
			a[d + 1][3] = a[d + 1][2];
			a[d + 1][2] = t;
		}
	}
}
void print(){
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char * argv[]) {
//	read("in.txt");
	int T, d;
	char c;
	scanf("%d", &T);
	while (T--){
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= 3; i++){
			scanf("%s", a[i] + 1);
		}
		for (int i = 1; i <= n; i++){
			scanf("%d%c", &d, &c);
			solve(d, c);
		//	print();
		}
		print();
	}
    return 0;
}