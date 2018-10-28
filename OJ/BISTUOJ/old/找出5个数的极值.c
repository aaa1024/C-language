#include <stdio.h>
int max(int *a)
{
    int i;
    int m = a[0];
    for(i = 1; i < 5; i++)
    {
        if(a[i] > m)
            m = a[i];
    }
    return m;
}

int min(int *a)
{
    int i;
    int m = a[0];
    for(i = 1; i < 5; i++)
    {
        if(a[i] < m)
            m = a[i];
    }
    return m;
}

int main()
{
    int i;
    int a[12];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        for (i = 0; i < 5; i++)
            scanf("%d", &a[i]);
        printf("%d %d\n", max(a), min(a));
    }
    return 0;
}
