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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 4005
#define LOCAL
long long int a[maxn][4];
long long int b[maxn * maxn];
long long int c[maxn * maxn];
long long int n, t = 0;
int binary_search(int a){
	int r = t - 1;
	int l = 0;
	while (r - l >= 1){
		int m = (r + l) / 2;
		if (c[m] == a){
			int ans = 0;
			for (int i = l; i <= r; i++){
				if (c[i] == a) ans++;
			}
			return ans;
		}
		else if (a > c[m]){
			l = m + 1;
		}
		else{
			r = m;
		}
	}
	return 0;
}
void print(){
	printf("t = %d\n", t);
	for (int i = 0; i < t; i++){
		printf("%lld %lld\n", b[i], c[i]);
	}
}
int main(int argc, char * argv[]) {
	freopen("in.txt", "r", stdin);
	while (cin >> n){
		int temp;
		long long int ans = 0;
		t = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				b[t] = a[i][0] + a[j][1];
				c[t++] = a[i][2] + a[j][3];
			}
		}
		sort(c, c + t);
		for (int i = 0; i < t; i++){
			if (temp = binary_search(-b[i])){
				ans += temp;
			}
		}
		cout << ans << endl;
	}
    return 0;
}