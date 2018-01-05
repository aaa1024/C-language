#include <stdio.h>
#include <math.h>
int main()
{
//    ak =[k（1+√5）2]，bk= ak + k
//    （k=0，1，2，...n 方括号表示取整函数)
    int a[100], b[100];
    int t, i, x, y;
    for(i = 0; i < 100; i++)
    {
        a[i] = i * (1 + 2.2360) / 2;
        b[i] = a[i] + i;
    }
    for(i = 0; i < 100; i++)
    {
   //     printf("%d %d\n", a[i], b[i]);
    }
    while (scanf("%d%d", &x, &y) == 2)
    {

        for(i = 0; i < 100; i++)
        {
            if(x == a[i])
            {
                if(y == b[i])
                    printf("0\n");
                else
                    printf("1\n");
                break;
            }
            else if(y == a[i])
            {
                if (x == b[i])
                    printf("0\n");
                else
                    printf("1\n");
                break;
            }
        }
    }
    return 0;
}
