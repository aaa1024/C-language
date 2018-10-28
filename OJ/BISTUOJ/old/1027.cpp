#include <iostream>
using namespace std;

int main(){
	double sl, sj, gcb, dkcb, lr, sr, scb, kcb;
	while (cin >> sl >> sj >> gcb >> dkcb){
		sr = sl * sj;
		kcb = sl * dkcb;
		scb = gcb + kcb;
		lr = sr - scb;
		printf("%.2lf\n", lr);
	}
}