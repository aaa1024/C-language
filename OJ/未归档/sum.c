#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        sum = 0;
        for(i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("%d\n\n",sum);
      //  if(t) printf("\n\n")
    }
    return 0;
}
