#include <stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = 0;
	int temp = a;
	sum += a;
	for (int i = 1; i <= b - 1; i++){
		temp = temp * 10 + a;
		sum += temp;
		printf("%d %d\n", temp, sum);
	}
	return 0;
} 
