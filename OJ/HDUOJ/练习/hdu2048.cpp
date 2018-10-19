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
	int t, n;
	cin >> t;
	double ans[25];
	ans[1] = 0;
	ans[2] = 1;
	for (int i = 3; i <= 23; i++){
		ans[i] = (i - 1) * (ans[i - 1] + ans[i - 2]);
	}
	while (t--){
		cin >> n;
		double fac = 1;
		for (int i = 1; i <= n; i++){
			fac *= i;
		}
		printf("%.2lf%%\n", ans[n] / fac * 100);
	}
    return 0;
}