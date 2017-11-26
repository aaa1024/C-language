#include<stdio.h>
int main()
{
	int i,j,mark=0,t,max;
	int a[20];
	int sum=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
		if(i==1)
		{
			max=a[1];
			mark=1;
		}
		if(a[i]>max)
		{
			max=a[i];
			mark=i;
		}
	}
	printf("The average is %.2f\n",sum/10.0);
	printf("The max is the No.%d student\n",mark);
	printf("Sorted:\n");
	for(i=1;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=1;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}