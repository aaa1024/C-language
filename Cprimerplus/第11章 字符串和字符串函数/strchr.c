#include<stdio.h>
#include<string.h>
int main()
{
    char *a="abcdefg";//����һ��ָ�룬
    char c='e';
    char *b;//������ŷ��ص�ָ��
    b=strchr(a,c);
    printf("%p %p\n",a,b);//����Ľ�����������4�ĵ�ַ����Ϊe�ַ�������ĵ�4��Ԫ�ء�
    b=strchr(a,'z');
    printf("%p %p\n",a,b);
    return 0;
}
