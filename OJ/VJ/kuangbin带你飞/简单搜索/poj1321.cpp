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
#define read(x) freopen(x, "r", stdin)
const int inf = 0x3f3f3f3f;
#define maxn 100
#define LOCAL
int cnt = 0;
int n, k;
int sum = 0;
string s[maxn];
bool rf[maxn] = {true}, cf[maxn] = {true};
void dfs(int x, int sum){
	if (sum == k){
		cnt++;
		return;
	}
	if (x > n){
		return;
	}

	for (int i = 0; i < n; i++){
			if (s[i][x] == '#' && !rf[i] && !cf[x]){
				rf[i] = 1;
				cf[x] = 1;
				dfs(x + 1, sum + 1);
				rf[i] = 0;
				cf[x] = 0;
			}
	}
	dfs(x + 1, sum);
}
int main(int argc, char * argv[]) {
//	read("in.txt");

//	cout << c(5, 3);
	while (cin >> n >> k && (n != -1 || k != -1)){
		ms(rf);
		ms(cf);
		cnt = 0;
		sum = 0;
		rep(i, n){
			cin >> s[i];
		}
		dfs(0, 0);
		cout << cnt << endl;
	}
    return 0;
}