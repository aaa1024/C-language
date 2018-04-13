#include<stdio.h>
#include<stdlib.h>
int cmp ( const void *a , const void *b )
{
      return *(int *)a - *(int *)b;
}
int main()
{
    int num[105];
    int n,i;
    printf("Please input n:");
    if(scanf("%d",&n)==1&&n<100)
        printf("Please input 5 numbers:");
    else
    {
        printf("Output:Error!");
        return 0;
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    qsort(num,n, sizeof(num[0]), cmp);
    printf("Output:\nThe sort number is:");
    for(i=0;i<n;i++)
        printf("%d ",num[i]);
    printf("\n");
    return 0;
}
