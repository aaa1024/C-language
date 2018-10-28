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
	int a[maxn];
	int n, res = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int dp[maxn];
	dp[0] = 1;
	for (int i = 0; i < n; i++){
		dp[i] = 1;
		for (int j = 0; j < i; j++){
			if (a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		res = max(dp[i], res);
	}
	cout << res << endl;
    return 0;
}