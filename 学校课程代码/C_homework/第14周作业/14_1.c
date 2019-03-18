#include <stdio.h>

/* 本部分代码功能建议：函数原型声明 */
/******start******/
void swap(int *a,int *b);

/******end******/

int main()
{
	  int a,b;
	  int*pointer_1,*pointer_2;
	  printf("please enter a and b:");
	  scanf("%d,%d",&a,&b);
	  pointer_1=&a;
	  pointer_2=&b;
	  if(a<b) swap(pointer_1,pointer_2);
	  printf("Output:\nmax=%d,min=%d\n",a,b);
	  return 0;
 }

/* 本部分代码功能建议：实现函数功能 */
/******start******/
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


/******end******/
