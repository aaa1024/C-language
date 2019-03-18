#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream infile("out_data.dat", ios::in | ios::binary);
	if (!infile){
		cout << "Can not open the file" << endl;
		return 0;
	}
	int a[50];
	infile.read((char *)a, sizeof(int) * 50);
	for (int i = 0; i < 50; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	infile.close();
	return 0;
}