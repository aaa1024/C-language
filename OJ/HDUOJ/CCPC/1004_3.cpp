#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	long long int n, a, b, c, x;
	while (t--){
        int flag = 0;
		scanf("%lld%lld", &n, &a);
		if (n == 2 && a != 1)
		{
			if (a & 1)
			{
				x = ((a - 1) >> 1);
				c = x*x + (x + 1)*(x + 1);
				b = c - 1;
			}
			else
			{
				x = (a >> 1) - 1;
				b = x*(x + 2);
				c = b + 2;
			}
			printf("%lld %lld\n", b, c);
		}
		else if (n == 1){
            printf("%lld %lld\n", (long long)1, (long long) a + 1);
		}
		else{
            printf("-1 -1\n");
		}

	}
	return 0;
}
