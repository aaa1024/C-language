#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    int t, i;
    short mark[ 200000];
    memset(mark, 0, sizeof(mark));
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        mark[a]++;
    }
    for( i = 0; i < 200000; i++)
    {
        if(mark[i])
            printf("%d %d\n", i, mark[i]);
    }
    return 0;
}
