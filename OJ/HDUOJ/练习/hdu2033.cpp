#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int ah, am, as, bh, bm, bs;
	int n;
	scanf("%d", &n);
	while (n--)
	{
        scanf("%d%d%d%d%d%d", &ah, &am, &as, &bh, &bm, &bs);
		as += bs;
		am += bm;
		ah += bh;

		if (as >= 60)
		{
			as -= 60;
			am++;
		}
		if (am >= 60)
		{
			am -= 60;
			ah++;
		}

		printf("%d %d %d\n", ah, am, as);
	}

	return 0;
}
