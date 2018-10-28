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
		int m;
		cin >> m;
		int a[10000];
		for (int i = 0; i < m; i++){
			cin >> a[i];
		}
		int ha;
		cin >> ha;
		for (int i = 0; i < m; i++){
			if (a[i] != ha) cout << a[i] << " ";
		}
		cout << endl;
	}
    return 0;
}