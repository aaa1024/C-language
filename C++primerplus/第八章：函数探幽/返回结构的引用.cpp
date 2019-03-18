#include <cstdio>
#include <iostream>
using namespace std;

struct book 
{
	int num;
	int price;
};

book & add(book &one, book &two)
{
	one.num += two.num;
	return one;

	//better to return a reference that was declare in main function
}
int main()
{
	book one = {123, 456};
	book two = {100, 0};
	book three = add(one, two);
	printf ("%d %d", three.num, three.price);
}