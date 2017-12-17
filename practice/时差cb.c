#include<stdio.h>
int main()
{
	int a1,a2,b1,b2;//1代表第一个时间，2代表第二个时间，a代表时，b代表分
	int s1,s2;//s代表总的分钟,1表示第一个时间，2表示第二个时间
	int c,h,min;
	scanf("%d%d",&a1,&b1);
	scanf("%d%d",&a2,&b2);
	//求出总的分钟数
	s1=a1*60+b1;
	s2=a2*60+b2;
	//因为后面要用s1减去s2，所以如果s2大于s1，就交换他们的数值
	if(s2>s1)
	{
		int t=s2;
		s2=s1;
		s1=t;
	}
	c=s1-s2;//c就是分钟数差
	h=c/60;
	min=c%60;
	//输出的你自己调整
	printf("时差是%d小时%d分钟",h,min);
	return 0;
}
