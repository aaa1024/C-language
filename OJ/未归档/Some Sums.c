#include <stdio.h>
int main()
{
    int n, a, b, t, i, sum = 0;
    scanf("%d%d%d", &n, &a, &b);
    for(i = 1; i <= n; i++)
    {
        if(s(i) >= a && s(i) <= b)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
int s(int n)
{
    int sum2 = 0;
    while( n > 0)
    {
        sum2 += n % 10;
        n /= 10;
    }

    return sum2;
}
