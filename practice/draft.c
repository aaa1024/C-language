#include <stdio.h>

/******start******/
int IsShuShu(int n);
/******end******/

int main()
{
	int x;
	printf("input a integer: ");
	scanf("%d", &x);

	printf("output:\n");
	if(IsShuShu(x))
		puts("是素数");
	else
		puts("不是素数");

        return 0;
}

/******start******/
IsShuShu(int n)
{
    int i;
	int f=1, I;
	for (i=2; i*i<=n; i++)
		if (n%i==0)
        {
            f=0;
            break;
        }

	return (f);
}


/******end******/
