#include<stdio.h>
int f(int n,int x);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",f(a,b));
    return 0;
}
int f(int n,int x)
{
    if(n==0) return 1;
    else if (n==1) return x;
    else
    {
        return ((2*n-1)*x-f(n-1,x)-(n-1)*f(n-2,x)/n);
    }
}
