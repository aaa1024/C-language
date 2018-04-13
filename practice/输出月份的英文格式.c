#include <stdio.h>
int main()
{
    int n;
    char month[13][13]={
    "",
    "January", "February",
    "March","April",
    "May", "June",
    "July","August",
    "September","October",
    "November", "December"
    };
    printf("Please input a month number:\n");
    scanf("%d", &n);
    printf("Output:\n");

    if (n > 12) printf("Input Error!\n");
    else
    printf("This month's English name is %s.\n",month[n]);
    return 0;
}
