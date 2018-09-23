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

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n,c,flag;
		scanf("%d%d",&n,&c);
		int a[100000],b[100000];
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum1+=a[i];
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
			sum2+=b[i];
		}
		if(sum1+c-sum2<0)printf("-1\n");
		else{
			int sum=c;
			flag=0;
			for(int i=0;i<n;i++){
				sum+=a[i]-b[i];
				if(sum<0){
					flag=i+1;
					sum=c;
				}
			}
			printf("%d\n",flag+1);
		}
		
	}
    return 0;
}