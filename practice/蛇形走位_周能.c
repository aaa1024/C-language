#include<stdio.h>
int main()
{
	int i=0,j=0,n,a[20][20],x=1,m=0,sum=2;
	printf("Please input N [1-15]:\n");
	scanf("%d",&n);
	printf("Output:\n");
	a[0][0]=1;
	while(m<=n/2)
	{
		if(x%4==1)
		{
			j++;
			while(j<n-m)
			{
				a[i][j]=sum++;
				j++;
			}
			j--;
		}
		else if(x%4==2)
		{
			i++;
			while(i<n-m)
			{
				a[i][j]=sum++;
				i++;
			}
			i--;
		}
		else if(x%4==3)
		{
			j--;
			while(j>=(0+m))
			{
				a[i][j]=sum++;
				j--;
			}
			j++;
		}
		else if(x%4==0)
		{
			m=x/4;
			i--;
			while(i>=(0+m))
			{
				a[i][j]=sum++;
				i--;
			}
			i++;
		}
		x++;
	}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
	  printf("%5d",a[i][j]);
  printf("\n");
}
	return 0;
}
