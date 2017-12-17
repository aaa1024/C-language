#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    fp = fopen("output.txt","a");
    fprintf(fp, "\n");
    for(i = 0; i < 5; i++)
    {
        fprintf(fp,"%d,",i);
    }
    fclose(fp);
    return 0;
}
