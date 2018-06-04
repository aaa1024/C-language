#include <stdio.h>
#include <string.h>

int main()
{
    int k = 0, i;
    char s[100];
    while (scanf("%s", s) != EOF)
    {
        k = 0;
        for (i = 0; i < (int)strlen(s) - 3; i++){
        	if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '1' && s[i + 3] == '7'){
				k++;
			}
        }

        for (i = 0; i < k; i++)
        {
            printf("8888");
        }
        if (i)
        	printf("\n");

    }
}
