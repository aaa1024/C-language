#include <stdio.h>
#include <math.h>
int main()
{
    long long int a,b;
    int count = 0;
    scanf("%lld%lld",&a,&b);

 //   printf("%lld %lld\n", a, b);
    while( a <= b)
    {
        a *= 2;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
