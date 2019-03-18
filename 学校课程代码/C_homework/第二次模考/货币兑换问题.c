#include <stdio.h>
int main()
{
    double max = -10000;
    double date, rate;
    int i;
    printf("Please input date:");
    scanf("%lf", &date);
    printf("Input Exchange rate:\n");
    for(i = 0; i < 12; i++)
    {
        scanf("%lf", &rate);
        if(max < rate)
            max = rate;
    }
    printf("Output:\nThe ans is %.2lf", max * date);
    return 0;
}
