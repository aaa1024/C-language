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
    //freopen("A.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t;
	cin >> t;
	long long n, x, y, d;
	while (t--){
		long long ans = 0;
		long long finalout = inf;
		cin >> n >> x >> y >> d;
		if ((y - x) % d == 0){
			cout << abs(y - x) / d << endl;
		}
		else{
			if ((y - 1) % d == 0){
				ans += (y - 1) / d;
				ans += (x) / d;	
			//	cout << ans << endl;
				if (ans < finalout){
					finalout = ans;
				}
				ans = 0;
			}
			if ((n - y) % d == 0){
				ans += (n - x) / d;
				ans += (n - y) / d;
				if (ans < finalout){
					finalout = ans;
				}
			}
			if (finalout != inf){
				cout << finalout << endl;
			}
			else{
				cout << -1 << endl;
			}
		}
	}
    return 0;
}