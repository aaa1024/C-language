#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream outfile("out_data.dat", ios::out|ios::binary);
	if (!outfile){
		cout << "Can not open the file" << endl;
		return 0;
	}
	for (int i = 2; i <= 100; i += 2){
		int b = i * 3;
		outfile.write((char *)&b, sizeof(int));
	}
	outfile.close();
	return 0;
}