#include <stdio.h>
#include <math.h>
/*
若a=0，则输出“not a quadratic”；
否则若方程有两个相等实根，输出“two equal roots:”和相等实根的值；
否则若方程有两个不等实根，输出“distinct real roots:”和两个不等实根，用空格隔开；
否则若方程有两个共轭复根，输出“complex roots:”和两个共轭复根，用空格隔开。
所有的实数输出请使用C语言的默认舍入方式保留4位小数。

*/
int main()
{
    double a, b, c;
    double diot;
    double sqtdt;
    printf("Please input a b c:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("Output:\n");
    if (a == 0)
    {
        printf("not a quadratic\n");
        return 0;
    }
    diot = b * b - 4 * a * c;
    if (diot == 0)
    {
        printf("two equal roots:\n%.4lf\n", -(b / 2 * a));
        return 0;
    }
    else if (diot > 0)
    {
        sqtdt = sqrt(diot);
        printf("distinct real roots:\n%.4lf %.4lf\n", (-b - sqtdt) / (2 * a), (-b + sqtdt) / (2 * a));
    }
    else
    {
        sqtdt = sqrt(-diot);
        printf("complex roots:\n");
        printf("%.4lf+%.4lfi %.4lf-%.4lfi\n", -b/(2*a), sqtdt/(2*a), -b/(2*a), sqtdt/(2*a));
    }

}
