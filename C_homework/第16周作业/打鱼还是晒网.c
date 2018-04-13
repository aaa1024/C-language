#include<stdio.h>

int judge(int year);
int s(int year,int month,int day);
int main()
{
    int year, month, day, sum = 0, i;
    printf("Enter year/month/day:");
    scanf("%d/%d/%d",&year, &month, &day);
    sum = s(year, month, day);
    for(i = 1990; i < year; i++)
    {
        if(judge(i))
        {
            sum += 366;
        }
        else
        {
            sum += 365;
        }
    }

    printf("Output:\n");
    if(sum % 5 <=3 && sum % 5 != 0)
        printf("He was fishing at that day.\n");
    else
        printf("He was sleeping at that day.\n");
    printf("%d\n",sum);
    return 0;

}
int judge(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
    else
        return 0;
}

int s(int year,int month,int day)
{
    int i,f=0;
    int a[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(judge(year))
        a[2]=29;
    for(i=0;i<month;i++)
    {
        f+=a[i];
    }

    f=f+day;
    return (f);

}
