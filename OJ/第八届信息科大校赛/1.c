#include <stdio.h>
#include <string.h>

int main()
{
    int n, k = 0, i;
    char s[100];
    char *t;
    char q[] = "2017";
    while (scanf("%s", s) != EOF)
    {
        k = 0;
        t = s;
        while( t!= NULL)
        {
            t = strstr(t,"2017");
            if (t == NULL) break;
            t++;
            t++;
            t++;
            t++;
            k++;
        }

        for (i = 0; i < k; i++)
        {
            printf("8888");
        }
        printf("\n");

    }
}
