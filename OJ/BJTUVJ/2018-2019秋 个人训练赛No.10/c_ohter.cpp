#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<iomanip>
#include<stack>
#include<map>
#include<set>
#include<cmath>
#define debug(x) cerr<<#x<<"="<<x<<endl
#define INF 0x7f7f7f7f
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
inline int init()
{
    int now=0,ju=1;char c;bool flag=false;
    while(1)
    {
        c=getchar();
        if(c=='-')ju=-1;
        else if(c>='0'&&c<='9')
        {
            now=now*10+c-'0';
            flag=true;
        }
        else if(flag)return now*ju;
    }
}
inline long long llinit()
{
    long long now=0,ju=1;char c;bool flag=false;
    while(1)
    {
        c=getchar();
        if(c=='-')ju=-1;
        else if(c>='0'&&c<='9')
        {
            now=now*10+c-'0';
            flag=true;
        }
        else if(flag)return now*ju;
    }
}
char s[2005];
int n,p,pos;
bool flag;
int main()
{
	n=init();p=init();
	scanf("%s",s+1);
	// 下标从1开始
	for(int i=n;i>=1;i--)
	{
		if(flag)break;
		for(int j=s[i]+1;j<='a'+p-1;j++)
		{
			if(i>2&&j!=s[i-1]&&j!=s[i-2])
			{
				s[i]=j;pos=i;
				flag=true;
				break;
			}
			else if(i==2&&j!=s[i-1])
			{
				s[i]=j;pos=i;
				flag=true;
				break;
			}
			else if(i==1)
			{
				s[i]=j;pos=i;
				flag=true;
				break;
			}
		}
	}
	if(flag)
	{
		for(int i=pos+1;i<=n;i++)
		{
			for(int j='a';j<='a'+p-1;j++)
			{
				if(i>2&&j!=s[i-1]&&j!=s[i-2])
				{
					s[i]=j;
					break;
				}
				else if(i==2&&j!=s[i-1])
				{
					s[i]=j;
					break;
				}
				else if(i==1)
				{
					s[i]=j;
					break;
				}
			}
		}
	}
	if(flag)
	{
		printf("%s",s+1);
	}
	else printf("NO\n");
	return 0;
}
/*
srO xudyh davidlee1999WTK linkct1999 zlser Orz
*/