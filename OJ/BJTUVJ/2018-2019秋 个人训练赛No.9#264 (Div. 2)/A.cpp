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
#define maxn 107
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, s;
	while (cin >> n >> s){
		int x[maxn], y[maxn];
		int min = inf, flag = 0;
		for (int i = 1; i <= n; i++){
			cin >> x[i] >> y[i];
		}
		for (int i = 1; i <= n; i++){
			if (s >= x[i]){
				if (s == x[i]){
					if (y[i] == 0){
						flag = 1;
					}
					continue;
				}
				if (y[i] < min){
					flag = 1;
					if (y[i] != 0){
						min = y[i];
					}
				}
			}
		}
		if (min != inf){
			cout << 100 - min << endl;
		}
		else{
			if (flag == 1){
				cout << 0 << endl;
			}
			else{
				cout << -1 << endl;
			}
		}
	}
    return 0;
}