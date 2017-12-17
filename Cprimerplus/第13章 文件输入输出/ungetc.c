#include<stdio.h>
int main()
{
    char c;
    c=getchar();
    ungetc('b',stdin);
    c=getchar();
    printf("%c",c);
    return 0;
}
