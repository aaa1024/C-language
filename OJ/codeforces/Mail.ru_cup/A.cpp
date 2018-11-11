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
	int n, s;
	int a[maxn], b[maxn];
	while (cin >> n >> s){
		int flag = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++){
			cin >> b[i];
		}
		if (a[1] == 0){
			cout << "NO" << endl;
			continue;
		}
		if (a[s] == 1){
			cout << "YES" << endl;
			continue;
		}
		if (b[s] == 0){
			cout << "NO" << endl;
			continue;
		}
		for (int i = s; i <= n; i++){
			if (a[i] == 1 && b[i] == 1){
				flag = 1;
				cout << "YES" << endl;
				break;
			}
		}
		if (!flag){
			cout << "NO" << endl;
		}
	}
    return 0;
}