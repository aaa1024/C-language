#include <cstdio>

void swap(int *d1, int *d2);

void swap(int &d1, int &d2);



int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    printf("a:%d, b:%d\n", a, b);

    swap (&a, &b);

    printf("a:%d, b:%d\n", a, b);

    swap (a, b);

    printf("a:%d, b:%d\n", a, b);

return 0;


    

}
void swap(int *d1, int *d2) //通过指针传递参数
{
	int t;
	t = *d1;
	*d1 = *d2;
	*d2 = t;
}

void swap(int &d1, int &d2) // 
{
//通过引用传递参数时，不需要再加*号，而是当做局部变量一样使用
//并且可以直接改变它们的值
	int t = d1;
	d1 = d2;
	d2 = t;
}