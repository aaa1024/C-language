#include<cstdio>
#include<iostream>
using namespace std;
/*
    他要旅行n天，m天连续在北京。
    i天北大的游客数量p[i]
    q天有交通管制，哪也不能去，接着的是管制的日期。

*/
int main()
{
    int n=7,m=3,q=3;//n表示旅行n天，m表示m天在北京
    int p[7]={6,9,10,1,0,8,35};
    int a[3]={5,6,2};//p[i]表示第i天北大的旅客数量，a[i]表示第a[i]天交通管制
    int d[100]={0};//d[i]=1表示i天实行交通管制
    int i2,j2;
    int min1=10000;


    for(int i=0;i<q;i++)
    {
        d[a[i]-1]=1;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)//从0开始
    {
        for(int j=1;j<=m&&i+j<n;j++)//从i开始，持续m天
        {
            if(!d[i+j])
            {
                printf("i=%d,i+j=%d执行过\n",i,i+j);
                int t=p[i]+p[i+j];
                printf("t=%d\n",t);
                printf("p[i]=%d,p[i+j]=%d\n",p[i],p[i+j]);
                if(t<min1)
                {
                    min1=t;
                    i2=i;
                    j2=i+j;
                }
            }
        }
    }

/*    for(int i=0;i<n;i++)
    {
        cout<<d[i];
    }
/*
    for(int i=0;i<q;i++)
    {
        cout<<a[i];
    }
*/
    printf("%d %d",i2,j2);

}
