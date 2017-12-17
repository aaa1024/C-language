#include<stdio.h>
int main()
{
	int key,i;
	char text;

	printf("Please input text");
	scanf("%d",&key);
	
	print("Please input text");
	text=getchar();
	while(text!='\n')
	{
		putchar(text+key);
		text=getchar();
	}
	return 0;
}