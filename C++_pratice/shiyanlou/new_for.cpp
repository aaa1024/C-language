#include <iostream>
#include <vector>
int main()
{
	int array[] = {1, 2, 3, 4, 5};
	for (auto &x : array)
	{
		std::cout << x << std::endl;
	}

	std::vector<int> arr(5, 100);
	for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	std::cout << std::endl;
	for(auto &i : arr)
	{
		std::cout << i << std::endl;
	}

	return 0;
}