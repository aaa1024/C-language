#include<stdio.h>
typedef struct stu
{
    int num;
    char name[10];
    int grade[3];
};
float avg(struct stu *s)
{
    int i,sum=0;
    for(i=0;i<3;i++)
    {
        sum += s->grade[i];
    }
    return sum/3.0;
}
int main()
{
    int i;
    struct stu a[5];

    for(i=0;i<5;i++)
    {

    }
}
