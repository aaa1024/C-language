#include<stdio.h>
#include<ctype.h>
int main(void)
{
    freopen("output.txt","w",stdout);
	char a;
	while(printf("������һ���ַ�\n")&&(scanf("%c",&a))&&a!='=')
	{
	    printf("�������%c\n",a);
		printf("isalum:%d\n",isalnum(a));//Сд����2,��д����1�����ַ���4
		printf("isalpha:%d\n",isalpha(a));
		printf("isblank:%d\n",isblank(a));
		printf("iscntrl:%d\n",iscntrl(a));
		printf("isdigit:%d\n",isdigit(a));
		printf("isgraph:%d\n",isgraph(a));
		printf("islower:%d\n",islower(a));
		printf("isprint:%d\n",isprint(a));
		printf("ispunct%d\n",ispunct(a));
		printf("isspace%d\n",isspace(a));
		printf("isupper%d\n",isupper(a));
		printf("isxdigit%d\n",isxdigit(a));
        getchar();
	}
	return 0;
}
