#include<stdio.h>
int main()
{
    int x,y,i;
    int sum=0;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)//意思就是i=x,x+1...i=y
    {
        if(i%2!=0)
            sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
