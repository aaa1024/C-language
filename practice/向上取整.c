#include <stdio.h>
int main()
{
    unsigned long long a,b,c;
    scanf("%llu%llu",&a,&b);
    c = a / b;

    if(c * b != a)
    {
        c++;
    }
    printf("%llu\n",c);
}
