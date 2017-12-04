#include<stdio.h>

int deal(int (*a)[2],int n);
int main()
{
    int a[100][2];
    int i,n;

    scanf("%d",&n);
    deal(a,n);
    return 0;
}

int deal(int (*a)[2],int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        a[i][0]=i;
        a[i][1]=(i+3)%3;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i][1]==0)
            continue;
        printf("%d\n",a[i][0]);
    }
}
