/*
有n个人坐在一起。问第n个人多少岁，他说比第n-1个人大k岁。问第n-1个人多少岁，
他说比第n-2个人大k岁。问第n-2个人多少岁，他说比第n- 3个人大k岁。问第n-3个人多少岁，
他说比第n-4个人大k岁。这样问下去，除去第1个人，所有人都说比编号小1的人大k岁，而第1个人说自己a岁。
使用函数递归的方法计算并输出第n个人的年龄。


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
