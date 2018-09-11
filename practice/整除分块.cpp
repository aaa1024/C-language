#include <iostream>
using namespace std;
int main(){
	int n, ans = 0, ans2 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		ans2 += n / i;
		printf("%d\n", n / i);
	}
	for(int i=1,r;i<=n;i=r+1){
	    r=n/(n/i);
	    ans+=(r-i+1)*(n/i);
	}
	cout << ans << endl;
	cout << ans2 << endl;
	return 0;
}