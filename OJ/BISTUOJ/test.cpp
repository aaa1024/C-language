#include<stdio.h>
int  main()
{
    int N;
    int i=0,j=0;
    int flag1=1,flag2=1;
    scanf("%d",&N);
    while(N>1&&N<=10)
    {
        int a[N][N]={0};
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(a[i][j]!=a[j][i])
                {
                    flag1=0;        
                }
                else if(a[i][j]!=-a[j][i])
                {
                    flag2=0;
                }
            }
        }
        if(flag1==1)
    {
        printf("对称矩阵\n");
    }else if(flag2 == 1)
    {
        printf("反对称矩阵\n");
    }
    else
    {
        printf("普通矩阵\n");
    }
    }
    return 0;
}