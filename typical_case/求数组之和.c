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
	for(i=0;i<nNums;i++)
        scanf("%d",&PArray[i]);
    Calc(PArray,nNums,&Sum);

    printf("����Ԫ��֮��Ϊ%d\n",Sum);
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
	for(i=0;i<Num;i++)
    {
        (*result)+=PA[i];
    }



	/******end******/

}
