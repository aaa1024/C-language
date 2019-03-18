#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Calc(int *PA,int Num,int *result);

int main()
{
	int *PArray = NULL;
	int nNums = 0,i = 0;
	int Sum=0;

	printf("输入数组中元素的个数:\n");
	scanf("%d",&nNums);

	PArray = (int *)malloc(nNums * sizeof(int));//分配数组空间

	/******start******/


    Calc(PArray, nNums, &Sum);
	/******end******/

	printf("\n");

	free(PArray);

	return 0;
}


/*计算数组中所有元素的和,结果保存在result所指向的对象中,Num为数组元素的个数
*/
void Calc(int *PA,int Num,int *result)
{

	int Sum = 0;
	int i;

	/******start******/
    int a, sum = 0;
    for (i = 0; i < Num; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("output:\n数组的元素和是：%d", sum);


	/******end******/

}
