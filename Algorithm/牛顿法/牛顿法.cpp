#include <stdio.h>
#include <math.h>
using namespace std;
double Sqrt(double c){
    if (c < 0) return 0;
    double err = 1e-15;
    double t = c;
    while (abs(t - c/t) > err * t){
        t = (c/t + t) / 2.0;
    }
    return t;
}
int main(){
	double n;
	scanf("%lf", &n);
	printf("%.5lf\n", Sqrt(n));
}