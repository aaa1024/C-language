#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
string judge(string a);
string c[3][2];
int main()
{
	string in;
	for (int i = 0; i < 3; i++)
	{
		cin >> c[i][0] >> c[i][1];
	}
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		cout << judge(in) << endl; 
	}
}

string judge(std::string a)
{
	for (int i =0; i < 3; i++)
	{
		if(a == c[i][1])
			return c[i][0];
	}
	return "Fake";
}