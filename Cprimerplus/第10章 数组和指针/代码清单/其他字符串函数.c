#include <stdio.h>
#include <string.h>
#define MAX 50
int main()
{
    char s1[] = "abcdefg";
    char s2[] = "hijklmn";
    char s3[100];
    char s4[100];

    //strcpy(char *s1,char *s2),把s2指向的字符串复制给s1.
    strcpy(s3,s1);
    puts(s3);

    //strncpy(char *s1, char *s2, int n) 把s2指向的字符串的前n个复制给s1
    strncpy(s4,s1,1);
    puts(s4);

    //strcat(char *s1,char *s2)
    //把s2的前n个字符串接到s1的末尾
    strncat(s1,s2,MAX);
    puts(s1);
    return 0;
}
