#include <iostream>
using namespace std;
int main()
{
	int n, m;
	while (cin >> m >> n)
	{
		int mark[n + 1] = {0};
		int a = m / n;
		int r = m % n;
		int cy[10000] = {0};
		cout << a <<" " << r << endl;
		int k = 0;
		while(r != 0)
		{
			r *= 10;
			a = r / n;

			r = r % n;
			cout << a <<" " << r << " " << mark[r]<< endl;
			if (mark[r] == 2)
				break;
			if(mark[r] == 1)
			{
				cy[k++] = a;
			}
			mark[r]++;
		}
			cout << k << endl;
		for (int i = 0; i < k; i++)
		{
			cout << cy[i];
		}
		if (k)
			cout << endl;
	}

}