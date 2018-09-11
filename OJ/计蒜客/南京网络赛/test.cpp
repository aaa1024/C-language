#include<stdio.h>
int prime[5000];
int ss[20000];
int judp(int p){
	int i;
	for(i=2;i*i<=p;i++)
		if(p%i==0)return 0;
	return 1;
}
int cnt=0;
int f(int n){
	if(n==1)return 1;
	int i,count=0,time=1;
	for(i=0;i<cnt;i++){
		count=0;
		while(n%prime[i]==0){
			n/=prime[i];
			count++;
			if(count==3)return 0;
		}
		if(count==1){
			time*=2;
		}
	}
	return time;
}
int main()
{
//	freopen("out.txt","w",stdout);
	for(int i=2;i<5000;i++){
		if(judp(i)){
			prime[cnt]=i;
			cnt++;
		}
	}

	int sum=0,cc=0,t, m;
	for(int t=0;t<1000;t++)printf("%d\n",prime[t]);
	return 0;
}