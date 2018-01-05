#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a, b;
    int t, x;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}
