#include <stdio.h>
#include <string.h>

/******start******/
ReverseSTring(char *str);

/******end******/

int main()
{
	char str[200]={0};
	printf("input a string: ");
	gets(str);

	ReverseSTring(str);

	printf("output:\n");
	puts(str);

	return 0;
}

/******start******/
ReverseSTring(char *str)
{
    int i,len;
    char str2[100];
    strcpy(str2,str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        str[i]=str2[len-i-1];
    }
    str[len]='\0';
}




/******end******/
