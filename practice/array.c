#include<stdio.h>
#define M 10
double a[M][M];
int main()
{
    int i,j;
    int p,q;
    int k=1;
    for(i=1;i<=M;i++)
    {
        p=1;
        q=p+i-1;
        for(j=0;j<=M-i;j++)
        {
            a[p+j][q+j]=1.0/i;
            a[q+j][p+j]=1.0/i;
        }
    }
    for(i=1;i<=M;i++)
    {
        for(j=1;j<=M;j++)
        {
            printf("%10lf",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

