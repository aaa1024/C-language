#include<stdio.h>
#define M 5;
int max(int a,int b)
{
    return a>b? a:b;
}
int main()
{
    int i,j;
    int n=5;
    int w=6;
    int size[]={12,2,53,74,5};
    int value[]={14,26,10,44,58};
    int f[5]={0};
    for (i=0; i<n; i++){
        for (j=size[i]; j<=w; j++)
        {
            printf("former f[j]:%d\n",f[j]);
            f[j] = max(f[j], f[j-size[i]]+value[i]);
            printf("i:%d j:%d f[j]:%d size[i]%d value[i]:%d f[j-size[i]]:%d f[j-size[i]]+value[i]:%d\n\n",i,j,f[j],size[i],value[i],f[j-size[i]],f[j-size[i]]+value[i]);
        }
    }
    for(i=0;i<5;i++)
        printf("%d ",f[i]);
}
