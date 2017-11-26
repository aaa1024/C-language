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
    int n,m,q;//n表示旅行n天，m表示m天在北京
    while(cin>>n>>m){
    int p[1000],a[1000];//p[i]表示第i天北大的旅客数量，a[i]表示第a[i]天交通管制
    int d[1000]={0};//d[i]=1表示i天实行交通管制
    int i2,j2;
    int min1=100000000;

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<q;i++)
    {
        d[a[i]]=1;
    }
    for(int i=0;i<n;i++)//从0开始
    {
        if(d[i])
        {
            continue;
            q--;
        }
        for(int j=1;j<=m&&i+j<n;j++)//从i开始，持续m天
        {

            if(!d[i+j]&&(n-i-q)>=m)
            {
 //               printf("i=%d,i+j=%d执行过\n",i,i+j);
                int t=p[i]+p[i+j];
 //               printf("t=%d\n",t);
 //               printf("p[i]=%d,p[i+j]=%d\n",p[i],p[i+j]);
                if(t<min1)
                {
                    min1=t;
                    i2=i;
                    j2=i+j;
                }
            }
        }
    }
    printf("%d %d",i2,j2);
    }
    return 0;
}
