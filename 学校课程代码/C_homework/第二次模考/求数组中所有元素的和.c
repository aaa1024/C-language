#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Calc(int *PA,int Num,int *result);

int main()
{
	int *PArray = NULL;
	int nNums = 0,i = 0;
	int Sum=0;

	printf("����������Ԫ�صĸ���:\n");
	scanf("%d",&nNums);

	PArray = (int *)malloc(nNums * sizeof(int));//��������ռ�

	/******start******/


    Calc(PArray, nNums, &Sum);
	/******end******/

	printf("\n");

	free(PArray);

	return 0;
}


/*��������������Ԫ�صĺ�,���������result��ָ��Ķ�����,NumΪ����Ԫ�صĸ���
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
    printf("output:\n�����Ԫ�غ��ǣ�%d", sum);


	/******end******/

}
