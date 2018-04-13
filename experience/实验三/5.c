#include<stdio.h>
int GCD(int m,int n);
int LCM(int m,int n);
void main()
{
    int x=0,y=0;
    int r=0;
    printf("input 2 int:\n");
    scanf("%d%d",&x,&y);

    printf("\nOutput:\n");

    r=GCD(x,y);
    printf("GCD:%d\n",r);

    r=LCM(x,y);
    printf("LCM:%d\n",r);
}

int GCD(int m,int n)
{
    int i;
    for(i=m<n?m:n;i>0;i--)
        if(m%i==0&&n%i==0)
            return i;
    return 1;
}

int LCM(int m,int n)
{
    int i;
    for(i=m>n?m:n;i<m*n;i++)
        if(i%m==0&&n==0)
            return i;
    return m*n;
}
