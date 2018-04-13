#include<stdio.h>
int main()
{
    int a, b, t, x;
    scanf("%d%d", &a, &b);
    x = a;
    if (a < b)
    {
        x = b;
    }
    t = gcd(a, b);
    while(1)
    {
        if (x % a == 0 && x % b == 0)
        {
            break;
        }
        x += t;
    }
    printf("%d\n", x);
    return 0;
}

int gcd(int a, int b)
{
    if (a % b == 0) return a;
    else return gcd(b, a % b);
}
