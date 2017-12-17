#include<stdio.h>
#include<stdlib.h>
int main()
{
    char argv[100];
    int ch;
    FILE *fp;
    unsigned long count = 0;
    scanf("%s",argv);
    if ((fp = fopen(argv,"r")) == NULL)
    {
        printf("Can't open %s\n",argv);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n",argv, count);

    return 0;
}
