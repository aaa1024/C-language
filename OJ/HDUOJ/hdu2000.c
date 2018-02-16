#include <stdio.h>

int main()
{
    int i, j;
    char a, b ,c, t;
    char s[100];
    while (scanf("%s", s) != EOF)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = i + 1; j < 3; j++)
            {
                if(s[i] > s[j])
                {
                    t = s[j];
                    s[j] = s[i];
                    s[i] = t;
                }
            }

        }
        printf("%c %c %c\n", s[0], s[1], s[2]);
    }
    return 0;
}
