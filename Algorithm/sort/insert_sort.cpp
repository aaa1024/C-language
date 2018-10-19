#include <cstdio>
#include <iostream>
using namespace std;
void insert_sort(int *a, int n){
	for (int i = 1; i < n; i++){
		int temp = a[i];
		int j;
		for (j = i; j > 0 && a[j - 1] > temp; j--){
			a[j] = a[j - 1];
		}
		a[j] = temp;
	}
}
int main(){
	freopen("in.txt", "r", stdin);
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	insert_sort(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}