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
	string a;
	while (cin >> n){
		cin >> a;
		int max = a[0], maxi = 0;
		if ((int)a.size() == 1){
			cout << a << endl;
			continue;
		}
		for (int i = 1; i < (int)a.size(); i++){
			if (a[i] > max){
				max = a[i];
				maxi = min(maxi, i);
			}
			if (a[i] < max){
				maxi = i - 1;
				break;
			}
		}
		for (int i = 0; i < maxi; i++){
			cout << a[i];
		}
		for (int i = maxi + 1; i < (int)a.size(); i++){
			cout << a[i];
		}
		cout << endl;
	}
    return 0;
}