#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;
template <class type>
int ok(type list[], int k, int i){
	if (i > k){
		for (int t = k; t < i; t++){
			if (list[t] == list[i]) return 0;
		}
	}
	return 1;
}
template <class type>
void Perm(type list[], int k, int m){
	if (k == m){
		for (int i = 0; i <= m; i++) cout << list[i];
		cout << endl;
	}
	else{
		for (int i = k; i <= m; i++){
			if (ok(list, k, i)){
				swap(list[k], list[i]);
				Perm(list, k + 1, m);
				swap(list[k], list[i]);
			}
		}
	}
}

int main(){
	char s[1000];
	int n;
	cin >> n;
	cin >> s;
	Perm(s, 0, n - 1);
}
