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
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int flag = 0;
    ll x;
	ll a, b, c;
	ll p1, p2, q1, q2;
	ll ans;
	ll min = 1000000000;
	cin >> a >> b >> c;
	cin >> p1 >> p2;
	cin >> q1 >> q2;
	for (int y = -1000000; y < 1000000; y++){
		if ((c - b * y) % a == 0){
			flag = 1;
			x = (c - b * y) / a;
			ans = p2*x*x + p1*x + q2*y*y + q1*y;
			//printf("x%d y%d ans%d\n", x, y, ans);
			if (ans < min){
				min = ans;
			}
		}
	}
	if (!flag) cout << "Kuon" << endl;
	else printf("%lld\n", min);
    return 0;
}