#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a,int b)
{
    while(b^=a^=b^=a%=b);
    return a;
}
int main(){
	int a, b, c, d;
	while (cin >> a >> b >> c >> d){
		int t = (b - a + 1) * (d - c + 1);
		int ans = 0;
		for (int i = a; i <= b; i++){
			for (int j = c; j <= d; j++){
				if ((i ^ j) == 0){
					ans++;
				}
			}
		}
		if (!ans){
			cout << "0/1" << endl;
		}
		else {
			cout << ans / gcd(ans, t) << "/" << t / gcd(ans, t) << endl;
		}
	}
}