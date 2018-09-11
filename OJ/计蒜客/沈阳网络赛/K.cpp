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
int a[100]={1,2,3,5,7,11,13,17,23,31,37,53,71,73,113,131,
	137,173,311,317};
int main(int argc, char * argv[]) 
{
	int t,cnt=1,i;
   	char n[200];
    scanf("%d",&t);
    while(t--)
	{
	    scanf("%s",n);	
	    if(strlen(n)>=4)
	    {
	    	printf("Case #%d: %d\n",cnt,317);
			cnt++;
	    }
	    else{
	    	int nn=0;
	    	for(i=0;i<strlen(n);i++)
	    	{
	    		
	    		
	    		nn*=10;
	    		nn+=n[i]-'0';
	    	}
	    	if(nn>=317)
			{
				printf("Case #%d: %d\n",cnt,317);
				cnt++;
			}
			else
			{
	   		for(i=0;a[i]<=nn;i++);
	    	
		   printf("Case #%d: %d\n",cnt,a[i-1]);
			cnt++;
		}
		}
    }
    return 0;
}