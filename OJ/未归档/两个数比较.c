#include<stdio.h>

int main()
{
    int a, b;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n",a > b ? a : b);
    }
    return 0;
}
