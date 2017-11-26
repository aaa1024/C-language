#include<stdio.h>
int main()
{
	/*
	改变c1,c2,c3,c4,c5的初始值为：’T’、’o’、’d’、’a’、’y’，
	对译码进行如下补充，’W’用’A’代替，’X’用’B’代替，’Y’用’C’代替，’Z’用’D’代替。修改程序并运行。
	*/
	char c1='T',c2='o',c3='d',c4='a',c5='y';
	c1+=4;
	c2+=4;
	c3+=4;
	c4+=4;
	c5-=22;
	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	return 0;
}