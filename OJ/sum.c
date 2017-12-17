#include<stdio.h>

int main()
{
    int n, i, sum = 0;

    while (scanf("%d",&n) != EOF)
    {
        sum = 0;
        for(i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
