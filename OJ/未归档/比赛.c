#include <stdio.h>
int main()
{
    freopen("input.txt","r", stdin);
    float a[12], b[12], c[12];
    float d[12], ans;
    int i;
    for(i = 0; i < 12; i++)
        scanf("%f", &a[i]);
    for(i = 0; i < 12; i++)
        scanf("%f", &b[i]);
    for(i = 0; i < 12; i++)
        scanf("%f", &c[i]);
    for (i = 0; i < 12 ;i++)
    {
        d[i] = a[i] + (1 - a[i]) * (b[i] * (1-c[i]) + (1-b[i])*c[i]);
    }
    for(i = 0; i < 12; i++)
    {
        printf("%f\n",d[i]);
    }
    for(i = 0; i <= 12; i++)
    {
        ans = ans * (1-d[i]);
    }
    printf("ans:%f\n",ans);
}
