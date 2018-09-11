#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	long long int n, a;
	while (t--){
		scanf("%lld%lld", &n, &a);
		if (n > 2){
			printf("-1 -1\n");
			continue;
		}
		else if (n == 1){
			printf("%lld %lld\n", (long long)1, (long long)1 + a);
		}
		else if (n == 0){
			printf("%d %d\n", 0, 1);
		}
		else if (a % 2 == 1){
			long long int b = a / 2;
			printf("%lld %lld\n", 2 * b * b + 2 * b, 2 * b * b + 2 * b + 1);
		}
		else{
			long long int b = a / 2;
			printf("%lld %lld\n", b * b - 1, b * b + 1);
		}
	}
	return 0;
}
