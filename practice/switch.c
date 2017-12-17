#include<stdio.h>
int main()
{	
	int i;
	const int two=2;
	switch(i)
	{
		case 1:
			printf("case 1\n");
		case two:
			printf("case two");
	}
}