#include<stdio.h>
int fac(int n)
{
    if(n==1 || n==0) return 1;
    return n*fac(n-1);
}
int main()
{
    int n;
    printf("please input n:");
    scanf("%d",&n);
    printf("Output:\n%d\n",fac(n));
    return 0;
}
