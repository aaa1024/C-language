#include<stdio.h>
#include<math.h>
//
int main()
{
    int a[10],k[10];//数组a是动作镜头，数组k是接吻镜头
    int x,y;//x和y分别是输入的动作镜头和接吻镜头
    int p,q;//暂时存平方和的
    int sum1=0,sum2=0;
    //1,2代表爱情片，34代表动作片
    //a表示动作镜头，k表示接吻镜头
    a[1]=5;a[2]=1;a[3]=102;a[4]=98;
    k[1]=104;k[2]=81;k[3]=10;k[4]=2;

    printf("请输入动作镜头数和接吻镜头数:\n");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=2;i++)
    {
        //平方函数是刚刚百度得来的
        p=pow(x-a[i],2)+pow(y-k[i],2);//因为a>b,a的平方>b的平方，所以不需要开根号
        sum1+=p;//sum1表示点到爱情片的距离的平方的和

        //平方函数是刚刚百度得来的
        q=pow(x-a[i+2],2)+pow(y-k[i+2],2);
        sum2+=q;//sum1表示点到动作片的距离的平方的和
    }
    if(sum1>sum2)
    {
        printf("这是动作片");
    }
    else
    {
        printf("这是爱情片");
    }

    return 0;
}
