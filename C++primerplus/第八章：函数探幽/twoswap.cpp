#include <cstdio>
#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b);
struct job
{
	char name[40];
	double salary;
	int floor;
};
template <> void Swap <job> (job &j1, job &j2);
void Show(job &j);

int main()
{
//	cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	Swap(i, j);
	cout << i << " " << j << endl;
	job sue = {"susan", 4300.2, 8};
	job sidney = {"Sidney", 78060.72, 9};
	Show(sue);
	Show(sidney);

	Swap(sue, sidney);

	Show(sue);
	Show(sidney);
	return 0;
}


template <typename T> // write this code when you use template everytime
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;

	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job & j)
{
	cout << j.name << endl;
	cout << j.salary << endl;
	cout << j.floor << endl;
	cout <<endl;
} 