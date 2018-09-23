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
int gao(int a){
	int ans = 1;
	for (int i = 2; i * i <= a; i++){
		if (a % i == 0){
			ans += i;
			ans += a / i;
		}
	}
	return ans;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int T, a, b;
	cin >> T;
	while (T--){
		cin >> a >> b;
		if (gao(a) == b && gao(b) == a){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
    return 0;
}