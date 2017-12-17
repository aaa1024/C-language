#include<stdio.h>
int main()
{
    char *available_resouces[]={
    "clor monitor",
    "big disk",
    "Cray" //这少了个逗号，所以后面被合并
    "on-line drawing routhines"
    };
    int i=0;
    while(i<3)
    {
        printf("%s",*(available_resouces+i));
        i++;
    }
    return 0;
}
