#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, array[12], i, x, a, b, k;
    while(scanf("%d%d", &n, &m)!=EOF){
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for(k = 0; k < m; k++)
    {
        scanf("%d",&x);
        switch(x)
        {
            //在下标为a的位置插入一个整数b
            case 1:
                scanf("%d%d", &a, &b);

                for(i = n; i > a; i--)
                {
                    array[i] = array[i-1];
                }
                array[a] = b;
                n++;
                break;
            case 2:
                scanf("%d",&b);
                for (i = b; i < n; i++)
                {
                    array[i] = array[i+1];
                }
                n--;
                break;
            case 3:
                scanf("%d%d", &a, &b);
                array[a] = b;
                break;
            case 4:
                for(i = 0; i < n; i++)
                    printf("%d ",array[i]);
                printf("\n");
                break;
        }
    }
    }
    return 0;
}
