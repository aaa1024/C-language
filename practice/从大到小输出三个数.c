#include<stdio.h>
int main()
{
	//a,b,c
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)//ִ�������if��a��Զ��b����
	{
		t=a;
		a=b;
		b=t;
	}
	if(a<c)//Ҳ����˵c>a>b
	{
			printf("%d %d %d",c,a,b);//���c,a,b
	}
	else//�����else˵��a>c��
	{
		if(c>b)//����else˵��a>c,Ȼ��c�ִ���b
		{
			printf("%d %d %d",a,c,b);
		}
		else//˵��a>c������b����c
		{
			printf("%d %d %d",a,b,c);
		}
	}
}