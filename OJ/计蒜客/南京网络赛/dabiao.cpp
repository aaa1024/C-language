#include<stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
int prime[100001];
int cnt=0;
void oula(){
	int n = 100000;
    bool vis[100001];//保证不做素数的倍数 
    memset(vis, false, sizeof(vis));//初始化 
    memset(prime, 0, sizeof(prime));
    for(int i = 2; i <= n; i++)
    {
    	if (cnt >= 100001) break;
        if(!vis[i])//不是目前找到的素数的倍数 
        prime[cnt++] = i;//找到素数~ 
        for(int j = 0; j<cnt && i*prime[j]<=n; j++)
        {
            vis[i*prime[j]] = true;//找到的素数的倍数不访问 
            if(i % prime[j] == 0) break;//关键！！！！ 
        }
    }
}
int f(int n){
	if(n==1)return 1;
	int i,count=0,time=1;
	for(i=0;i<cnt;i++){
		if (prime[i] > n)
			break;
		count=0;
		while(n%prime[i]==0){
			n/=prime[i];
			count++;
			if(count>2)return 0;
		}
		if(count==1){
			time*=2;
		}
	}
	return time;
}
int main()
{
	oula();
	int n;
	//freopen("out.txt","w",stdout);
	while (cin >> n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=f(i);
	//	if(i%10000==0)printf("%d,",sum);
	//	if(i%200000==0)printf("\n");
	}
	printf("%d\n", sum);
	}
	return 0;
}