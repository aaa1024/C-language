#include<stdio.h>
int main()
{
    int N=10;
    int* q;
    int apple;
    int pp=1;
    q=8;

    int p=N*sizeof *q;

    /*这是取指针q指向的类型的大
    小，而不是sizeof乘q*/
    printf("%d\n",p);

    apple=sizeof(int)*;
    /*输出的值是10可以看出*表示
    取地址符而不是乘*/

    printf("%d\n",apple);

    return 0;
}
