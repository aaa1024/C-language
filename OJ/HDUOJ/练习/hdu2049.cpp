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
const int inf = 0x3f3f3f3f;
ll C(int n, int m){
	//求C n m，即从n个中取m个
	ll ans = 1;
	m = min(m, n - m);
	if (!m) return 1;
	for (ll i = 1; i <= m; i++){
		ans *= n--;
		ans /= i;
	}
	return ans;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t;
	ll n, m;
	cin >> t;
	ll dp[35];
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i < 35; i++){
		dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
	}
	while (t--){
		cin >> n >> m;
		cout << C(n, m) * dp[m] << endl;
	}
    return 0;
}