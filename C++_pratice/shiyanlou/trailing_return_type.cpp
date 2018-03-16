#include <iostream>
template <typename T, typename U>
auto add (T x, U y) -> decltype(x + y)
{
	return x + y;
}
int main()
{
	int a = 5;
	double b = 10.;
	double c  = 90.2;
	std::cout << add(a, b) << std::endl;
	std::cout << add(b, c) << std::endl;
	return 0;
}