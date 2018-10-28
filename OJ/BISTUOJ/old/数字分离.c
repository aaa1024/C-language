
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    int t;
    char s[12];

    while (scanf("%s",s) && s[0] != '0')
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            printf("%c", s[i]);
            if(s[i+1] != '\0')
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
