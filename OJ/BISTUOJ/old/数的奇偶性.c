#include <stdio.h>
#include <math.h>
int s(int n)
{
    if(n % 2 == 0) return 0;
    else return 1;
}
int main()
{
    int i, j;
    int t;
    int n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", s(n));
    }
    return 0;
}
