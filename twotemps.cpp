#include <iostream>
template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{
	using namespace std;
	int i = 10, j =20;
	cout << "i = " << i << ", j = " << j <<endl;
	cout << "Using compiler-genrate int swapper" << endl;
	Swap(i, j);
	cout << "Now, i = " << i << ", j = " << j << endl;

	int d1[Lim] = {3, 2, 4, 8, 12, 87, 40, 82};
	int d2[Lim] = {43, 12, 5, 76, 43, 62, 98, 10};
	cout << "d1	" << "d1" << endl;
	Show(d1);
	Show(d2);

	Swap(d1, d2, Lim);

	cout << "After swap :" << endl;
	Show(d1);
	Show(d2);
	return 0;
}


template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T *a, T *b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	using namespace std;
	for (int i = 0; i < Lim; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}