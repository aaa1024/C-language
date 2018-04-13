#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    int t;
    char s[12];
    int len, mark = 1;
    while (scanf("%s",s) && s[0] != '0')
    {
        mark = 1;
        len = strlen(s);
        for (i = 0; i < len / 2 +1; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                printf("NO.\n");
                mark = 0;
                break;
            }
        }
        if(mark)
        {
            printf("YES.\n");
        }
    }
    return 0;
}
