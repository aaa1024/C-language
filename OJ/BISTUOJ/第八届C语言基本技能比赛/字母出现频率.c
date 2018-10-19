#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, len, zm = 0, n;
    int count[27] = {0};
    double pl;
    char s[1001];
    gets(s);
    scanf("%d",&n);
    len = strlen(s);
  //  printf("%d",'A'-'a');
    for(i = 0; i < len; i++)
    {
        for (j = 'A'; j <= 'Z'; j++)
        {
            if(j == s[i] || j + 32== s[i])
            {
                count[j-'A']++;
            }
        }
    }
 //   printf("zm:%d,len:%d\n", zm, len);

    for(i = 0; i < 26; i++)
    {
        pl = count[i]/(double)len;

        printf("%10.4lf",pl);
        if((i+1)%n==0) printf("\n");
    }

}
