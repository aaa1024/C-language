#include <stdio.h>
int main()
{
	int t;
	double a, b, c;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		printf("%.20g %.20g %.20g\n", (2 * b - a - c) / 1.7320508075689, (b - 2 * a + c) / 1.7320508075689, 0.);
	}
}
