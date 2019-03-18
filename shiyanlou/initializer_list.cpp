#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;

class Magic
{
public:
	Magic(std::initializer_list<int> list) {}
};

int main()
{
	Magic magi = {1, 2, 3, 4, 5};
	std::vector<int> v = {1, 2, 3, 4};
}