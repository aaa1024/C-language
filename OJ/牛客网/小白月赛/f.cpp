#include <cstdio>
#include <cstring>
#define M 10001
int main()
{
	int x, y, z, n;
	int xx[M], yy[M], zz[M];
	int xxx, yyy, zzz;
	char zheng[M][M], zuo[M][M], fu[M][M];
	

//	printf("%daaa%d\n", zheng[1][5], zuo[3][4]);
	scanf("%d%d%d%d", &x, &y, &z, &n);
	for (int i = 0; i < n; i++)
	{
//		scanf("%d%d%d", &xx[i], &yy[i], &zz[i]);
		scanf("%d%d%d", &xxx, &yyy, &zzz);
		zheng[yyy][xxx] = 'x';
		zuo[yyy][zzz] = 'x';
		fu[zzz][xxx] = 'x';
	}
	for (int i = y; i >= 1; i--)
	{
		for (int j = 1; j <= x; j++)
		{
			if (zheng[i][j] == 'x')
			{
				printf("x");
			}
			else
			{
				printf(".");
			}
		}
		printf(" ");
		for (int j = 1; j <= z; j++)
		{
			if (zuo[i][j] == 'x')
			{
				printf("x");
			}
			else
			{
				printf(".");
			}
		}

		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= z; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			if (fu[i][j] == 'x')
			{
				printf("x");
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	
	}
}