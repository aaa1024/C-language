#include <stdio.h>
#include <math.h>
#include <conio.h>
//简单的实现一下，就用讲座的数据
int main()
{
    int a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, d1, d2, d3, d4;
    a1 = 5; b1 = 104;
    a2 = 1; b2 = 81;
    a3 = 102; b3 = 10;
    a4 = 98; b4= 2;
    printf("Input Fight lens=");
    scanf("%d", &a5);
    printf("Input Kiss lens=");
    scanf("%d", &b5);
    d1 = sqrt( pow((a1-a5), 2)+pow((b1-b5), 2) );
    d2 = sqrt( pow((a2-a5), 2)+pow((b2-b5), 2) );
    d3 = sqrt( pow((a3-a5), 2)+pow((b3-b5), 2) );
    d4 = sqrt( pow((a4-a5), 2)+pow((b4-b5), 2) );
    if ((d1+d2)<(d3+d4))
        printf("It's a Romantic movie!");
    else
        printf("It's a Action movie!");
    getch();
    return 0;
}