#include<stdio.h>
#include<stdlib.h>

void Stu_avg(int (*a)[6]);
void print(int (*a)[6]);
void Sub_avg(int (*a)[6]);
void Input(int (*a)[6]);

int main()
{
    int a[11][6];
    Input(a);
    print(a);
    Stu_avg(a);
    Sub_avg(a);
    max(a);
    return 0;
}

void Stu_avg(int (*a)[6])
{
    int sum=0;
    int i,j;
    for(i=1;i<=10;i++)
    {
        sum=0;
        for(j=1;j<=5;j++)
        {
            sum+=a[i][j];
        }
        printf("��%d��ѧ����ƽ�����ǣ�%f\n",i,sum/5.0);
    }
    printf("\n");
}

void print(int (*a)[6])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==1)
            printf("\t");
        printf("��Ŀ%d\t",i);
        if(i==5)
            printf("\n");
    }

    for(i = 1;i<=10;i++)
    {
        printf("ѧ��%d\t",i);
        for(j = 1;j<=5;j++)
        {
            printf("%5d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void Sub_avg(int (*a)[6])
{
    int sum=0;
    int i,j;
    for(i=1;i<=5;i++)
    {
        sum=0;
        for(j=1;j<=10;j++)
        {
            sum+=a[j][i];
        }
        printf("��%d�ſε�ƽ�����ǣ�%f\n",i,sum/10.0);
    }
    printf("\n");
}

void Input(int (*a)[6])
{
    int i,j;
    srand((int)time(NULL));
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        {
           a[i][j]=rand()%100;
        }
    }
}

void max(int (*a)[6])
{
    int i,j,m=1,n=1;
    int max=a[1][1];
    for(i=1;i<=10;i++)
        for(j=1;j<=5;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                m=i;
                n=j;
            }
        }
    printf("��߷���Ϊ��%d���ǵ�%d��ѧ���ĵ�%d�ſ�\n\n",max,m,n);

}


