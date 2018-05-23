#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std ;
int main(){
	ifstream infile("text.txt", ios::in);
	if (!infile){
		cout << "open error!" << endl;
	}
	string a;
	while (infile>>a){
		cout << a << endl;
	}
	return 0;
}