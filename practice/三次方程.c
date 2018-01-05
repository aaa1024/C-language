#include <stdio.h>
#include <math.h>

/******start******/
double Resolve(double a,double b, double c, double d);
double f(double x, double a, double b, double c, double d);
double ff(double x, double a, double b, double c, double d);
/******end******/

int main()
{
	double a,b,c,d=0;
	double y;

	printf("input a b c d:");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	y = Resolve(a,b,c,d);

	printf("output:\n%.4lf\n", y);

	return 0;
}

/******start******/
double Resolve(double a, double b, double c, double d)
{
  //  printf("%lf %lf\n", a, d);
    double x0 = 1.0, x1;
    x1 = x0 - f(x0, a, b, c, d) / ff(x0, a, b, c, d);
    while(f(x1, a, b, c, d) >= 0.00001)
    {
        x1 = x0 - f(x0, a, b, c, d) / ff(x0, a, b, c, d);
        x0 = x1;
    }
    return x1;
}
double f(double x, double a, double b, double c, double d)
{
    double y = a*x*x*x + b*x*x + c*x +d;
    return y;
}
double ff(double x, double a, double b, double c, double d)
{
    double y = 3*a*x*x + 2*b*x + c;
    return y;
}
/******end******/
