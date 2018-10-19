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
	while(t--)
	{
		double p;
		scanf("%lf",&p);
		if(p==0||p==1){
			printf("1\n");
			continue;
		}
		int i;
		for(i=2;i<=10000;i++){
			double time = p*i;
			if(time-(int)time==0){
			printf("%d\n",i);
			break;
		}
		} 
    }
    return 0;
}