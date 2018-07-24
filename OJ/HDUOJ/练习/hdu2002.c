#include <stdio.h>
#define PI 3.1415927
int main()
{
	double r, v;

	while (scanf("%lf", &r) != EOF){
	v = r * r * r * PI * 4.0 / 3.0;
	printf("%.3lf\n", v);
	}
	/* code */
	return 0;
}
