//输入两个数字，判断这两个数字的和的翻转是否等于两个数字翻转的和
#include<stdio.h>
int reverse(int a);
int main()
{
    int a,b;
    int ra,rb,rs;
    printf("please input a,b:");
  //  scanf("%d,%d",&a,&b);
    printf("Output:\n");
    for(a=1;a<=100;a++)
        for(b=1;b<=100;b++)
    {
    ra=reverse(a);
    rb=reverse(b);
    rs=(reverse(ra+rb));
    if(a+b==rs)
    {
        printf("%d+%d=%d\n",a,b,a+b);
    }
    else
    {
        continue;
        printf("NO\n");
    }
    }
    return 0;
}
int reverse(int a)
{
    int b=0;
    while(a>0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}
