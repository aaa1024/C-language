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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 1000000
#define LOCAL

int main(int argc, char * argv[]) {
	freopen("tree.in", "r", stdin);
	int t,m,n,k,i,j;
	int a[50001],b[50001],l[50001][3];
	scanf("%d",&t);
	for(i=1;i<=t;i++)b[i]=1;
	for(i=0;i<t-1;i++)
	{
		scanf("%d%d%d",&l[i][0],&l[i][1],&l[i][2]);
		b[l[i][0]]=0;
    }
    for(j=1;!b[j];j++);
    a[j]=0;
    for(i=0;i<t-1;i++)
    {
    	a[l[i][0]]=a[l[i][1]]+l[i][2];
    }
    int mm=a[1];
    for(i=2;i<=t;i++)if(mm<a[i])mm=a[i];
    printf("%d\n",mm);
    return 0;
}