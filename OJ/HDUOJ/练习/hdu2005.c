#include <stdio.h>
int day[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int count_day(int y, int m, int d)
{
    int i, sum = 0;
    sum = day[m] + d;
    if (m > 2)
    {
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            sum++;
    }
    return sum;
}
int main()
{
    int y, m, d;
    while (scanf("%d/%d/%d", &y, &m, &d) != EOF)
        printf("%d\n", count_day(y, m, d));
    return 0;
}
