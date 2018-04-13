#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		double a, b, ans;
		int c;
		scanf("%lf%lf%d", &a, &b, &c);

		ans = b * pow(M_E, a);
		printf("%.*lf\n",ans,c);
	}
	return 0;
}