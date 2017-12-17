#include<stdio.h>

int main()
{
 //   freopen("input.txt",'r',stdin);
    int n,i,j;
    int a[100][4];
    float sum=0;
    printf("Please input test times:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d:%d:%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i][0]*(a[i][1]+a[i][2]/60.0+a[i][3]/3600.0);
    }
    printf("Output:\n");
    printf("Had went [%.2f] km",sum);
    return 0;
}

