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
	long long n;
	long long a[3007];
	while (cin >> n){
		std::vector<long long> v;
		for (long long i = 1; i <= n; i++){
			cin >> a[i];
		}
		if (a[n] >= a[1]){
			cout << -1 << endl;
			continue;
		}
		v.push_back(a[1]);
		long long ans = a[1];
		for (int i = 2; i <= n; i++){
			if (a[i] < a[1]){
				v.push_back(a[i]);
			}
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++){
			ans = max(ans, ans ^ v[i]);
		}
		if (ans == 0){
			cout << -1 << endl;
			continue;
		}
		cout << ans << endl;
	}
    return 0;
}