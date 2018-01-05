#include <stdio.h>
int main()
{
    int i;
    char s[100];
    char c;
    printf("Enter a string:");
    gets(s);
    printf("Enter a character:");
    printf("Output:\n");
    c = getchar();
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != c)
            putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
