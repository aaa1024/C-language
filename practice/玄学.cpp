#include <iostream>
using namespace std;
int main(){
	int i = 5;
	// int a = ++i;
	// int b = ++i;
	// int c = ++i;
	int p = (++i) + ((++i) + (++i));
	cout << p << endl;
	return 0;
}