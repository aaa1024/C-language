#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char a;
	while((a=getchar())!='=')
	{
		printf("isalum:%d\n",isalnum(a));
		printf("isalpha:%d\n",isalpha(a));
		printf("%d\n",isblank(a));
		printf("iscntrl:%d\n",iscntrl(a));
		printf("isdigit:%d\n",isdigit(a));
		printf("isgraph:%d\n",isgraph(a));
		printf("islower:%d\n",islower(a));
		printf("isprint:%d\n",isprint(a));
		printf("ispunct%d\n",ispunct(a));
		printf("isspace%d\n",isspace(a));
		printf("isupper%d\n",isupper(a));
		printf("isxdigit%d\n",isxdigit(a));



	}
	return 0;
}