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
��������value1��������ĺ�һ��λ�ã���value2���������ǰһ��λ�ã����Ե��޸�a[-1]��a[4]��ֵʱ��value1,value2��ֵҲ���޸�
Ϊ�˱�������������������Ҫ���������±�Խ������⡣
*/
