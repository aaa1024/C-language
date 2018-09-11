#include <cstdio>
int main(){
//	freopen("in.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	for (int Case = 1; Case <= t; Case++){
		int a, n;
		scanf("%d", &n);
		int nowSum = 0;
		int MaxSum = -9999999;
		int startHere = 1;
		int endHere = 0;
		int startMax;
		int endMax;
		for (int i = 1; i <= n; i++){
			scanf("%d", &a);
			if (nowSum < 0){
				nowSum = a;
				startHere = i;
				endHere = i;
			}
			else{
				nowSum += a;
				endHere++;
			}
			if (nowSum > MaxSum){
				MaxSum = nowSum;
				startMax = startHere;
				endMax = endHere;
			}
		}
		printf("Case %d:\n", Case);
		printf("%d %d %d\n", MaxSum, startMax, endMax);
		if (Case != t){
			printf("\n");
		}
	}
	return 0;
}