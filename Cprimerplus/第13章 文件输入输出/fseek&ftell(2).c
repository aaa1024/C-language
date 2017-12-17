#include <stdio.h>
int main()
{
    int last;
    long count;
    FILE *fp;
    char file[100], c;
    scanf("%s", file);
    if((fp = fopen(file, "rb")) == NULL)
    {
        printf("Can not open %s\n",file);
    }
    fseek(fp, 0L, SEEK_END);
    last = ftell(fp);
    printf("%d",last);
    fseek(fp, 0L, SEEK_END);
    for(count = 0L;count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);
        c = fgetc(fp);
        putchar(c);
    }
}
