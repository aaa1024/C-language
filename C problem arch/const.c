#include<stdio.h>
int main()
{
    const int limit=10;
    const int * limitp=&limit;//limitpָ��ָ��ĵ�ַΪlimit�ĵ�ַ
    int i=27;
    limitp=&i;
    printf("%d",*limitp);
}
