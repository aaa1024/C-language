#include<stdio.h>
int main()
{
	//a,b,c
	int a,b,c,t;
	printf("Input a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Output:\n");
	if(a<b)//执行完这个if，a永远比b大了
	{
		t=a;
		a=b;
		b=t;
	}
	if(a<c)//也就是说c>a>b
	{
	//		printf("%d %d %d",c,a,b);//输出c,a,b
            printf("max=%d", c);
	}
	else//进这个else说明a>c，
	{
		if(c>b)//进入else说明a>c,然后c又大于b
		{
		//	printf("%d %d %d",a,c,b);
            printf("max=%d", a);
		}
		else//说明a>c，但是b大于c
		{
		//	printf("%d %d %d",a,b,c);
            printf("max=%d", a);
		}
	}
}
