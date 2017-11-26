#include<stdio.h>
int main()
{
    const int limit=10;
    const int * limitp=&limit;//limitp指针指向的地址为limit的地址
    int i=27;
    limitp=&i;
    printf("%d",*limitp);
}
