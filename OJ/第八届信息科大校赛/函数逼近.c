#include <stdio.h>
#include <math.h>
int fac(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return n*fac(n-1);
}
int main()
{
    double x;
    double sinx, xsinx = 0;
    int n = 1, k = 0;
   // printf("%lf\n", pow(100,3));
    scanf("%lf", &x);
    sinx = sin(x);
    while(abs(sinx - xsinx) > 0.000001)
    {
        xsinx += pow((-1), k)*pow(x,n)/(double)fac(n);
        printf("%lf %lf\n", sinx, xsinx);
        n += 2;
        k++;
    }

    printf("%.6f %d\n",xsinx, k-1);
    return 0;
}
