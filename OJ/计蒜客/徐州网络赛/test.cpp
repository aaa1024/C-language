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
int f(int a){
	return a>0?a:-a;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	long long N,i;
    int T;
    scanf("%d",&T);
    while(T--){
   	 char a[1000000];
   	 char p;
   	 scanf("%lld %c",&N,&p);

   	 scanf("%s",a);
   	 long long cnt=N*2;
   	 for(i=0;a[i]!='\0'&&a[i]==p;i++);
   	 cnt-=i*2+(f(p-a[i])<10)-(i==N);
   	printf("%lld\n",cnt);
    }
    return 0;
}