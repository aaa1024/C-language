/*
��n��������һ���ʵ�n���˶����꣬��˵�ȵ�n-1���˴�k�ꡣ�ʵ�n-1���˶����꣬
��˵�ȵ�n-2���˴�k�ꡣ�ʵ�n-2���˶����꣬��˵�ȵ�n- 3���˴�k�ꡣ�ʵ�n-3���˶����꣬
��˵�ȵ�n-4���˴�k�ꡣ��������ȥ����ȥ��1���ˣ������˶�˵�ȱ��С1���˴�k�꣬����1����˵�Լ�a�ꡣ
ʹ�ú����ݹ�ķ������㲢�����n���˵����䡣


*/
#include<stdio.h>
int age(int n,int k,int a);
int main()
{
    int n,k,a;

    printf("Please input n k a:\n");
    scanf("%d%d%d",&n,&k,&a);

    printf("Output:\nThe age is:%d.",age(n,k,a));

}
int age(int n,int k,int a)
{
    if(n==1)
    {
        return a;
    }
    else
    {
        return k+age(n-1,k,a);
    }
}
