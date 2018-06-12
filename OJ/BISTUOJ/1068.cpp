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
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL
int prime[1100000],primesize,phi[11000000];
bool isprime[11000000];
void getlist(int listsize)
{
    memset(isprime,1,sizeof(isprime));
    isprime[1]=false;
    for(int i=2;i<=listsize;i++)
    {
        if(isprime[i])prime[++primesize]=i;
         for(int j=1;j<=primesize&&i*prime[j]<=listsize;j++)
         {
            isprime[i*prime[j]]=false;
            if(i%prime[j]==0)break;
        }
    }
}


int main(int argc, char * argv[]) 
{
	getlist(10000);
	int n;
	while (cin >> n){
		int b = 0;
		int mark1 = 0, mark2 = 0, mid;
		for (mark2 = 1; prime[mark2] <= n / 2;mark2++);
		mark1 = mark2 - 1;
		mid = mark2;
	//	cout << prime[mark2] << endl;
		for (;mark1>0;mark1--){
			for(mark2 = mid;;mark2++){
			//	printf("%d %d\n", prime[mark1], prime[mark2]);
				if(prime[mark1] + prime[mark2] > n){
					break;
				}
				if(prime[mark1] + prime[mark2] == n){
					b = 1;
					break;
				}
			}
			if (b)break;
		}
		printf("%d %d\n", prime[mark1], prime[mark2]);
	}
    return 0;
}