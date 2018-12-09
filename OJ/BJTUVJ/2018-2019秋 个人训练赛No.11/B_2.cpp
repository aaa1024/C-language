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

int main(int argc, char * argv[]) {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	long long n, a, b;
	while (cin >> n >> a >> b){
		long long ans_x = 1e18, ans_y = 1e18;
		long long ans = 1e18;
		if (a * b >= 6 * n){
			cout << a * b << endl;
			cout << a << " " << b << 

			endl;
			continue;
		}
		if (a == 1){
			cout << 6 * n << endl;
			cout << a << " " << 6 * n << endl;
			continue;
		}
		if (b == 1){
			cout << 6 * n << endl;
			cout << 6 * n << " " << b << endl;
			continue;
		}
		
		for (long long x = a; x <= a + sqrt(6 * (n + 1)); x++){
			long long y = (6 * n - 1) / x + 1;
			y = max(y, b);
			if (x * y < ans){
				ans = x * y;
				ans_x = x;
				ans_y = y;
			}
		}


		for (long long y = b; y <= b + sqrt(6 * (n + 1)); y++){
			long long x = (6 * n - 1) / y + 1;
			x = max(x, a);
			if (x * y < ans){
				ans = x * y;
				ans_x = x;
				ans_y = y;
			}
		}
		cout << ans << endl;
		cout << ans_x << " " << ans_y << endl;
	}
    return 0;
}
