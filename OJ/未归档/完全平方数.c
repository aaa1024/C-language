#include <stdio.h>
#include <math.h>
int main()
{
    int l, r, i, t, d, count;
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%d%d", &l, &r);
        d = sqrt(l);
        if (d*d != l) d++;
  //      printf("d%d\n", d);
        while(d*d <= r)
        {
            count++;
            d++;
        }
        printf("%d\n", count);
    }
    return 0;
}
