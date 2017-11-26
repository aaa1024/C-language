#include<stdio.h>
int main()
{
	int n,count=1,num=10,m;
	printf("请输入一个数:\n");
	scanf("%d",&n);
	while(n/num!=0)
	{
		count++;
		num*=10;
	}
	printf("它是%d位数\n",count);

	printf("分别输出它的每一位数\n");
	m=n;
	num/=10;
	while(num>0)
	{
		printf("%d,",m/num);
		m=m%num;
		num/=10;
	}


	printf("倒序输出它的每一位数\n");
	m=n;
	while(m>0)
	{
		printf("%d",m%10);
		m/=10;
	}
	printf("\n");
	return 0;
}