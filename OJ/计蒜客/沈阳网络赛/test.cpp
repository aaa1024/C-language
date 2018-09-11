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

int f(int q)
{
	int c=q;
	while(c>=10)
	{
		if(c%3==0)return 0;
		if(c%10!=1&&c%10!=3&&c%10!=7)return 0;
		if(c%10==(c%100)/10&&c%10!=1)return 0;
		c/=10;
	}
	if (c%10!=1&&c%10!=3&&c%10!=7&&c%10!=2&&c%10!=5)return 0;
	for(int i=2;i*i<=q;i++)if(q%i==0)return 0;
	return 1;
}
int main(int argc, char * argv[]) 
{
    int i;
 
    for(i=0;i<100000;i++)if(f(i))printf("%d\n",i);
    return 0;
}