#include <iostream>
using namespace std;
int main(){
	int a[100];
	double sum = 0;
	for (int i = 0; i < 10; i++){
		cin >> a[i];
		sum += a[i];
	}
	double ans = sum / 10.0;
	printf("%.0lf\n%.2lf", sum, ans);
	return 0;
}
