#include <stdio.h>
#include <string.h>
#define MAX 100

int find(char *s);
int max(int a,int b);
//�����ַ���s1,s2���Ȱ�s2�ӵ�s1�ĺ�ߣ��γ�һ���µ��ַ�����������ַ����к�cugb�ĸ���a��
//�ٰ�s1�ӵ�s2�ĺ�ߣ�������µ��ַ����к�cugb�ĸ���b�����ab�����ֵ
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
