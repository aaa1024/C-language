#include<stdio.h>
int main()
{
	/*
	例如’E’用’A’代替，’Z’用’U’代替，’D’用Z代替，’C’用’Y’代替，
	’B’用’X’代替，’A’用’V’代替。修改程序并运行。
	*/
	char c1='T',c2='o',c3='d',c4='a',c5='y';
	c1-=4;
	c2-=4;
	c3+=22;
	c4+=22;
	c5-=4;
	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	return 0;
}