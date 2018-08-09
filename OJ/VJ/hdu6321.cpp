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
int ans[maxn + 5];
int main(int argc, char * argv[]) {
	int a, b;

	for (int i = 1; i <= maxn + 1; i++){
		int a = i, flag = 1;
		while (a > 0){
			if (a % 10 == 4 || a % 100 == 62){
				flag = 0;
				break;
			}
			a /= 10;
		}
		ans[i] = flag;
		//printf("%d %d\n", i, flag);
	}
	while (cin >> a >> b && (a || b)){
		int cnt = 0;
		for (int i = a; i <= b; i++){
			if (ans[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}