#include <stdio.h>
int pre[100];
int find(int x);
void unite(int x, int y);
int main()
{

    int i, x, y;
    for (i = 0; i < 100; i++)
    {
        pre[i] = i;
     //   printf("%d ", pre[i]);
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &x, &y);
        unite(x, y);
    }
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &x, &y);
        if(find(x) == find(y))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}
int find(int x)
{
    return x == pre[x] ? x : pre[x] = find(pre[x]);
}
void unite(int x, int y)
{
    pre[find(x)] = find(y);
}
