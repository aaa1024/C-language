#include <stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
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

/* �����ִ��빦�ܽ��飺ʵ�ֺ������� */
/******start******/
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


/******end******/
