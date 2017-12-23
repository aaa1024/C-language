#include<stdio.h>
int main()
{
    int n, i, sum = 1;

    printf("please input n:");
    scanf("%d",&n);
    printf("Output:\n");
    for(i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("%d\n",sum);
    return 0;
}
