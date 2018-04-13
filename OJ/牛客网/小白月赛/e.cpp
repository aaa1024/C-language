#include <cstdio>
#include <cmath>

int main()
{
	double r, ans0, ans = -100;
	double a, b, c;
	scanf("%lf", &r);

	for (a = 0.01; a < M_PI ;a += 0.01)
	{
		for (b = 0.01; a + b < M_PI; b += 0.01)
		{
			c = M_PI - a - b;
			ans0 = tan(a/2)*tan(b/2) + tan(b/2)*tan(c/2) + tan(a/2)*tan(c/2) + sin(a) * r;
			if (ans0 > ans)
			{
				ans = ans0;
			}
		}
	}

	printf("%.2lf\n", ans);
	return 0;
}