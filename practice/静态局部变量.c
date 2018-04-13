#include <stdio.h>
void fac(int n);
int main()
{
    int n;
    printf("please input n:");
    scanf("%d", &n);
    printf("Output:\n");
    fac(n);
}
void fac(int n)
{
    static int a = 0;
    static int s = 1;

    a++;
    s *= a;

    if(a < n)
    {
        fac(n);
    }
    else
    {
        printf("%d\n", s);
    }
}
