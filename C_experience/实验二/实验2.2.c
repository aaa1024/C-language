/*
��S_n=a+aa+aaa+??(a��a)��nֵ֮������a��һ�����֡����磺2+22+222+2222+22222����ʱa=2,n=5��, a,n���ɼ�������
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