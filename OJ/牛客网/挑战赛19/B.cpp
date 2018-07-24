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
	int r, c, x, y, z;
	while (cin >> r >> c >> x >> y >> z){
		int a[505][505];
		int sum = 0, cnt0 = 0;
		for (int i = 1; i <= r; i++){
			for (int j = 1; j <= c; j++){
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= x; i++){
			for (int j = 1; j <= y; j++){
				if (a[i][j] == 0)	cnt0++;
					sum += a[i][j];
			}
		}
		for (int i = 1; i <= r; i++){
			for (int j = 1; j <= c; j++){
				
			}
		}
	}
    return 0;
}