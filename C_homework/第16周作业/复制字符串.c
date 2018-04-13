#include <stdio.h>
#include <stdlib.h>
void copy_string(char *from, char *to);

int main()
{
	char *str1, *str2;

	printf("Please input a string str1 is:");
	/******start******/
	str1 = (char *)malloc(sizeof(char)*100);
    str2 = (char *)malloc(sizeof(char)*100);
	/******end******/
	gets(str1);
	printf("Please input a string str2 is:");
	gets(str2);

	printf("Output:\n");
	printf("string str1=%s\nstring str2=%s\n",str1,str2);
	printf("copy string str1 to string str2:");
	copy_string(str1,str2);
	printf("\nstring str1=%s\nstring str2=%s\n",str1,str2);
	return 0;
}

void copy_string(char *from, char *to)
{
	/******start******/
	int len = strlen(from);
	int i;
	for(i = 0; i < len; i++)
    {
        to[i] = from[i];
    }
    to[len] = '\0';

	/******end******/
}
