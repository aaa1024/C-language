#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;
string m[10];
int main()
{
	int  k = 0;
	
	while (getline(cin, m[0]))
	{
		if(m[0][0] == 'Z') break;

		for (int i = 1; i <= 4; i++)
		{
			getline(cin, m[i]);
		}

		int mi, mj;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (m[i][j] == ' ')
				{
					mi = i;
					mj = j;
				}
			}
		}
		char cmd;

		int error = 0;
		int rs = 0;
		while ((cmd = getchar()) != '0')
		{
			switch(cmd)
			{
				case 'A':
					if(mi - 1 < 0)
					{
						error = 1;
						continue;
					}
					m[mi][mj] = m[mi - 1] [mj];
					m[mi - 1][mj] = ' ';
					mi--;
					break;
				case 'B':
					if (mi + 1 > 4)
					{
						error = 1;
						continue;
					}
					m[mi][mj] = m[mi + 1][mj];
					m[mi + 1][mj] = ' ';
					mi++;
					break;
				case 'L':
					if (mj - 1 < 0)
					{
						error = 1;
						continue;
					}
					m[mi][mj] = m[mi][mj - 1];
					m[mi][mj - 1] = ' ';
					mj--;
					break;
				case 'R':
					if (mj + 1> 4)
					{
						error = 1;
						continue;
					}
					m[mi][mj] = m[mi][mj + 1];
					m[mi][mj + 1] = ' ';
					mj++;
					break;
			};
		}
		getchar();
		if(k)
		{
			cout << endl;
		}
		k++;
		printf("Puzzle #%d:\n", k);
		if (!error)
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					cout << m[i][j];
					if (j != 4)
					{
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else
		{
			cout << "This puzzle has no final configuration." << endl;
		}
	}

	return 0;
}