#include<stdio.h>
int main()
{
    int a[11],b;
    int count=0;
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=1;i<=10;i++)
    {
        if(a[i]<=b+30)
            count++;
    }
    printf("%d",count);
}
