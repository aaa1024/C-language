#include<stdio.h>
int main()
{
    int N=10;
    int* q;
    int apple;
    int pp=1;
    q=8;

    int p=N*sizeof *q;

    /*����ȡָ��qָ������͵Ĵ�
    С��������sizeof��q*/
    printf("%d\n",p);

    apple=sizeof(int)*;
    /*�����ֵ��10���Կ���*��ʾ
    ȡ��ַ�������ǳ�*/

    printf("%d\n",apple);

    return 0;
}
