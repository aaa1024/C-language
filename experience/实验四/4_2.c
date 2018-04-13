#include<stdio.h>
int len(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char s[100];
    gets(s);
    printf("%d",len(s));
    return 0;
}
