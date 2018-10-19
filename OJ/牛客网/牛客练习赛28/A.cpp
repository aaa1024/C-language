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

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, m, k, s;
	pair<int, string> p[30];
	while (cin >> n >> m){
		for (int i = 0; i < n; i++){
			cin >> p[i].second; //second代表名字
			cin >> p[i].first; //first代表出生年月日
		}
		sort(p, p + n); //按照出生年月日排序
		for (int i = 0; i < m; i++){
			cin >> k >> s;
			for (int i = 0; i < n; i++){
				if (p[i].first % 10000 == s){
					k--;
				}
				if (k == 0){
					cout << p[i].second << endl;
					break;
				}
			}
		}
	}
    return 0;
}