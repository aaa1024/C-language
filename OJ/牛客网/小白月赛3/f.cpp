#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long int gcd2(long long int a, long long int b)
{
    while(b^=a^=b^=a%=b);
    return a;
}
long long int gcd(long long int a, long long int b)
{
    if (b % a == 0) return a;
    else return gcd(b, b % a);
}
int main(){
	long long int a, b, c, d;
	while (cin >> a >> b >> c >> d){
		long long int t = (b - a + 1) * (d - c + 1);
		long long int ans = 0;
		if (c >= a && c <= b && d >= b){
			ans = b - c + 1;
		}
		else if (d >= a && d <= b && c <= a){
			ans = d - a + 1;
		}
		else if(a >= c && b <= d){
			ans = b - a + 1;
		}
		else if (c >= a && d <= b){
			ans = d - c + 1;
		}
		else if (b < c){
			ans = 0;
		}
		else if (d < a){
			ans = 0;
		}
		if (ans < 0) ans = 0;

		if (!ans){
			cout << "0/1" << endl;
		}
		else {
			cout << ans / __gcd(ans, t) << "/" << t / __gcd(ans, t) << endl;
		}
	}
	return 0;
}