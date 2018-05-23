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

const int maxn = 55;
int n;
map<string, int> cnt;
char tmp[maxn];

signed main() {
	// freopen("in", "r", stdin);
	while(~scanf("%d", &n)) {
		cnt.clear();
		for(int i = 0; i < n; i++) {
			scanf("%s", tmp);
			cnt[tmp]++;
		}
		for(map<string, int>::iterator it = cnt.begin(); it != cnt.end(); it++) {
			cout << it->first << " " << it->second << endl;
		}
	}
	return 0;
}
