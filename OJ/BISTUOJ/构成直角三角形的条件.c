#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int pd(double a, double b, double c)
{
    int t;
    if(a + b < c || a +c < b || b + c < a || a <= 0 || b <= 0 || c <= 0)
    {
        return 0;
    }
    else
    {
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
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

