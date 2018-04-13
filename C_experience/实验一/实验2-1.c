#include<stdio.h>
int main()
{
	int key,t,i;
	char c[6];

	printf("Please input text:\n");
	scanf("%s",c);

	printf("Please input key:\n");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(c[i]>='A'&&c[i]<='Z'||c[i]>='a'&&c[i]<='z')
        {
            t='A';
            if(c[i]>='a'&&c[i]<='z')
                t='a';
            c[i]=t+(c[i]-t+key+26)%26;
        }
        putchar(c[i]);
	}
	printf("\n");
	return 0;
}