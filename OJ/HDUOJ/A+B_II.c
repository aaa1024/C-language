#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000]={0}, s2[1000] = {0}, s3[1000] = {0};
    int a[1000] = {0}, b[1000] = {0}, c[1000] = {0};
    int t,len1,len2,i,x,len,cases=0;

    scanf("%d",&t);
    while(t--)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(c));
        memset(c, 0, sizeof(c));
        memset(s1, '0', sizeof(s1));
        memset(s2, '0', sizeof(s2));
        memset(s3, '0', sizeof(s3));
        x = 0;
        scanf("%s %s", s1, s2);

        len1 = strlen(s1);
        len2 = strlen(s2);

        len = len2;
        if(len1 > len2) len = len1;

        for(i = len - 1; i >= 0; i--)
        {
            if (len1)
            {
                a[i] = s1[--len1]-'0';
            }

            if (len2)
            {
                b[i] = s2[--len2]-'0';
            }

        }

        for(i = len - 1; i >= 0; i--)
        {
            if(a[i] + b[i] + x > 9)
            {
                c[i] = a[i] + b[i] +x -10 ;
                x = 1;
            }
            else
            {
                c[i] = a[i] + b[i] + x;
                x = 0;
            }
        }

        printf("Case %d:\n",++cases);
        printf("%s + %s = ", s1, s2);
        if(x==1) printf("1");
        for(i = 0; i < len; i++)
        {
            printf("%d", c[i]);
        }
        printf("\n");
        if(t >= 1)
            printf("\n");
    }
    return 0;
}
