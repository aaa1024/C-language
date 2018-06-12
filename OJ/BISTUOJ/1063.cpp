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
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL



int main(int argc, char * argv[]) 
{
	int n;
	while (cin >> n){
		int a;
		int ans1 = 0, ans2 = 0;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				cin >> a;
				if (i == j) ans1 += a;
				if (i + j == n + 1) ans2 += a;
			}
		}
		printf("主对角线=%d\n", ans1);
		printf("副对角线=%d\n", ans2);
	}
    return 0;
}