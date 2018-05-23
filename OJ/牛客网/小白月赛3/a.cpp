#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a;
	while (cin >> a){
		for (int i = 0; i < (int)a.size(); i++){
			if (a[i] >= 'a' && a[i] < 'e'){
				a[i] = 'a';
			}
			else if (a[i] >= 'e' && a[i] < 'i'){
				a[i] = 'e';
			}
			else if (a[i] >= 'i' && a[i] < 'o'){
				a[i] = 'i';
			}
			else if (a[i] >= 'o' && a[i] < 'u'){
				a[i] = 'o';
			}
			else if (a[i] >= 'u' && a[i] < 'y'){
				a[i] = 'u';
			}
			else if (a[i] >= 'y'){
				a[i] = 'y';
			}
		}
		cout << a << endl;
	}
	return 0;
}