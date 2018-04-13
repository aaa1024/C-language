#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double *ptf;

    pti = dates;
    ptf = bills;
    printf("%23s %10s\n","short","double");
    for (index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    }
    return 0;
}
/*
通过输出我们可以看到，short占两个字节，所以指针加1后的地址是下一个元素的地址，即原来的地址加2
double占8个字节，原理同上。
*/
