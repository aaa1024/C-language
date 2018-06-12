#include <iostream>
using namespace std;
int gcd(int m, int n){
	if (m % n == 0) return n;
	else return gcd(n, m % n);
}
int main(){
	int n, m;
	while (cin >> n >> m){
		cout << gcd(n, m) << endl;
	}
	return 0;
}
