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
    for(i=0;i<n;i++) //先编号，每个人的号数等于他的序号加1
    {
        a[i]=i+1;
    }
  //  output(a,n);
    while(count<n-1)  //count是拿来记录被踢出去的人的个数的
    {
        for(i=0;i<n;i++)
        {

            if(a[i]==-1) continue;  //如果为-1就跳过这次循环，关于continue的知识你需要了解一下

            //当a[i]不为-1的时候下面的代码才会执行

            //a[i]=num ,然后num=num+1
            //比如,num=5,那a[i]=num=5,然后num=6
            a[i]=num++;
            if(a[i]==m)
            {
                //如果a[i]为m，则把他踢掉，即记他为-1，这样下次循环到他就不会执行了，因为上面有continue
                a[i]=-1; //
                count++;//记录一个人被踢
                num=1;//初始化num，这样下一圈循环的人就从1开始叫了
    //            printf("%d\n",i);
            }
        }
       // output(a,n);
    }
    for(i=0;i<n&&a[i]==-1;i++);//如果等于-1就一直执行，执行到那个不为1的数为止，
    //这个的好处是i可以提供下一步使用，记得看这条语句是加号的
    printf("Output:\nthe lucky one's number is:%d\n",i);
    return 0;
}
