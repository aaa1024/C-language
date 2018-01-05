#include <stdio.h>

int min(int x, int y ,int z)
{
    int t = x;
    if(y < t) t = y;
    if(z < t) t = z;
    return t;
}

int max(int x, int y ,int z)
{
    int t = x;
    if(y > t) t = y;
    if(z > t) t = z;
    return t;
}
int main()
{
    int a, b, c, d, t;
    int sum;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d", &a, &b, &c);
        printf("%d %d %d %d %d\n", (a + b + c),
               (a + b + c) /3, (a * b *c),
               min(a , b, c), max(a, b, c));
    }
    return 0;
}
