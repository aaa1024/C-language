#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Please input a sentence:\n");
    gets(s);
    longest(s);
    return 0;
}
void longest(char *s)
{
    int i=0,k=0,m,n,max=0;

  //  printf("%d",strlen(s));
    for(i=0;i<strlen(s);i++)
    {
        if(i==0||s[i]!=' ')  //������ǿո񣬾Ϳ�ʼ��¼���ʸ���
        {
     //       printf("%d",k);
            if(k==0) //k�����ʵ���ĸ������k=0��ζ��i�ǵ��ʵĿ�ͷ
            {
                m=i;  //���һ��������ʵ���ʼλ��
            }
            k++;
        }
        if(k>=max)
        {
            max=k;
            n=m;
        }
        if(s[i]==' ')//���s[i]Ϊ�ո񣬾ͳ�ʼ��k��ֵ
        {
            k=0;
        }
    }
    printf("Output:\n");
    printf("The longest word is:");
    for(i=n;s[i]!=' '&&s[i]!='\0';i++)
    {
        putchar(s[i]);
    }
    printf("\n");
}
