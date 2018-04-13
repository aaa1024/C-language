#include <stdio.h>
void init(int *a);
int  connected(int * a, int p, int q);
void uni(int *a, int p, int q);
int main()
{
    int a[100];
    int p, q;
    int t;
    init(a);
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &p, &q);
        uni(a, p, q);
    }
    printf("Please input times you want to inquiry:\n");
    scanf("%d", &t);
    while (t--)
    {
        printf("Please input p and q to judge whether they are connected:\n");
        scanf("%d%d", &p, &q);
        if(connected(a, p, q))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}

void init(int *a)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        *(a + i) = i;
    }
}

int  connected(int * a, int p, int q)
{
    if(a[p] == a[q])
        return 1;
    else
        return 0;
}

void uni(int *a, int p, int q)
{
    int i;
    int pid = a[p];
    int qid = a[q];
    for (i = 0; i < 100; i++)
    {
        if(a[i] == qid)
        {
            a[i] = pid;
        }
    }
}
