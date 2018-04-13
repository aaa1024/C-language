#include <iostream>
using namespace std;
/*
C++11 提供了 constexpr 让用户显式的声明函数或对象构造函数在编译器会成为常数，这个关键字明确的告诉编译器应该去验证 len_foo 在编译器就应该是一个常数。
来源: 实验楼
链接: https://www.shiyanlou.com/courses/605
本课程内容，由作者授权实验楼发布，未经允许，禁止转载、下载及非法传播
*/
constexpr int fibonacci(const int n)
{
	return n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	cout << fibonacci(5) << endl;
	return 0;
}