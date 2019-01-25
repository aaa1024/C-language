#pragma comment(linker, "/STACK:1024000000,1024000000")
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
#define LOCAL



int main(int argc, char * argv[]) 
{
	//freopen("A.in", "r", stdin);
	int n, x, y, opt;
	while (cin >> n >> x){
		long long Opt[1000], Y[1000];
		for (int i = 1; i <= n; i++){
			cin >> Opt[i] >> Y[i];
		}
		for (int i = n; i >= 1; i--){
			opt = Opt[i];
			y = Y[i];
			if (opt == 1){
				x = x - y;
			}
			else if (opt == 2){
				x = x + y;
			}
			else if (opt == 3){
				x = x / y;
			}
			else if (opt == 4){
				x = x * y;
			}
		}
		cout << x << endl;
	}
    return 0;
}