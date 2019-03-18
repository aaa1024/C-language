#include <stdio.h>

/******start******/
int IsShuShu(int x);

/******end******/

int main()
{
	int i, t, m, n, mark = 0;
	printf("please input n:");

    scanf("%d", &n);
    printf("Output:\n");
    for (i = 2; i < n; i++)
    {
        if(IsShuShu(i) && i % 10 == 1)
        {
            if(mark)
                printf(" ");
            printf("%d", i);
            mark = 1;
        }

    }
    printf("\n");
    if (!mark)
        printf("-1");
    return 0;
}

/******start******/
int IsShuShu(int x)
{
    int i;
    if (x == 1) return 0;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
/******end******/
