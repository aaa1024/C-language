//4.	дһ��������һ��3*3�����Ͷ�ά����ת�ã������л�����
#include<stdio.h>
void transpose(int (*a)[3]);
int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    transpose(a);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void transpose(int (*a)[3])
{
    int i,j,t;
    int (*b)[3]=a;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
      //      printf("%d:%d\n",a[i][j],a[j][i]);
            a[i][j]=b[j][i];
        }
    }
}
