#include <iostream>
using namespace std;
int main(){
	int a = 2017011471;
	int b = 107675;
	for (int i = 0; i <= 8; i++){
		printf("%d %08d\n", a + i, b - i);
	}
	cout << endl;
	for (int i = 0; i <= 300; i++){
		printf("%d %08d\n", a - i, b + i);
	}
}