#include <stdio.h>
#define SIZE 4
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i<=SIZE; i++)
        arr[i] = 2 * i + 1;

    for (i = -1; i < 7; i++)
        printf("%2d %d\n",i,arr[i]);

    printf("the address of a[-1]:%p\n",&arr[-1]);
    printf("the address of a[4]:%p\n",&arr[4]);
    printf("the address of value1:%p\n",&value1);
    printf("the address of value2:%p\n",&value2);
    printf("arr[-1]:%d\n",arr[-1]);
    printf("value1 = %d, value2 = %d\n", value1, value2);

    return 0;
}
/*
编译器把value1放在数组的后一个位置，把value2放在数组的前一个位置，所以当修改a[-1]和a[4]的值时，value1,value2的值也会修改
为了避免出现意外情况，所以要避免数组下标越界的问题。
*/
