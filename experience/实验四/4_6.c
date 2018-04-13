#include<stdio.h>

float pingjun(int a[4][5],int cmd);
void bujige(int a[4][5],int b[4]);
void youxiu(int a[4][5],int c[4]);

int main()
{
    int i,j;
    int a[4][5],b[4]={0},c[4]={0};
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("第一门课：%.2f\n",pingjun(a,10));

    printf("两科以上不及格的学生名单\n");

    bujige(a,b);
    for(i=0;i<5;i++)
    {
        if(b[i]==1)
        {
            printf("学号：%d，平均成绩：%.2f\n",i,pingjun(a,i));
        }
    }

    printf("90以上或全部课程成绩在85分以上：\n");
    youxiu(a,c);
    for(i=0;i<5;i++)
    {
        if(c[i]==1)
        {
            printf("%d\n",i);
        }
    }
}

float pingjun(int a[4][5],int cmd)
{

    int sum=0;
    float pingjun;
    int i,j;
    if(cmd==10)
    {
        for(i=0;i<4;i++)
        {
            sum+=a[i][0];
        }
        return sum/4.0;
    }
    else
    {
        for(i=0;i<5;i++)
        {
            sum+=a[cmd][i];
        }
        pingjun=sum/5.0;
        return pingjun;
    }


}
void youxiu(int a[4][5],int c[5])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        c[i]=1;
        for(j=0;j<5;j++)
        {
            if(a[i][j]<85)
            {
                c[i]=0;
                break;
            }
        }
        if(pingjun(a,i)>90)
        {
            c[i]=1;
        }

    }
}


void bujige(int a[4][5],int b[4])
{
    int i,j;
    int c=0;
    for(i=0;i<4;i++)
    {
        c=0;
        for(j=0;j<5;j++)
        {
            if(a[i][j]<60)
            {
                c++;
            }

            if(c>=2)
            {
                b[i]=1;
            }
        }
    }
}

