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
#define M 1000000007
int len;
char a[100000];
void strre(){
	char b[100000];
	for(int i=0;i<len;i++){
		b[len-i-1] = a[i];
	}
	strcpy(a, b);
}
void f(char a[]){
	for(int i=len-1;i>0;i--){
		a[i-1]+=10*((a[i]-'0')%2);
		a[i]=(a[i]-'0')/2+'0';
	}
	a[0]=(a[0]-'0')/2+'0';
	if(a[len-1]=='0')
	{
		a[len-1]='\0';
		len--;
	}
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	
	int T;
	long long cnt,p;
	scanf("%d",&T);
	while(T--){
		cnt=1;
		p=2;
		scanf("%s",a);
		
		len = strlen(a);
		strre();
		a[0]--;
		int i=0;

		while(a[i]<'0')
		{
			a[i]='9';
			a[i+1]--;
			i++;
		}
		i=len-1;
		while(a[i]=='0')i--;
		a[i+1]='\0';
		len = strlen(a);
	//	printf("a[n]=%s\n",a);
		while(len>0){
			if((a[0]-'0')%2==1){
				a[0]--;
				cnt*=p;
				cnt%=M;
			}

			f(a);
			p*=p;
			p%=M;
		}
		printf("%lld\n",cnt);
	}
	
    return 0;

}