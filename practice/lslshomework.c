#include<stdio.h>
#include<string.h>
int main()

{
	char s1[127]={0},s2[127]={0};
	int a,b,i;
	scanf("%s%s",&s1,&s2);
	a=strlen(s1);b=strlen(s2);
	if(a>=b)
	{
		for(i=2*b;i<a+b;i++)
		{
			s1[i]=s1[i-b];

		}
		for(i=b;i>0;i--)
		{
			s1[(i-1)*2]=s1[i-1];
			s1[i*2-1]=s2[i-1];
		}

	}
	else
	{
		for(i=a;i>0;i--)
		{

			s1[(i-1)*2]=s1[i-1];
			s1[i*2-1]=s2[i-1];
		}
		for(i=2*a;i<a+b;i++)
		{
			s1[i]=s2[i-a];
		}

	}
	puts(s1);
	return 0;
}

