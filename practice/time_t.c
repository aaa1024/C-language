#include<stdio.h>
#include<time.h>

int main()
{
    time_t biggest=0x7FFFFFFF;
    printf("%s",ctime(&biggest));
}
