#include <stdio.h>
#include <string.h>
#define MAX 100

int find(char *s);
int max(int a,int b);
//输入字符串s1,s2，先把s2接到s1的后边，形成一个新的字符串，求这个字符串中含cugb的个数a，
//再把s1接到s2的后边，求这个新的字符串中含cugb的个数b，输出ab的最大值
int main()
{
    char s1[ MAX ], s2[ MAX ];
    char s3[ MAX ], s4[ MAX ];
    int a,b;
    scanf("%s%s", &s1, &s2);

    strcpy(s3, s1);
    strcpy(s4, s2);

    strncat(s1, s2, MAX);
    strncat(s4, s3, MAX);
   // printf("%s\n%s\n",s1,s4);
    printf("%d\n",max(find(s1),find(s4)));
    return 0;
}

int find(char *s)
{
    int count = 0, a=0;
    char c[] = "cugb";
    char *flag = s;
    int len = strlen(s);

    while (strstr(s, c))
    {
        s=strstr(s, c)+sizeof(c);
        count ++;
    }
    return count;
}
int max(int a,int b)
{
    return a>b? a:b;
}
