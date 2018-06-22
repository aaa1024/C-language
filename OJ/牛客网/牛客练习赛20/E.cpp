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
#define maxn 100005


int main(int argc, char * argv[]) 
{
	freopen("E.in", "r", stdin);
	int n;
	while (cin >> n){
	string ans = "YES";
	int a[maxn], cnt = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i] == 25){
			cnt++;
		}
		if (a[i] == 50){
			cnt--;
		}
		if (cnt < 0){
			ans = "NO";
			break;
		}
	}
	cout << ans << endl;
	}
    return 0;
}