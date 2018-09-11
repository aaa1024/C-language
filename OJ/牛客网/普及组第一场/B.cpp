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
	int n, m, T;
	while (cin >> n >> m >> T){
		string s;
		cin >> s;
		int q;
		cin >> q;
		pair<int, int> p[100007];
		for (int i = 0; i < q; i++){
			cin >> p[i].first >> p[i].second;
		}
		int x = 1, y = 1;
		for (int t = 0; t < T; t++){
			for (int i = 0; i < s.size(); i++){
				if (s[i] == 'D'){
					x = (x + 1) % n ? (x + 1) % n: (x + 1);
				}
				else if (s[i] == 'U'){
					x = (x - 1) ? (x - 1) % n : n;
				}
				else if (s[i] == 'L'){
					y = (y - 1) ? (y - 1) % m : m;
				}
				else if (s[i] == 'R'){
					y = (y + 1) % m;
				}
				//printf("%d %d\n", x, y);
			}
		}
		int ansX, ansY;
		for (int i = 0; i < q; i++){
			ansX = (x - 1 + p[i].first) % n ? (x - 1 + p[i].first) % n: n;
			ansY = (y - 1 + p[i].second) % m ? (y - 1 + p[i].second) % m : m;
			printf("%d %d\n", ansX, ansY);
		}
	}
    return 0;
}