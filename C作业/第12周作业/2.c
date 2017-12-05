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
	for(i=0;i<nNums;i++)
        scanf("%d",&PArray[i]);
    Calc(PArray,nNums,&Sum);

    printf("所有元素之和为%d\n",Sum);
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
	for(i=0;i<Num;i++)
    {
        (*result)+=PA[i];
    }



	/******end******/

}
