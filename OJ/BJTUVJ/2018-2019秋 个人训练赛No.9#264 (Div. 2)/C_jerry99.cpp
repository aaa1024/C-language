#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int tmax=4e4+5;
int n,a[2005][2005];
ll sum1[tmax],sum2[tmax];
void test()
{
    int i,j;
    printf("\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            printf("%d %d:%I64d\n",i,j,sum1[i+j]+sum2[2005+i-j]-1ll*a[i][j]);

    return;
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
                sum1[i+j]+=1ll*a[i][j];
                sum2[2005+i-j]+=1ll*a[i][j];
                //主对角线整体偏移2005
            }
    ll ans=-1,ans2=-1,tmp;
    int x[3],y[3];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        if(((i+j)%2)==0)
        {
            tmp=sum1[i+j]+sum2[2005+i-j]-1ll*a[i][j];
            if(ans<tmp)
            {
                ans=tmp;
                x[1]=i;
                y[1]=j;
            }
        }
        else
        {
            tmp=sum1[i+j]+sum2[2005+i-j]-1ll*a[i][j];
            if(ans2<tmp)
            {
                ans2=tmp;
                x[2]=i;
                y[2]=j;
                //printf("%d %d sum=%I64d ans2=%I64d\n",i,j,sum1[i+j]+sum2[2005+i-j]-1ll*a[i][j],ans2);
            }
        }
        //printf("%d %d %I64d %I64d\n",i,j,ans,ans2);
    }
    printf("%I64d\n",ans+ans2);
    printf("%d %d %d %d",x[1],y[1],x[2],y[2]);
    //test();
    return 0;
}