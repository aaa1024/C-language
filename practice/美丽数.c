#include<stdio.h>
int main()
{
    int n,i,k=0;
    int b[10001];
    while(1){
    printf("Please input n:");
    scanf("%d",&n);
    if(n>10000||n<1)
    {
        if(n==0)
        {
            return 0;
        }
        printf("Input Error!\n");
        return 0;
    }
    else
    {
        for(i=1;i<=10000;i++)
        {
            if(i%3==0||i%5==0)
            {
                b[++k]=i;
            }
        }
    }
    printf("Output:\n");
    printf("The ans is:%d\n",b[n]);
    }
}
