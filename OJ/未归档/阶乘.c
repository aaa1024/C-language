#include<stdio.h>
int main()
{
    int i,n,m,t,s=1;
    scanf("%d%d",&n,&m);
    if(m-n>=10)
    {
        printf("0\n");
    }
    else
    {
        m=m%100;
        n=n%100;
        if(n>m) m+=100;

        for(i=n+1;i<=m;i++)
        {
            s*=i;
            s=s%100;
        }
    }
    printf("%d",s%100);
}
