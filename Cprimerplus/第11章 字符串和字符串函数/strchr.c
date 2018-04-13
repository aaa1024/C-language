#include<stdio.h>
#include<string.h>
int main()
{
    char *a="abcdefg";//声明一个指针，
    char c='e';
    char *b;//用来存放返回的指针
    b=strchr(a,c);
    printf("%p %p\n",a,b);//输出的结果是两个相差4的地址，因为e字符数组里的第4个元素。
    b=strchr(a,'z');
    printf("%p %p\n",a,b);
    return 0;
}
