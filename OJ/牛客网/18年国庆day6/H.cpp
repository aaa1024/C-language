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

int main(int argc, char * argv[]) 
{
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n){
		int ans = 0;
		int a[1007];
		a[0] = 0;
		a[n + 1] = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int i = 0; i <= n; i++){
			if (a[i + 1] > a[i]){
				ans += abs(a[i + 1] - a[i]);
			}
			else{
				int t = 0;
				while (a[i + t] < a[i] && i + t <= n){
					t++;
				}
				cout << i << ":i + t" << i + t << endl;
				if (i + t == n + 1){
					ans += abs(a[i + 1] - a[i]);
				}
				else{
					ans += abs(a[i + t] - a[i]);
					i = i + t;
				}
			}
		}
		ans += a[n];
		cout << ans << endl;
	}
    return 0;
}