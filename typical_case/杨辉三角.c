#include<stdio.h>

int main()
{
    int n,i,j;
    int a[20][20];
    printf("Please input n:");
    scanf("%d",&n);
    if(n>10) printf("Input error!\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    printf("Output:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
