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
#define maxn 1000
#define LOCAL

int main(int argc, char * argv[]) {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF){
		int f[maxn], k = m;
		int l, r, flag = 1;
		ms(f);
		for (int i = 0; i < n; i++){
			cin >> l >> r;
			for (int j = l; j <= r; j++){
				if (!f[j]){
					f[j] = 1;
					k--;
				}
			}
		}
		if (k){
			cout << k << endl;
			for (int i = 1; i <= m; i++){
				if (f[i] == 0){
					if (flag){
						cout << i;
						flag = 0;
					}
					else{
						cout << " " << i;
					}
				}
			}
		}
		else{
			cout << 0;
		}
		cout << endl;
	}
    return 0;
}