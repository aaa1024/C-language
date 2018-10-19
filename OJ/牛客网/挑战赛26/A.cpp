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
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define maxn 1007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	ll n, ans = 0;
	ll x[maxn], y[maxn];
	while (cin >> n){
		for (int i = 1; i <= n; i++){
			cin >> x[i] >> y[i];
		}
		for (int i = 1; i <= n; i++){
			ll r;
			int cnt = 0;
			if (i != n) {
				r = (x[i] - x[i + 1]) * (x[i] - x[i + 1]) + (y[i] - y[i + 1]) * (y[i] - y[i + 1]);
			}
			else {
				r = (x[i] - x[i - 1]) * (x[i] - x[i - 1]) + (y[i] - y[i - 1]) * (y[i] - y[i - 1]);
			}
			for (int j = 1; j <= n; j++){
				if (i == j) continue;
				if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) == r){
					cnt++;
				}
			}
			if (cnt == n - 1){
				ans = i;
				break;
			}
		}
		if (ans)cout << ans << endl;
		else cout << "-1" << endl;
	}
    return 0;
}