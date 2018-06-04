#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    double x[100],y[100],s=0;
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%lf%lf",&x[i],&y[i]);
    for(i=1; i<n; i++)
        s+=x[i]*y[i+1];
    s+=x[n]*y[1];
    for(i=2; i<=n; i++)
        s-=x[i]*y[i-1];
    s-=x[1]*y[n];
    s/=2;
    printf("%d\n",(int)(abs(s + 0.5)));
    return 0;
}
