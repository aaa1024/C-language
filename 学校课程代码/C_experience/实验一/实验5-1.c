#include<stdio.h>
int main()
{
	int n,count=1,num=10,m;
	printf("������һ����:\n");
	scanf("%d",&n);
	while(n/num!=0)
	{
		count++;
		num*=10;
	}
	printf("����%dλ��\n",count);

	printf("�ֱ��������ÿһλ��\n");
	m=n;
	num/=10;
	while(num>0)
	{
		printf("%d,",m/num);
		m=m%num;
		num/=10;
	}


	printf("�����������ÿһλ��\n");
	m=n;
	while(m>0)
	{
		printf("%d",m%10);
		m/=10;
	}
	printf("\n");
	return 0;
}