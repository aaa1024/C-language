#include <iostream>
using namespace std;
long long multiply(long long a, long long b, long long mode){
	long long ans = 0;
	while (b){
		if (b & 1){
			ans = (ans + a) % mode;
		}
		a = (a + a) % mode;
		b >>= 1;
	}
	return ans;
}
int main(){
	long long a, b, mode;
	cin >> a >> b >> mode;
	long long c = multiply(a, b, mode);
	cout << c << endl;
}