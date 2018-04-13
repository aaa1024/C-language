#include<stdio.h>
int judge(int year);
int main()
{
    int i, t, y, n,c = 0;

    printf("Please input test times:");
    scanf("%d",&t);
    printf("Output:\n");
    while(t--)
    {
        c = 0;
        printf("Enter the Date:");
        scanf("%d%d", &y, &n);
        while(1)
        {

            if(judge(y))
            {
            //    printf("y%d\n",y);
                c++;
            }
          //  printf("%d",c);
            if(c == n)
                break;
            y++;
        }
        printf("The ans is %d\n", y);
    }
}
int judge(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
    else
        return 0;
}
