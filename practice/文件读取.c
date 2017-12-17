#include<stdio.h>
int main()
{
	int n,i;
	freopen("read.txt","r",stdin);
	freopen("aaoutput.txt","w",stdout);
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("%d",i);
	}
	return 0;
}