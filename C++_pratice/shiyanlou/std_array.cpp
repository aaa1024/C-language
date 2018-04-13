#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
void foo(int *p, int len);
int main()
{
	std:array<int, 4> arr = {3, 2, 1, 4};
	//Tow ways of passing parameter
	foo(&arr[0], arr.size());
	foo(arr.data(), arr.size());
	//std::sort
	std::sort(arr.begin(), arr.end());
	foo(arr.data(), arr.size());
}
void foo(int *p, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}