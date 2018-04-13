#include <stdio.h>
#include <math.h>
double absolute(double a)
{
    if (a >= 0) return a;
    else return -a;
}
int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    {
        printf("%.2lf\n", absolute(a));
    }
    return 0;
}
