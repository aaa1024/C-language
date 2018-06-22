#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char ch;
	fstream file("binary.dat", ios::in|ios::binary);
	if (!file){
		exit(0);
	}
	file.seekg(1L, ios::beg);
	file.get(ch);
	cout << ch << endl;
	return 0;
}