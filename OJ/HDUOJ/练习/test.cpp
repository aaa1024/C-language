#include <stdio.h>
int main()
{
	int C,n,r;
	scanf("%d",&C);
	while(C--)
	{
		scanf("%d",&n);
		r = 2*n*n - n + 1;
		printf("%d\n",r);
	}
	return 0;
}
