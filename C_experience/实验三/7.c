#include<stdio.h>
#include<string.h>

void sta(char *s,int *a,int *n,int *b,int *o);

int main()
{
    int a=0,n=0,b=0,o=0;
    char s[100];
    gets(s);

    sta(s,&a,&n,&b,&o);

    printf("�ܹ���%d����ĸ��%d�����֣�%d���ո�%d�������ַ�\n"
           ,a,n,b,o);
}

//ͳ����ĸ�����֣��ո񣬺������ַ��ĸ���
void sta(char *s,int *a,int *n,int *b,int *o)
{
    int i,len;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(isalpha(s[i]))
        {
            (*a)++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            (*n)++;
        }
        else if(s[i]==' ')
        {
            (*b)++;
        }
        else
        {
            (*o)++;
        }
    }
}
