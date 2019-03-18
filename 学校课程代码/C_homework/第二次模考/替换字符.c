#include <stdio.h>
int main()
{
    int i;
    char s[100];
    char a, b;
    printf("Enter a string:");
    gets(s);
    printf("Enter a,b:");
    scanf("%c,%c", &a, &b);
    printf("Output:\nThe new string is----");
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == a)
            putchar(b);
        else
            putchar(s[i]);
    }
    printf("\n");
    return 0;
}
