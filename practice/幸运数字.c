#include<stdio.h>

int main()
{
    int i,flag;
    int m,n,count=0,num=1;
    int a[100],b[100];
    printf("the number of people:");
    scanf("%d",&n);
    printf("the lucky number is:");
    scanf("%d",&m);
    for(i=0;i<n;i++) //�ȱ�ţ�ÿ���˵ĺ�������������ż�1
    {
        a[i]=i+1;
    }
  //  output(a,n);
    while(count<n-1)  //count��������¼���߳�ȥ���˵ĸ�����
    {
        for(i=0;i<n;i++)
        {

            if(a[i]==-1) continue;  //���Ϊ-1���������ѭ��������continue��֪ʶ����Ҫ�˽�һ��

            //��a[i]��Ϊ-1��ʱ������Ĵ���Ż�ִ��

            //a[i]=num ,Ȼ��num=num+1
            //����,num=5,��a[i]=num=5,Ȼ��num=6
            a[i]=num++;
            if(a[i]==m)
            {
                //���a[i]Ϊm��������ߵ���������Ϊ-1�������´�ѭ�������Ͳ���ִ���ˣ���Ϊ������continue
                a[i]=-1; //
                count++;//��¼һ���˱���
                num=1;//��ʼ��num��������һȦѭ�����˾ʹ�1��ʼ����
    //            printf("%d\n",i);
            }
        }
       // output(a,n);
    }
    for(i=0;i<n&&a[i]==-1;i++);//�������-1��һֱִ�У�ִ�е��Ǹ���Ϊ1����Ϊֹ��
    //����ĺô���i�����ṩ��һ��ʹ�ã��ǵÿ���������ǼӺŵ�
    printf("Output:\nthe lucky one's number is:%d\n",i);
    return 0;
}
