#include <iostream>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += 32;
			}
		}
		if (s == "lovelive")
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}

	return 0;
}