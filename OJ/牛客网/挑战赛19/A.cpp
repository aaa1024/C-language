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


/*
1 2 3 4

*/
int main(int argc, char * argv[]) 
{
//	freopen("A.in", "r", stdin);
	int n;
	while (cin >> n){
		int a[100005], x;
		string cmd;
		for (int i = 0; i < n; i++) cin >> a[i];
		int p; 
		cin >> p;
		for (int i = 0; i < p; i++){
			cin >> cmd >> x;
			if (cmd == "FIRST"){
				int t = x;
				int k;
				for (k = 0; k < n && a[k] != x; k++);
				for (int j = k - 1;j >= 0; j--){
					a[j + 1] = a[j];
				}
				a[0] = t;
			}
			if (cmd == "LAST"){
				int t = x;
				int k;
				for (k = 0; k < n && a[k] != x; k++);
			//		cout << k << endl;
				for (int j = k + 1; j < n; j++){
					a[j - 1] = a[j];
				}
				a[n - 1] = t;
			}
		}
		for (int i = 0; i < n; i++){
			if (i != 0) cout << " ";
			cout << a[i];
		}
		cout << endl;
	}
    return 0;
}