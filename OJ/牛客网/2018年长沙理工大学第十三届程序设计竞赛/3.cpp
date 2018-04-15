#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	 int T;
	 scanf("%d", &T);
	 while (T--)
	 {
	 	double gailv = 1.0;
	 	long long a, b, k;
	 	scanf("%lld%lld%lld", &a, &b, &k);

	 	gailv = b / (double)(a + b);

	 	printf("%.3lf\n", gailv);
	 }

	 return 0;
}