#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		int a[100][10];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < 5; j++){
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++){
			sort(a[i], a[i] + 5);
		}
		for (int i = 0; i < n; i++){
			cout << a[i][4] << endl;
		}
	} 
	return 0;
}
