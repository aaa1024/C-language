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
	int n;
	while (cin >> n){
		int ans = 0;
		int flag = 0;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++){
			if (s[i] != '1'){
				flag = 1;
				ans = i;
				break;
			}
		}
		if (!flag){
			cout << n << endl;
		}
		else {
			cout << ans + 1<< endl;
		}
	}
    return 0;
}