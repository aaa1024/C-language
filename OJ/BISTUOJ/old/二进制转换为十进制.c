#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, j;
    int t, len, sum, fac;
    char s[100];
    scanf("%d", &t);
    while (t--)
    {
        sum = 0;
        fac = 1;
        scanf("%s", s);
        len = strlen(s);
        for(i = len -1; i >= 0; i--)
        {
            sum += (s[i] - '0')*fac;
            fac *= 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
