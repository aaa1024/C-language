#include<stdio.h>
#include<string.h>

void sort(char *s);
int main()
{
    char s[20];

    scanf("%s",s);

    sort(s);

    printf("%s",s);
    return 0;
}
void sort(char *s)
{
    int i,j,len;
    char t;

    len=strlen(s);
    for(i=0;i<len;i++)
        for(j=i+1;j<len;j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
}
