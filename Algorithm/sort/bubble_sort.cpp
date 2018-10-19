#include <cstdio>
#include <iostream>
using namespace std;
void bubble_sort(int *a, int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (a[j] > a[j + 1]){
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	bubble_sort(a, n);
	for (int i = 0; i < n; i++){
		//printf("%d ", a[i]);
		cout << a[i] << ",";
	}
	cout << endl;
}