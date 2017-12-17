#include<stdio.h>
#include<math.h>
//
int main()
{
    int a[3][10];
    int b[3];//b[1]，b[2]分别是输入的动作镜头和接吻镜头
    int sum1=0,sum2=0;//sum1用于记录输入值与前两个电影的距离的平方和,sum2用于记录输入值与后两个电影的距离的平方和

    a[1][1]=5;a[1][2]=1;a[1][3]=102;a[1][4]=98;
    a[2][1]=104;a[2][2]=81;a[2][3]=10;a[2][4]=2;
    //a[i][j]，i=1表示动作镜头，i=2接吻镜头，j表示电影序号,j=1,2为爱情片，j=3，4为动作片

    printf("请输入动作镜头数和接吻镜头数:\n");
    scanf("%d%d",&b[1],&b[2]);

    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            sum1+=pow(b[i]-a[i][j],2);
            sum2+=pow(b[i]-a[i][j+2],2);
        }
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
