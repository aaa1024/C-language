#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int pd(double a, double b, double c)
{
    if(a + b < c || a +c < b || b + c < a || a <= 0 || b <= 0 || c <= 0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int i, j;
    int t, len, n, m;
    double  a, b, c;
    char s[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        printf("%d\n", pd(a, b, c));
    }

    return 0;
}

