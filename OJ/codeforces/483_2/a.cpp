#include <iostream>
#include <algorithm>
typedef long long ll;
#define maxn 1005
using namespace std;

int main(){
	ll n;
	ll a[maxn];
	cin >> n;
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	if (n % 2 == 0){
		cout << a[n / 2 - 1] << endl;
	}
	else{
		cout << a[n / 2] << endl;
	}
	return 0;
}