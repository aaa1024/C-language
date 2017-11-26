#include<stdio.h>
#include<string.h>
void tr(char *s,char *s2);
int main()
{
    char s[100],s2[100];

    scanf("%s",s);
    tr(s,s2);
    printf("%s\n",s2);
    return 0;
}

void tr(char *s,char *s2)
{
    int len,i;
    len=strlen(s);
    strcpy(s2,s);
    for(i=0;i<len;i++)
    {
        s2[i]=s[len-1-i];
    }
}
