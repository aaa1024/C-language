#include<stdio.h>

void sort(int (*a)[2],int n);

int main()
{
    int a[10][2];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i][0],&a[i][1]);

    sort(a,n);

    printf("\n");
    for(i=0;i<n;i++)
        printf("%d %d\n",a[i][0],a[i][1]);
    return 0;
}
void sort(int (*a)[2],int n)
{
    int t0,t1;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][1]<a[j][1])
            {
                t0=a[i][0];
                t1=a[i][1];

                a[i][0]=a[j][0];
                a[i][1]=a[j][1];

                a[j][0]=t0;
                a[j][1]=t1;
            }
        }
    }
}
