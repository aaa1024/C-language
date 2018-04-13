#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int a,i,h,m;
    a = 4294967296*2;
    printf("%d\n",a);
    srand((unsigned)time(0));

    for(i=0;i<10;i++)
    {
        a = time(NULL);
        m = a / 60;
        printf("%d\n",a);
        Sleep(1000);
    }
    return 0;
}


