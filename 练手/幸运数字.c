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
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
  //  output(a,n);
    while(count<n-1)
    {
        for(i=0;i<n;i++)
        {

            if(a[i]==-1) continue;
            a[i]=nu
            m++;
            if(a[i]==m)
            {
                a[i]=-1;
                count++;
                num=1;
                flag=i;
    //            printf("%d\n",i);
            }
        }
       // output(a,n);
    }
    for(i=0;i<n&&a[i]==-1;i++);
    printf("Output:\nthe lucky one's number is:%d\n",i);
    return 0;
}
