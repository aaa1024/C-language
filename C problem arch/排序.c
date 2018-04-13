#include<stdio.h>
#include<stdlib.h>
int cmp ( const void *a , const void *b )
{
      return *(int *)a - *(int *)b;
}
int main()
{
    int num[10]={10,9,8,7,6,5,4,3,2,1};
    qsort(num, 10, sizeof(num[0]), cmp);
    for(int i=0;i<10;i++)
        printf("%d ",num[i]);
    return 0;
}
