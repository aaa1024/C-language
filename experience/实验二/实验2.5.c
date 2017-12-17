#include<stdio.h>
int main()
{
	int i,k=0;
	int a[10]={1,2,4,6,7,9};
	int n;
	while(1){
	scanf("%d",&n);
	for(i=0;i<7;i++)
	{
		if(a[i]<n&&a[i+1]>=n&&a[0]<a[1])
			k=i+1;
		if(a[i]>n&&a[i+1]<=n&&a[0]>a[1])
			k=i+1;
	}
	printf("(%d)\n",k);
	for(i=6;i>k;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=n;
	for(i=0;i<7;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	}

	return 0;
}