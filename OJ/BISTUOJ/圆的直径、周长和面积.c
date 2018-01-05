#include <stdio.h>
int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.2lf %.2lf %.2lf\n", r * 2, r * 2 * 3.1415926, r * r * 3.1415926);
    return 0;
}
