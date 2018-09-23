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
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	char a[100000];
	long long b[100000];
	int T;
	long long cnt,p;
	scanf("%d",&T);
	while(T--){
		int i;
		long long sum=1;
		p=2;
		scanf("%s",a);
		int len = strlen(a);
		for(i=0;i<len;i++)b[i]=a[i]-'0';
		b[len-1]--;
		int bb=0;
		for(i=0;i<len;i++){
			bb*=10;
			bb+=b[i];
			bb%2
			=M-1;
		}

		while (bb > 0) {
		if (bb % 2 == 1)
			sum = (sum * p) % M;
 
		bb /= 2;
		p = (p * p) % M;
	}
		printf("%lld\n",sum);
	}
	
    return 0;

}