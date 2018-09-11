#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;

int prime[10007];//存素数 
bool vis[10007];
int n, cnt = 0;
void oula()
{
    n = 10000;
    memset(vis, false, sizeof(vis));//初始化 
    memset(prime, 0, sizeof(prime));
    for(int i = 2; i <= n; i++)
    {
        if(!vis[i])//不是目前找到的素数的倍数 
        prime[cnt++] = i;//找到素数~ 
        for(int j = 0; j<cnt && i*prime[j]<=n; j++)
        {
            vis[i*prime[j]] = true;//找到的素数的倍数不访问 
            if(i % prime[j] == 0) break;//关键！！！！ 
        }
    }
    
   
    
}
int pm[100];
int ct=-1;
void f(int m){
	int i;
	for(i=0;i<10000&&prime[i]*prime[i]<=m;i++){
		if(m%prime[i]==0){
			ct++;
		}
		while(m%prime[i]==0){
			pm[ct]=prime[i];
			m/=prime[i];
		}
	}
}
int main(int argc, char * argv[]) 
{
	oula();
	
	int n, m,j;
	while (scanf("%d%d", &n, &m) != EOF){
		ct=-1;
		ms(pm);
		f(m);
		long long sum = 0;
		for (int i = 1; i <= n; i++){
			for(j=0;j<=ct;j++)if(i%pm[j]==0)break;
			if(j==ct+1){
				sum+=i*i+i;
				sum%=1000000007;
			}
		}
		printf("%lld\n", sum);

	}
	
    return 0;
}