#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int *p1;
	int **pp2;
	const int n = 13;
	pp2 = &p1;
	p1 = new int;
	*p1 = 10;
	printf("%d\n", *p1);

	return 0;
}