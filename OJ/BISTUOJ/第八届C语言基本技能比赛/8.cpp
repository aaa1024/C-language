#include <iostream>
#include <cmath>
using namespace std;
struct p
{
	double x;
	double y;
};
double dis(p a, p b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main(){
	
	int n;
	while (cin >> n){
		double sum = 0;
		p aa[1000];
		double area[1000];
		for (int i = 1; i <= n; i++) cin >> aa[i].x >> aa[i].y;
		for (int i = 2, k = 1; i <= n - 1; i++, k++){
			double a = dis(aa[1], aa[i]);
			double b = dis(aa[1], aa[i + 1]);
			double c = dis(aa[i], aa[i + 1]);
			double pp = (a + b + c) / 2;
			area[k] = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
		}
		for (int i = 1; i <= n - 2; i++){
			sum += area[i];
			if (i == 1)
				printf("%.2lf", area[i]);
			else
				printf(" %.2lf", area[i]);
		}
		printf(" %.2lf\n", sum);
	}
	return 0;
}