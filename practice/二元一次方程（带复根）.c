#include <stdio.h>
#include <math.h>
/*
��a=0���������not a quadratic����
�������������������ʵ���������two equal roots:�������ʵ����ֵ��
��������������������ʵ���������distinct real roots:������������ʵ�����ÿո������
����������������������������complex roots:����������������ÿո������
���е�ʵ�������ʹ��C���Ե�Ĭ�����뷽ʽ����4λС����

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
