#include<stdio.h>
#include<math.h>
#define M 10
int main()
{
    int i,j;
    for(i=-M;i<=M;i++)
    {
        for(j=-M;j<=M;j++)
        {
            if(abs(i)+abs(j)<=M)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
