#include<stdio.h>
int main()
{
    char *cp;
    const char *ccp;//���ʾ����һ��ָ��const char���͵�ָ��
    printf("%p,%p\n",cp,ccp);
    //��ߵ�ָ��ָ������ͱ�������ұ�ָ��ָ�����͵�ȫ���޶���
    ccp=cp;
    printf("%p,%p\n",cp,ccp);
    cp=ccp;
    printf("%p,%p\n",cp,ccp);
}

