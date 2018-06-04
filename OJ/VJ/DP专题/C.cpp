#include <iostream>
#include <cmath>
#include <cstring>
#define maxn 10005
using namespace std;
int main(){
//	freopen("inputc.txt", "r", stdin);
	int k;
	while(cin >> k){
		if (k == 0) break;
		int dp[maxn];
		int a[maxn];
		int start = 0, end = 0, ans_start = 0, ans_end = 0, max = 0, flag = 0, flag2= 0;
		memset(dp, 0, sizeof(dp));
		memset(a, 0, sizeof(a));
		for (int i = 0; i < k; i++){
			cin >> a[i];
			dp[i] = a[i];
			if (a[i] >= 0) flag = 1;
		}
		for (int i = 0; i < k; i++){
			if (i >= 1)
				dp[i] = dp[i - 1] + a[i];
			if (dp[i] < 0){
				dp[i] = 0;
				start = i + 1;
			}
			
			if (dp[i] > max){
				flag2 = 1;
				max = dp[i];
				ans_start = start;
				ans_end = i;
			}
	//		printf("max = %d, dp[i] = %d, a[i] = %d\n", max, dp[i], a[i]);
		}
		if(flag)
		{
			if (flag2)
				printf("%d %d %d\n", max, a[ans_start], a[ans_end]);	
			else{
				printf("0 0 0\n");
			}
		}
		
		else
			printf("%d %d %d\n", 0, a[0], a[k - 1]);
	}
	return 0;
}
