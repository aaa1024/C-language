#include <stdio.h>
int main()
{
    int budget[13], deposit = 0;
    int i, s = 0;
    for (i = 1; i <= 12; i++)
    {
        scanf("%d", &budget[i]);
    }
    for (i = 1; i <= 12; i++)
    {
        s = s + 300 -budget[i];
        if (s < 0)
        {
            printf("%d\n", -i);
            return 0;
        }
        if (s >= 100)
        {
            deposit += s - s % 100;
            s = s %100;
        }
    //    printf("%d %d\n", s, deposit);
    }

    printf("%.0f", deposit * 1.2);
    return 0;
}
