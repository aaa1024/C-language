#include <stdio.h>
#include <string.h>
#define MAX 50
int main()
{
    char s1[] = "abcdefg";
    char s2[] = "hijklmn";
    char s3[100];
    char s4[100];

    //strcpy(char *s1,char *s2),��s2ָ����ַ������Ƹ�s1.
    strcpy(s3,s1);
    puts(s3);

    //strncpy(char *s1, char *s2, int n) ��s2ָ����ַ�����ǰn�����Ƹ�s1
    strncpy(s4,s1,1);
    puts(s4);

    //strcat(char *s1,char *s2)
    //��s2��ǰn���ַ����ӵ�s1��ĩβ
    strncat(s1,s2,MAX);
    puts(s1);
    return 0;
}
