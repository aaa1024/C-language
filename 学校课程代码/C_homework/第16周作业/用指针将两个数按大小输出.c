#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
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


/* 本部分代码功能建议：函数定义 */
/******start******/
void fun(int *a,int *b)
{
    printf("max=%d,min=%d",*a>*b? *a:*b,*a<*b? *a:*b);
}

/******end******/
