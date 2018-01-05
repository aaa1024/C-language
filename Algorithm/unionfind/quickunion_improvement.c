#include <stdio.h>
int id[100];
int sz[100];
void QuickUnion(int a, int b);
int root(int a);
void init();
void view();
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    int a, b;
    int t;
    scanf("%d", &t);
    init();
    while (t--)
    {
        scanf("%d%d", &a, &b);
        printf("%d %d\n", a, b);
        QuickUnion(a, b);
        view();
    }
    scanf("%d%d", &a, &b);
    if (root(a) == root(b))
        printf("1\n");
    else
        printf("0\n");
    view();
    return 0;
}

void init()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }

}

int root(int a)
{
    while(id[a] != a)
    {
        id[a] = id[id[a]];
        a = id[a];
    }
    return a;
}
void QuickUnion(int a, int b)
{
    int i = root(a);
    int j = root(b);
    if (i == j) return ;
    if(sz[i] < sz[j])
    {
        id[i] = j;
        sz[j] += sz[i];
    }
    else
    {
        id[j] = i;
        sz[i] += sz[j];
    }
}

void view()
{
    int i;
    for (i = 0; i < 12; i++)
    {
        printf("%d,", id[i]);
    }
    printf("\n");
    for (i = 0; i < 12; i++)
    {
        printf("%d,", sz[i]);
    }
    printf("\n\n");
}
