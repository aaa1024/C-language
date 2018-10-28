#include <iostream>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		int t = 1;
		int sum = 0;
		for (int i = 1; i <= n; i++){
			t *= i;
			sum += t;
		}
		cout << "sum=" << sum << endl;
	}
	return 0;
}