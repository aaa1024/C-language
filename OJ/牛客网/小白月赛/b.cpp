#include <cstdio>
#include <cmath>
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		double a, b, ans;
		int c;
		scanf("%lf%lf%d", &a, &b, &c);
		ans = pow(a, M_E) / b;
	
		printf("%.*lf\n", c, ans);
	}

	return 0;
}