#include <iostream>
using namespace std;
/*
通过递归求x的y次方
如果y等于0，返回0
如果y等于1,就返回x * getPower(x, y - 1)
如此递归下去，直到y = 1为止，
然后逐层返回，就得到了结果
*/
int getPower(int x, int y){
//	cout << "int" << endl;
	if (y == 0) return 1;
	if (y == 1) return x;
	if (y < 0 ) return 0;
	else{
		return x * getPower(x, y - 1);
	}
}
/*
通过递归求x的y次方
如果y等于0，返回0
如果y等于1,就返回x * getPower(x, y - 1)
如此递归下去，直到y = 1为止，
然后逐层返回，就得到了结果
*/
double getPower(double x, int y){
//	cout << "double" << endl;
	if (y == 0) return 1;
	if (y == 1) return x;
	if (y < 0 ) return 0;
	else{
		return x * getPower(x, y - 1);
	}
}

int main(){
	int a;
	double b;
	int n;
	cout << "Please input a, b, n" << endl;
	cin >> a>> b >> n;
	int ans1 = getPower(a, n);
	printf("a^n = %d\n", ans1);
	double ans2 = getPower(b, n);
	printf("b^n = %lf\n", ans2);
	return 0;
}