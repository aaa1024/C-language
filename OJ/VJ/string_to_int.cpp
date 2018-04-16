#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int num = 0;
	char s[] = "2391";
	for (int i = 0; i < strlen(s); i++)
	{
		printf("%d\n", num);
		num *= 10;
		printf("%d\n", num);
		num += s[i] - '0';
		printf("%d\n\n", num);
	}
	printf("%d\n", num);
	return 0;
}