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
struct problem
{
	int time;
	int hard;
};
bool cmp(problem a, problem b){
	return a.time < b.time;
}
int main(int argc, char * argv[]) 
{
    
    
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, t;
	while (cin >> n >> t){
		int a, b;
		int cnt1 = 0, cnt2 = 0;
		int t1 = t, t2 = t;
		cin >> a >> b;
		problem p[maxn];
		for (int i = 0; i < n; i++){
			cin >> p[i].time;
		}
		for (int i = 0; i < n; i++){
			cin >> p[i].hard;
		}
	//	sort(p, p + n, cmp);
		for (int i = 0; i < n; i++){
			if (p[i].hard < a){
				if (t1 >= p[i].time){
					cnt1++;
					t1 -= p[i].time;
				}
			}
		}
		for (int i = 0; i < n; i++){
			if (p[i].hard < b){
				if (t2 >= p[i].time){
					cnt2++;
					t2 -= p[i].time;
				}
			}
			else {
				if (t2 >= 2*p[i].time){
					cnt2++;
					t2 -= 2*p[i].time;
				}
			}
		}
		cout << cnt1 << " " << cnt2 << endl;
	}
    return 0;
}