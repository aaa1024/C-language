#include <stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/******start******/
void fun(int *a,int *b);
/******end******/

int main()
{
	int a,b;
	printf("Input a, b:");
	scanf("%d,%d",&a,&b);
	printf("Output:\n");
	fun(&a,&b);

	return 0;
}


/* �����ִ��빦�ܽ��飺�������� */
/******start******/
void fun(int *a,int *b)
{
    printf("max=%d,min=%d",*a>*b? *a:*b,*a<*b? *a:*b);
}

/******end******/
