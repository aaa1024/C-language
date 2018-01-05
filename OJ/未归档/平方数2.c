#include <stdio.h>
#include <math.h>
int main()
{
    int n, l, r;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d", &l, &r);
        if(sqrt(l)*sqrt(l) == l)
            printf("%d\n",(int)sqrt(r) - (int)sqrt(l) + 1);
        else
            printf("%d\n",(int)sqrt(r) - (int)sqrt(l));
    }
    return 0;
}
