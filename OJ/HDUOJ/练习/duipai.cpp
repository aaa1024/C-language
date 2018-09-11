#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int ans[1000];
	ans[1] = 1;
	ans[2] = 1;
	int a, b, n;
	while (1){
		cin >> a >> b >> n;
		for (int i = 3; i <= n; i++){
			ans[i] = (ans[i - 1] * a + ans[i - 2] * b) % 7;
			printf("ans[%d] = %d\n", i, ans[i]);
		}
		printf("%d\n", ans[n]);
	}
}