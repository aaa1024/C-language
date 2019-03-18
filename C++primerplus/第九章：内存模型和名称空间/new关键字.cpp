#include <cstdio>
#include <new>
#include <iostream>
using namespace std;

struct Programer
{
	int age;
	int salary;
};

char s1[100];
char s2[100];

int main()
{
	Programer *p1, *p2, *p3;
	p1 = new Programer;

	p2 = new (s1) Programer; 

	p1->age = 30;
	p2->age = 40;

	printf("%p %p\n", p2, s1);
	printf("%d %d\n", p2->age, ((Programer *)s1)->age);

	p2++;
	p2->age = 50;

	printf("%p %p\n", p2, (s1 + sizeof(Programer)));
	printf("%d %d\n", p2->age, ((Programer *) (s1 + sizeof(Programer)))->age);

	p3 = (Programer *) s1;
	p3++;

	printf("%d %d\n", p2->age, p3->age);

	return 0;
}