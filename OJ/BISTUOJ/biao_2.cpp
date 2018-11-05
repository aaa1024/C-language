#include<iostream>
using namespace std;
int main()
{
	freopen("out.txt", "w", stdout);
	int a,b,i,j,s;
	for(a=1;a<=200007;a++)
	{	
		s=0;
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				s=s+i;
			}				
		}
		b=s;											//每个s1对应一个b，但不是每个b都满足条件 
		if(b!=a&&b<=200007)
		{
			s=0;
			for(j=1;j<b;j++)
			{
				if(b%j==0)
				{
					s=s+j;
				}
			}
			if(s==a&&a<b)
			{
			//	cout<<a<<" "<<b<<" " << a + b << endl;
				printf("if (n >= %d){sum += %d;}\n", b, a + b);
			}
		}
	}
}