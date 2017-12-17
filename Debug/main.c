#include <stdio.h>
#include <string.h>
#define MAX 150
int main()
{
    char s1[ MAX ], s2[ MAX ], s3[ MAX ];
    int len1, len2, min;
    int i,k,t;
    printf("Please input string1:");
    scanf("%s",s1);
    printf("Please input string2:");
    scanf("%s",s2);

    len1=strlen(s1);
    len2=strlen(s2);

    min = len1 < len2 ? len1:len2;


    for(i = 0, k = 0; i < len1+len2; i++, k++)
    {
        if(k < min)
        {
            s3[i] = s1[k];
            s3[++i] = s2[k];
        }
        else
        {
        //    printf("000\n");
            if(len1 < len2)
            {
          //      printf("111\n");
                s3[i] = s2[k];
            }
            else
            {
            //    printf("222\n");
                s3[i] = s1[k];
            }
        }

    }

    s3[i]='\0';
    printf("Output:\n");
    printf("string:%s\n",s3);
}
