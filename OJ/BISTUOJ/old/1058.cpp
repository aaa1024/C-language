#include <iostream>
using namespace std;
int main(){
	float x;
	while (cin >> x){
		float y;
		if (x < 3) y = x + 5;
		else if (x == 3) y = 2 * x;
		else if (x > 3 && x < 10) y = 6 * x - 4;
		else if (x >= 10) y = 3 * x - 11;
		printf("x=%.3f,y=%.3f\n", x, y);
	}
	return 0;
}