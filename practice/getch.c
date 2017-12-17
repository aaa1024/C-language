#include<stdio.h>
int main()
{
    char key;
    int direction;
    for(int i=1;i<=10;i++)
    {
        key = getch();
        direction = key;
        printf("%d %d\n",i,direction);
    }
    system("cls");
}
