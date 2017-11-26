/*
求S_n=a+aa+aaa+??(a…a)┬n之值，其中a是一个数字。例如：2+22+222+2222+22222（此时a=2,n=5）, a,n均由键盘输入
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,s=0,m=1;
	int i;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a*m);
		if(i!=n) printf("+");
		s+=a*m;
		m=m*10+1;
	}
	printf("=%d\n",s);
	return 0;
}