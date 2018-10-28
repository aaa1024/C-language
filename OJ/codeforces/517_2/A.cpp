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
#define maxn 10000007
const int inf = 0x3f3f3f3f;


int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	ll w, h, k;
	while (cin >> w >> h >> k){
		ll ans = 0;
		for (ll i = 1; i <= k; i++){
			ans += (w - 4*(i - 1)) * (h - 4*(i - 1)) - (w - 2 - 4*(i - 1)) * (h - 2 - 4*(i - 1));
		}
		cout << ans << endl;
	}
    return 0;
}