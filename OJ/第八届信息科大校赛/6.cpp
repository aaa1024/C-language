#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int fac(int x){
	if (x == 1){
		return 1;
	}
	else return x * fac(x - 1);
}
int main(){
	double x;
	while (scanf("%lf", &x) != EOF){
		double temp = 0;
		double ans = 0;
		int fuhao = 1;
		int n = 1;
		int cnt = 0;
		while (1){
			temp = fuhao * pow(x, n) / (double)fac(n);
			if (abs(temp) < 1e-6)break;
			else ans += temp;
			fuhao *= -1;
			cnt++;
			n += 2;
		}
		printf("%lf %d\n", ans, cnt);
	}
	return 0;
}