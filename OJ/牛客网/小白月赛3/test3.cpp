#include <iostream>
using namespace std;
int main(){
	for (int i = 1; i <= 100; i++){
		for (int j = 200; j <= 300; j++){
			int n = i ^ j;
			cout << n << endl;
		}
	}
}