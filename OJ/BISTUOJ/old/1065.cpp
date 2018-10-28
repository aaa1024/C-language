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
#define ms(s) memset(s, 0, sizeof(s)
const int inf = 0x3f3f3f3f;
#define LOCAL



int main(int argc, char * argv[]) 
{
	int n;
	while (cin >> n){
		if (n == 0) break;
		int a[1005];
		int ans = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int b;
		cin >> b;
		for (int i = 0; i < n; i++){
			if (a[i] == b) ans++;
		}
		cout << ans << endl;
	}
    return 0;
}