#include<stdio.h>

int main()
{
    int a[10];
    int i;

    printf("please enter 5 integer numbers:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Output:\n");

    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
        if (i<4) printf(" ");
    }
    printf("\n");
    return 0;
}
