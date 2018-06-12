#include <iostream>
using namespace std;
int f(int m, int n){
	int a = 1, b = 1;
	for (int i = 1; i <= m; i++){
		a *= i;
	}
	for (int i = 1; i <= m - n; i++){
		b *= i;
	}
	return a / b;
}
int main(){
	int m, n;
	while (cin >> m >> n){
		if (!m && !n) break;
		cout << f(m, n) << endl;
	}
}
