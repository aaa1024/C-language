#include <stdio.h>
void judge(int *a, int *b)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
        {
            printf("First\n");
            return;
        }
        else if (a[i] < b[i])
        {
            printf("Second\n");
            return;
        }
    }
    printf("Same\n");
}
int main()
{
    int t, a[3], b[3];
    printf("input number of test(��������):\n");
    scanf("%d", &t);
    while (t--)
    {
        printf("input the first group version No.:(���汾�� �Ӱ汾�� �޶���)\n");
        scanf("%d%d%d", &a[0], &a[1], &a[2]);

        printf("input the second group version No.:(���汾�� �Ӱ汾�� �޶���)\n");
        scanf("%d%d%d", &b[0], &b[1], &b[2]);

        printf("Output:\n");
        judge(a, b);
    }

}
