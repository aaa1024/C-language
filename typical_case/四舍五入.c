#include<stdio.h>
//精确到小数点第n位的四舍五入
int main()
{
    double num;
    int n;
    printf("精确到小数点第n位的四舍五入\n");
    printf("Please input num and n: \n");
    scanf("%lf%d",&num,&n);
    printf("Output:\n");
    printf("%.*f\n",n,num);
    return 0;
}
