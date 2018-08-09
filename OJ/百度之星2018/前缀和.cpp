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
#define maxn 1000000
#define LOCAL
int sum[100], a[100];
int n;
int init() {
    for(int i = 1; i <= n; i++) sum[i] = sum[i-1] + a[i];
}
int get(int l, int r) {
    return sum[r] - sum[l-1];
}

int main(int argc, char * argv[]) {
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	init();
	for (int i = 0; i < 3; i++){
		int l, r;
		cin >> l >> r;
		printf("%d\n", get(l, r));
	}
    return 0;
}