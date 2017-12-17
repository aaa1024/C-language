#include <stdio.h>

int main()
{
    FILE * fp;
    int a=100;

    fp = fopen("input.txt","w");
    fwrite(&a, sizeof(int), 1, fp);
    return 0;
}
