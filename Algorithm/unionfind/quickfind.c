#include <stdio.h>
void init(int *a, int n){
    // 每个元素都在自己的集合里
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
}

void uni(int *a, int p, int q, int n)
{
    // 合并：把a所在的集合里的所有元素都归并到b所在的元素
    int i;
    int pid = a[p];
    int qid = a[q];
    for (i = 0; i < n; i++){
        if(a[i] == qid)
        {
            a[i] = pid;
        }
    }
}
bool connected(int * a, int p, int q){
    if(a[p] == a[q]) 
        return true;
    else
        return false;
}


int main()
{
    int a[100];
    int p, q;
    int t;
    int n = 100;
    init(a, 100);
    printf("Please input times you want to union:\n");
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &p, &q);
        uni(a, p, q, n);
    }
    printf("Please input times you want to inquiry:\n");
    scanf("%d", &t);
    while (t--)
    {
        printf("Please input p and q to judge whether they are connected:\n");
        scanf("%d%d", &p, &q);
        if(connected(a, p, q))
        {
            printf("p and q is connected\n");
        }
        else
        {
            printf("p and q is connected\n\n");
        }
    }
}


