#include <stdio.h>

/******start******/
int IsShuShu(int x);

/******end******/

int main()
{
	int x;
	while(1){
	printf("input a integer: ");
	scanf("%d", &x);

	printf("output:\n");
	if(IsShuShu(x))
		puts("������");
	else
		puts("��������");
	}
        return 0;
}

/******start******/
int IsShuShu(int x)
{
    int i;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
/******end******/
