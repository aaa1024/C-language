#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool v[20000010];
int cnt[20000010];
void init()
{
    for(int i=2;i*i<=20000000;i++)
    {
        int now=i*i;
        v[now]=1;
        for(int j=2;j*now<=20000000;j++) v[j*now]=1;
    }
    cnt[0]=0;
    for(int i=1;i<=20000000;i++)
        if(v[i]==1) cnt[i]=cnt[i-1]+1;
        else cnt[i]=cnt[i-1];
}
int t,n;
int main()
{
    init();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int ans=0;int tim;
        for(int i=1;i<=n;i=tim+1)
        {
            tim=n/(n/i);
            int num=(tim-i+1-cnt[tim]+cnt[i-1]);
            ans+=num*(n/i);
            ans-=num*cnt[n/i];
        }
        printf("%d\n",ans);
    }
    return 0;
}