#include<stdio.h>
void swa(int *a,int *b)
{
    printf("in the swa:%p %p\n",a,b);
    int t=*a;
    *a=*b;
    *b=t;
}
int main() {
    int a=5,b=3;
    swa(&a,&b);
    printf("%p %p\n",&a,&b);
    printf("%d %d\n",a,b);

/*    int a = 5;
    int* pa = &a;
    printf("&a = %p\n", &a);
    printf("a = %d\n", a);
    printf("&pa = %p\n", &pa);
    printf("pa = %p\n", pa);
    printf("*pa = %d\n", *pa);
    return 0;
*/
}
