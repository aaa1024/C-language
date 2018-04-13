#include <stdio.h>
int main()
{
    int a, b, c;
    int i;
    int x = 'Z';
    for (a = 'A'; a <= x; a++)
    {
        for (b = 'A'; b < 'A' + x - a; b++)
            putchar(' ');
        for (i = 1; i <= 2 * (a - 'A') + 1; i++)
            putchar(a);
        printf("\n");
    }
    return 0;
}
