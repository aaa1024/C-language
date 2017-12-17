#include<stdio.h>
int main()
{
    int n,i=1;
    float sign=-1,sum=0,a,b=1.0;
    scanf("%d",&n);
    while(i<=n)
    {
        sign=(-1)*sign;
        a=sign*(1.0/i);
        sum=sum+a;
        i++;
    }
    printf("%.2f",sum);
    return 0;
}
