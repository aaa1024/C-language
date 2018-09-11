#include<stdio.h>
int f(int x){
	int cnt=1,i;
	for(i=2;i<=x;i++){
		int c=0;
		while(x%i==0){
			x/=i;
			c++;
		}
		cnt*=c+1;
	}
	return cnt;
}
int main()
{
	freopen("out.txt", "w", stdout);
	int sum = 0;
	for (int x= 1; x <= 1000000000; x++){
		
		sum+=f(x);
		printf("%d, ", sum);
		if (x % 20 == 0){
			printf("\n");
		}
	}
	return 0;
}