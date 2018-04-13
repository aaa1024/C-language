#include <stdio.h>

int main()
{
    enum color {red, orange, yellow};
    int i;
    for(i = red; i<= yellow; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
