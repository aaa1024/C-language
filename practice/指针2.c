#include<stdio.h>
int main()
{
    int a[10];
    int b=a[5]==5[a];
    a[5]=100;
    printf("%d\n",b);
    printf("%d\n",*(5+a));
    return 0;
}
