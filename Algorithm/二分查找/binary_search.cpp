#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
bool binary_search(int a){
	int r = v.size() - 1;
	int l = 0;
	while (r - l >= 1){
		int m = (r + l) / 2;
		if (v[m] == a){
			return true;
		}
		else if (a > v[m]){
			l = m + 1;
		}
		else{
			r = m;
		}
	}
	return false;
}
int main(){

	for (int i = 0; i < 5; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	int x;
	cin >> x;
	sort(v.begin(), v.end());
	cout << binary_search(x);
}