#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,t = 0;
    char queue[101];
    int a[100], b[100];
    scanf("%d", &n);
    scanf("%s",queue);
    for (i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    for (i = 1; i <= n; i++)
    {
        if(queue[i-1] == 'A')
        {
            b[t++] = i;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if(queue[i-1] == 'B')
        {
            b[t++] = i;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if(queue[i-1] == 'C')
        {
            b[t++] = i;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if(queue[i-1] == 'D')
        {
            b[t++] = i;
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%4d", b[i]);
    }
    return 0;
}
