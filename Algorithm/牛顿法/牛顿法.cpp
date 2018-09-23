#include <cstdio>
#include <cmath>
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
	printf("%lf\n", Sqrt(100));
}