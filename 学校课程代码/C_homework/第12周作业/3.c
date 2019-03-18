#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    printf("Please input 3*3 array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Out put:\n");
    printf("The transposed array is:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("%d",a[j][i]);
            if(j==2) printf("\n");
            else printf(" ");
        }

    return 0;
}
