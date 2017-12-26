#include <stdio.h>
#include <string.h>

int main()
{
    int B, I, i, S, T, U, len, min = 100;
    char str[1001];
    int n;
    while(scanf("%d", &n) != EOF){
    while (n--)
    {

        B = 0; I = 0; S = 0; T = 0; U = 0;
        scanf("%s",str);
        len = strlen(str);
        for(i = 0; i < len; i++)
        {
            if(str[i] == 'B')
                B++;
            else if(str[i] == 'I')
                I++;
            else if(str[i] == 'S')
                S++;
            else if(str[i] == 'T')
                T++;
            else if(str[i] == 'U')
                U++;
        }
        min = B;
        if (min > B) min = B;
        if (min > I) min = I;
        if (min > S) min = S;
        if (min > T) min = T;
        if (min > U) min = U;
        printf("%d\n",min);
    }
    }
    return 0;
}
