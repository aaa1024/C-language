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
#define maxn 100005
int main(int argc, char * argv[]) {
	int n;
	while (cin >> n){
		int cnt = 0;
		pair <int, int> a[maxn];
		int mark[maxn];
		ms(mark);
		for (int i = 0; i < n; i++){
			cin >> a[i].first >> a[i].second;
		}
	//	sort(a, a + n);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (i == j) continue;
				if (a[i].first <= a[j].first && a[i].second <= a[j].second){
					cnt++;
					break;
				}
			}
	/*		if (a[i].first <= a[i + 1].first && a[i].second <= a[i + 1].second){
				cnt++;
			}
	*/
		}
/*
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (i == j) continue;
				if (mark[i] == 1) continue;
				if (a[i].first <= a[j].first && a[i].second <= a[j].second){
					cnt++;
					mark[i] = 1;
				}
			}
		}
*/
		cout << cnt << endl;
	}
    return 0;
}