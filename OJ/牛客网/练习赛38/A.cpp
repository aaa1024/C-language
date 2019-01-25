#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 100007
int main(){
	int n;
	double a[maxn], rp;
	while (cin >> n >> rp){
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a + 1, a + 1 + n);
		for (int i = n; i >= 1; i--){
			rp += ((a[i] + rp)/ 2);
		}
		printf("%.3lf\n", rp);
	}
}