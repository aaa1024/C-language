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
#define maxn 10000007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	string a;
	while (cin >> a){
		int sum = 0;
		int b[100];
		for (int i = 0; i < 12; i++){
			b[i] = a[i] - '0';
		}
		for (int i = 0; i < 12; i++){
			if (i % 2 == 0){
				sum += 1 * b[i];
			}
			else {
				sum += 3 * b[i];
			}
		}
		int ans = 10 - (sum % 10);
		if (ans == 10) ans = 0;
		cout << ans << endl;
	}
    return 0;
}