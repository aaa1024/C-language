#include<stdio.h>
long long prime[5000];
long long ss[5010] = {
	
};
long long judp(long long p){
	long long i;
	for(i=2;i*i<=p;i++)
		if(p%i==0)return 0;
	return 1;
}
long long cnt=0;
long long f(long long n){
	if(n==1)return 1;
	long long i,count=0,time=1;
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
	for(long long i=2;i<5000;i++){
		if(judp(i)){
			prime[cnt]=i;
			cnt++;
		}
	}
	long long t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		long long sum=0;
		sum+=ss[n/10000-1];
		for(long long i=(n/10000)*10000+1;i<=n;i++){
			sum+=f(i);
		}
		printf("%lld\n",sum);
	}
	
	return 0;
}