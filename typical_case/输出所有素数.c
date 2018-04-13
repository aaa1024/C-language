#include <stdio.h>

/******start******/
int IsShuShu(int x);

/******end******/

int main()
{
	int i, t, m, n;
	scanf("%d", &t);
	while(t--)
    {
        scanf("%d%d", &m, &n);
        for (i = m; i <= n; i++)
        {
            if(IsShuShu(i))
                printf("%d\n", i);
        }
        printf("\n");
    }

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
