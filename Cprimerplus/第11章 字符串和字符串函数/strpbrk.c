#include<stdio.h>
#include<string.h>

int main()
{
    char *s1="abcdefg";
    char *s2="efghijk";
    char *a;
    a=strpbrk(s1,s2);
    printf("%p %p %d\n",s1,a,a-s1+1);
    return 0;
}
