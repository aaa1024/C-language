#include<stdio.h>
//��ȷ��С�����nλ����������
int main()
{
    double num;
    int n;
    printf("��ȷ��С�����nλ����������\n");
    printf("Please input num and n: \n");
    scanf("%lf%d",&num,&n);
    printf("Output:\n");
    printf("%.*f\n",n,num);
    return 0;
}
