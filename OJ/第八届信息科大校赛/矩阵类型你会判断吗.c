#include <stdio.h>
int dc(int a[][12],int n);
int xf(int a[][12],int n);
int main()
{
    int n, a[12][12], i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if(dc(a, n)) printf("¶Ô³Æ¾ØÕó\n");
    else if (xf(a, n)) printf("·´¶Ô³Æ¾ØÕó\n");
    else printf("ÆÕÍ¨¾ØÕó\n");
    return 0;
}

int dc(int a[][12],int n)
{
    int i,j;
    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(a[i][j] != a[j][i])
                return 0;
        }
    }
    return 1;
}

int xf(int a[][12],int n)
{
    int i,j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(a[i][j] != -a[j][i])
                return 0;
        }
    }
    return 1;
}
