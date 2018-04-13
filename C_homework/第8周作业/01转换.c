#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n;
    int i,j;
    printf("Please input test times:");
    scanf("%d",&n);
    printf("Output:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter string:");
        scanf("%s",s);
        if(strlen(s)%2!=0)
        {
            printf("Input error!\n");
        }
        else
        {
            for(j=0;j<strlen(s);j++)
            {
                if(s[j]=='0')
                {
                    s[j]='1';
                }
                else
                {
                    s[j]='0';
                }
            }
            printf("%s\n",s);
        }
    }
}
