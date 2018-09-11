#include<stdio.h>
int f(int x){
	int cnt=0,i;
	for(i=1;i*i<x;i++)if(x%i==0)cnt+=2;
	if(i*i==x)cnt++;
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