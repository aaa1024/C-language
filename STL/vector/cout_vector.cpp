#include <iostream>
#include <vector>
using namespace std;
template <typename T>
Í
ostream& operator << (ostream &out, const vector <T> v){
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	return out;
}

int main(){
	std::vector<int> v;
	for (int i = 1; i <= 5; i++){
		v.push_back(i);
	}
	cout << v << endl;
}