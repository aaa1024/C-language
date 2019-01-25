#include <iostream>
#include <cstdio>
#define maxn 100007
using namespace std;
int a[maxn];
int n, k;
bool ok(int w){
	int cnt = 1, cw = 0;
	for (int i = 1; i <= n; i++){
		if (w >= cw + a[i]){
			cw += a[i];
		}
		else{
			cw = a[i];
			cnt++;
		}
	}
	return cnt <= k;
}
int main(){
	while (cin >> n >> k){
		int lo = 0, hi = 1e9, mid;
		int ret;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			lo = max(lo, a[i]);
		}
		while (lo <= hi){
			mid = (lo + hi) >> 1;
			if (ok(mid)){
				ret = mid;
				hi = mid - 1;
			}
			else{
				lo = mid + 1;
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}