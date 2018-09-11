#include<stdio.h>
int main(){
	long long n,m,a[100000],i,x,t;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)scanf("%lld",&a[i]);
	long long s0=0;
	for(i=0;i<n;i++)s0+=a[i];
	while(m--)
	{
		scanf("%lld%lld",&x,&t);
		long long s=s0;
		x=a[x-1];
		while(t--){
			if(x>s)s+=1000000007;
			x=s-x;
			s*=n-1;
			s%=1000000007;	
		}
		printf("%lld\n",x);
	}
}