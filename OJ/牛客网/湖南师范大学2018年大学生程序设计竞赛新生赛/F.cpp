#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b, n;
	while (cin >> a >> b >> n){
		int flag = 0;
		int sum = abs(a) + abs(b);
		if (sum % 2 == 0){
			if (sum <= n && n % 2 == 0)
				flag = 1;
		}
		else{
			if (sum <= n && n %2 == 1)
				flag = 1;
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}