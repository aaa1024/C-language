#include <stdio.h>
int main()
{
    int i, j, i2, j2, n, t = 0;
    int k = 0;
    int a[100][100];
    int flag[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int tot = 0;
    memset(a, 0, sizeof(int));
    scanf("%d", &n);
    i = 0; j = 0;
    while (tot < n*n)
    {
        i2 = i + flag[t][0];
        j2 = j + flag[t][1];
  //      printf("i:%d j:%d\n", i, j);
        if (tot + 1 == n * n)
        {
            a[i][j] = ++tot;
            break;
        }
        if(a[i2][j2] != 0 || i2 == n || j2 == n || i2 == -1 || j2 == -1)
        {
            t = (t + 1) % 4;
    //        printf("aaa\n");
        }
        else
        {
            a[i][j] = ++tot;
            i = i2;
            j = j2;
      //      printf("bbb\n");
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
