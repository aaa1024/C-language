#include<stdio.h>
int main()
{
    char c,t;
    c=getchar();
    while(c!='\n')
    {
        if(c>='A'&&c<='Z'||c>='a'&&c<='z')
        {
            putchar(c);
        }
        c=getchar();
    }
}
