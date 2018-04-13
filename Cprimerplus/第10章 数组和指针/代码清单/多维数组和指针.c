#include<stdio.h>
int main()
{
    int a[4][2];
    printf("value of a:%p\n",a);
    printf("address of a[0]:%p\n",&a[0]);
    printf("value of a[0]:%p\n",a[0]);
    printf("address of a[0][0]:%p\n",&a[0][0]);
    a[1][0]=3;
    printf("%d\n",*(*(a+1)));
    return 0;
}
