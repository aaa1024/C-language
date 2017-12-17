#include<stdio.h>
int main()
{
    char c,t;
    c=getchar();
    while(c!='\n')
    {
        if(c>='A'&&c<='Z'||c>='a'&&c<='z')
        {
            t='A';
            if(c>='a'&&c<='z')
                t='a';
            c=t+(c-t+4)%26;
        }
        putchar(c);
        c=getchar();
    }
}
