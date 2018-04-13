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
        if(i==0||s[i]!=' ')  //如果不是空格，就开始记录单词个数
        {
     //       printf("%d",k);
            if(k==0) //k代表单词的字母个数，k=0意味着i是单词的开头
            {
                m=i;  //标记一下这个单词的起始位置
            }
            k++;
        }
        if(k>=max)
        {
            max=k;
            n=m;
        }
        if(s[i]==' ')//如果s[i]为空格，就初始化k的值
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
