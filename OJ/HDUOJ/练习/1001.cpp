#include <cstdio>
int main(){
	long long int n;
	int k = 0;
	while (scanf("%lld", &n) != EOF){
		long long int sum = (1 + n) * n / 2;
		printf("%lld\n", sum);
		printf("\n");
	}
	return 0;
}