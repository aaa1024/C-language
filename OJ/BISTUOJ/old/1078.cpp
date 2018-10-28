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



int main(int argc, char * argv[]) 
{
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int len = 0;
		int ans = 0;
		int ban = 0;
		if (n > 10){
			ans += 10;
			len += 5;
			ban += len;
			while (len < n){
			//	cout << len << " " << ans << endl;
				if ((n - len) / (len) >= 4){
				//	cout << "copy" << endl;
					ban = len;
					ans += 7;
					len += ban;
				}
				else{
				//	cout << "paste" << endl;
					ban = len;
					if (((n - len) % ban) == 0){
						ans += ((n - len) / (ban)) * 2;
					}
					else{
						ans += ((n - len) / (ban) + 1) * 2;
					}
					len += ban;
					len = n;
				}
			}
		}
		else{
			ans = n;
		}
		cout << ans << endl;
	}
    return 0;
}