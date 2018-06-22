#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> a(100, 30);

int main(){
	a.clear();
	cout << a[2] << endl;
	cout << a.size() << endl;
	for (int i = 0; i < 5; i++){
		int b;
		cin >> b;
	//	a[i] = b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < 5; i++){
		cout << a[i] << " ";
	}
	return 0;
}
