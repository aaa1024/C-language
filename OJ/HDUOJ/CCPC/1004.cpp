#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	long long a, t;
	long long n;
	long long b, c;
	scanf("%lld", &t);
	while (t--){
		scanf("%lld%lld", &n, &a);
		if (n > 2){
			printf("-1 -1\n");
			continue;
		}
		else if (n == 1){
			printf("%lld %lld\n", (long long)1, (long long)1 + a);
		}
		else if (a % 2 == 1){
			long long k = (a * a - 1) / 2;
			printf("%lld %lld\n", k, k + 1); 
		}
		else if((a / 2) % 2 == 1){
			long long k = (a * a / 4 - 1) / 2;
			printf("%lld %lld\n", 2 * k, 2 * k + 2); 
		}
		else{
			long long k = a / 2;
			c = k * k + 1;
			b = c - 2;
			printf("%lld %lld\n", b, c);
		}
	}
	return 0;
}