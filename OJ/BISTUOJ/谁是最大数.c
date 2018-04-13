#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 10000
int main()
{
    int i, j;
    int t, len, n, m, max, a;
    char s[100];
    scanf("%d", &t);
    while (t--)
    {
        max = -MAXN;
        scanf("%d", &m);
        for(i = 0; i < m; i++)
        {
            scanf("%d", &a);
            if(a > max)
                max = a;
        }
        printf("%d\n", max);
    }
    return 0;
}
