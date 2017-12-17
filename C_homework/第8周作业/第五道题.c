#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j;
    int n;
    printf("Please input an integer:");
    printf("Output:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%4d",n+i+j);
        }
        if(i!=4) printf("\n");
    }
    return 0;
}
