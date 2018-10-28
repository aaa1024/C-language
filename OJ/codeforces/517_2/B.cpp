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
#define maxn 107
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	ll n;
	while (cin >> n){
		ll a[maxn], b[maxn];
		ll ans[10][maxn];
		bool flag = true;
		for (int i = 0; i < n - 1; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++){
			cin >> b[i];
		}
		//先求出前两项，可能有多组解
		int k = 0;
		for (int i = 0; i <= 3; i++){
			for (int j = 0; j <= 3; j++){
				if ((i | j) == a[0] && (i & j) == b[0]){
				//	printf("01: %d %d\n", i, j);
					ans[k][0] = i;
					ans[k][1] = j;
					k++;
				}
			}
		}
		if (k == 0){
			cout << "NO" << endl;
			continue;
		}
	//	for (int i = 0; i < k; i++){
	//		printf("%lld %lld\n", ans[i][0], ans[i][1]);
	//	}
	
	//	cout << "i:" << i << endl;
	//从第三项开始推,如果每一项和前一项运算符合要求，那就是他了
		for (int kk = 0; kk < k; kk++){
			//cout << "kk" << kk << endl;
			//printf("%lld %lld", ans[kk][0], ans[kk][1]);
			for (ll i = 2; i < n ; i++){
				ll j;
				for (j = 0; j <= 3; j++){
				//	printf("%lld %lld\n", (j | ans[kk][i - 1]), (j & ans[kk][i - 1]));
					if (((j | ans[kk][i - 1]) == a[i - 1]) && ((j & ans[kk][i - 1]) == b[i - 1])){
						ans[kk][i] = j;
				//		printf("ans[%d][%d] = %d\n", kk, i, j);
						flag = 1;
						break;
					}
				}
				//如果没有找到就完事了
				if (j == 4){
				//	cout << "NO" << endl;
					flag = 0;
					break;
				}
			}
			if (flag){
				cout << "YES" << endl;
				for (int i = 0; i < n; i++){
					printf("%lld ", ans[kk][i]);
				}
				cout << endl;
				break;
			}
			else{
				continue;
			}
		}
		if (!flag){
			cout << "NO" << endl;
		}
	}
    return 0;
}