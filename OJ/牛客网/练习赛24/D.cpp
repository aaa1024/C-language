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
#define maxn 1000
#define LOCAL
int a[maxn], b[maxn]={0};
int n;
struct l 
{
	int left;
	int right;
	int cnt;
};
struct l line[maxn];
void dfs(int x)
{
	int i;
	for (i = 0; i < n - 1; i++){
		if (line[i].left == x && !b[line[i].right]){
			a[line[i].right] = a[line[i].left]+line[i].cnt;
			b[line[i].left]=1;
			dfs(line[i].right);
		}
		if (line[i].right == x && !b[line[i].left]){
			a[line[i].left] = a[line[i].right]+line[i].cnt;
			b[line[i].right]=1;
			dfs(line[i].left);
		}
	}
	if(i==n-1)return;
}
int main(int argc, char * argv[]) {
	read("tree.in");
	int i;
	scanf("%d",&n);
	ms(a);
	for(i=1;i<=n;i++)b[i]=1;
	for(i=0;i<n-1;i++){

		scanf("%d%d%d",&line[i].right,&line[i].left,&line[i].cnt);
		b[line[i].right]=0;
	}
	for(i=1;i<=n;i++)if(b[i])break;

	
	//ms(a);
/*
	b[1]=1;
	int t;
	int m=0;
	int count=n-1;
	while(count>0)
	{
		for(t=2;t<=n;t++)
		{
			for(i=0;i<n-1;i++)
			{
				if(line[i].left==t&&b[line[i].right]&&b[t]==0)
				{
					a[t]=a[line[i].right]+line[i].cnt;
					b[t]=1;
					count--;
					break;
				}
				if(b[t]==0&&line[i].right==t&&b[line[i].left])
				{
					a[t]=a[line[i].left]+line[i].cnt;
					b[t]=1;
					count--;
					break;
				}
			}
		}
    }
*/
	dfs(i);
    int m=-1;
    for(i=1;i<=n;i++)if(m<a[i])m=a[i];
    printf("%d\n",m);
    return 0;
}