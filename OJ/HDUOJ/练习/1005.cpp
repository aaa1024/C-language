#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
//	freopen("in.txt", "r", stdin);
	int a, b, n;
	while (scanf("%d%d%d", &a, &b, &n) && (a || b || n)){
		if (n == 1 || n == 2){
			printf("1\n");
			continue;
		}
		int mark[8][8], ans[105];
		int x, y, start = 0, len;
		memset(mark, 0, sizeof(mark));
		mark[1][1] = 1;
		ans[1] = 1;
		ans[2] = 1;
		int i;
		for (i = 3; i <= 100; i++){
			ans[i] = (ans[i - 1] * a + ans[i - 2] * b) % 7;
		//	printf("ans[%d]:%d\n", i, ans[i]);
			x = ans[i - 1];
			y = ans[i];
			mark[x][y]++;
			if (mark[x][y] == 2 && !start){
				start = i;
			}
			if (mark[x][y] == 3){
				len = i - start;
				break;
			}
		}
		if (start > len){
			start -= len;
			start -= 2;
		}
		/*
		for (int j = 1; j <= start; j++){
			printf("%d, ", ans[j]);
			if (j == start) printf("\n");
		}
		for (int j = start + 1; j <= i; j++){
			printf("%d, ", ans[j]);
			if ((j - start) % len == 0) printf("\n");
		}
		printf("start:%d, len:%d\n", start, len);
		*/
		if (n <= start + len){
			printf("%d\n", ans[n]);
		}
		else{
			int t;
			if ((n - start) % len == 0) t = len;
			else t = (n - start) % len;
			printf("%d\n", ans[start + t]);
		//	printf("%d\n", start + (n - start) % len);
		}
	}
	return 0;
}