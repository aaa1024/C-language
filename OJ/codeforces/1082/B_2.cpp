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
#define maxn 100007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    freopen("B.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n){
		int ans = 0;
		int cntG = 0;
		int flag = 0;
		int totalCntG = 0;
		int totalCntS = 0;
		int a = 0, b = 0;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++){
			if (s[i] == 'G'){
				totalCntG++;
			}
			else if (s[i] == 'S'){
				totalCntS++;
			}
		}
		s += 'S';
		for (int i = 0; i <= n; i++){
			if (s[i] == 'G'){
				cntG++;
			}
			else{
				if (s[i + 1] == 'G'){
					a = cntG;
					cntG = 0;
				}
				else if (s[i - 1] == 'G'){
					b = cntG;
					cntG = 0;
					if (a != 0){
						flag = 1;
						ans = max(ans, a + b + 1);
					}
				}
				else{
					a = 0;
					b = 0;
				}
			}
		}
		if (flag){
			cout << ans << endl;
		}
		else{
			cout << totalCntG << endl;
		}
	}
    return 0;
}