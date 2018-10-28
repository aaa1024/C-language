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
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define maxn 100007
const int inf = 0x3f3f3f3f;
unordered_map<ll, ll> vis;
ll a[maxn];
ll n;
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while (cin >> n){
    	vis.clear();
    	ll hi = -1;
    	for (ll i = 1; i <= n; i++){
    		cin >> a[i];
    		hi = max(hi, a[i]);
    		vis[a[i]]++;
    	}
    	ll ret = 0;
    	for (ll i = 1; i <= n; i++){
    		vis[a[i]]--;
    		for (int j = 1; j * j <= 2e5; j++){
    			int t = j * j - a[i];
    			if (t <= 0){
    				continue;
    			}
    			if (t > hi){
    				break;
    			}
    			if (vis.find(t) != vis.end()) ret += vis[t];
    		}
    	}
    	cout << ret << endl;
    }
    return 0;
}