
#include<stdio.h>

int main()
{
    double num;
    int n;
    printf("Please input num and n: \n");
    scanf("%lf%d",&num,&n);
    printf("Output:\n");
    printf("%.*f\n",n,num);
    return 0;
}
