#include <stdio.h>
#include <math.h>
double p(double a)
{
  //  printf("%lf\n", a * a);
    return a * a;
}
int main()
{
    double x1, x2, y1, y2;
    double d;

    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
    //    printf("%lf%lf%lf%lf\n", x1, x2, y1, y2);
    printf("%.2lf\n", sqrt(p(x1 - x2) + p(y1 - y2)));

    }
    return 0;

}
