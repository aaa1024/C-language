#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     srand((int)time(0));
     int i,a;
     for (i=0;i<=10;i++)
     {
        a=(int)(rand()%10);
        printf("%d ",a);
        }

      printf("\n");
}
