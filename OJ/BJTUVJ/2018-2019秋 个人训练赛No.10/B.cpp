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
#define maxn 1007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n){
		int cnt = 0;
		int a[maxn];
		int unreadNum = 0;
		for (int i = 1; i <= n ;i++){
			cin >> a[i];
			if (a[i] == 1){
				unreadNum++;
			}
		}
		for (int i = 1; i <= n; i++){
			if (a[i] == 1){
				unreadNum--;
				cnt++;
				if (i != n - 1 && a[i + 1] == 0 && unreadNum != 0){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
    return 0;
}