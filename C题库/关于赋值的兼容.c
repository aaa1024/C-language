#include<stdio.h>
int main()
{
    char *cp;
    const char *ccp;//这表示的是一个指向const char类型的指针
    printf("%p,%p\n",cp,ccp);
    //左边的指针指向的类型必须具有右边指针指向类型的全部限定符
    ccp=cp;
    printf("%p,%p\n",cp,ccp);
    cp=ccp;
    printf("%p,%p\n",cp,ccp);
}

