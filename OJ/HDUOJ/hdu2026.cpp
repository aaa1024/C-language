#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int t = 'A' - 'a';
	while (getline(cin, a))
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (i == 0)
			{
				a[i] += t;
			}
			else if(a[i - 1] == ' ')
			{
				a[i] += t;
			}
		}
		cout << a << endl;
	}
	return 0;
}