#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	int a[100];
	memset(a, 1, sizeof(a));
	printf("%d\n", a[32]);
	//实验证明不能用memset将数组初始化为1

	int b[100];
	memset(b, -1, sizeof(b));
	printf("%d\n", b[43]);
	//可以初始化为-1

	int c[100];
	memset(c, 0, sizeof(c));
	printf("%d\n", c[43]);
	//可以初始化为0
	return 0;
}