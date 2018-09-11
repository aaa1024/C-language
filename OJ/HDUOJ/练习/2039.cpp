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
	int m;
	cin >> m;
	while (m--){
		double a[5];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (a[2] - a[0] < a[1] && a[0] + a[1] > a[2]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
    return 0;
}