#include<stdio.h>
void convert(char *c);
int main()
{
    char c;
    while(scanf("%c",&c)&&c!='\n')
    {
        convert(&c);
        printf("%c",c);
    }
    return 0;
}
void convert(char *c)
{
    int t='A'-'a';
    if('a' <= (*c) && (*c) <= 'z' && (*c) % 2 ==0)
    {
        *c += t;
    }
    //printf("%c",*c);
}
