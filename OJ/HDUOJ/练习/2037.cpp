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
	int n;
	while (scanf("%d", &n) != EOF && n){
		int cnt = 0;
		pair<int, int> p[105];
		for (int i = 0; i < n; i++){
			//second代表开始点，first代表结束点
			cin >> p[i].second >> p[i].first;
		}
		sort(p, p + n);
		int now = p[0].first;
		cnt++;
		for (int i = 1; i < n; i++){
			if (p[i].second >= now){
				now = p[i].first;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}