#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	double a;
	double pq; //器材上p点到q点的距离
	double r_cu; //标准件（黄铜）的电阻
	double std; //标准件接入电路中的电阻
	double L; // 标准件长度
	double a_b; // a/b的值
	double l, lx;  //标准件的示数还有其他件的示数
	double d;  //每次输入直径用的d
	double avg_d[10];  //各个器件的平均直径
	string project[10] = {"黄铜", "紫铜", "铁", "铝"}; //各个器件的名字

	cout << "请先输入各个元器件的10个不同测量点的直径" << endl;
	memset(avg_d, 0, sizeof(avg_d));
	for (int i = 0; i < 4; i++){
		cout << project[i] << ":" << endl;
		for (int j = 1; j <= 10; j++){
			cout << "请输入" << project[i] << "的第" << j << "个直径" << endl;
			cin >> d;
			avg_d[i] += d;
		}
		avg_d[i] /= 10.0;
		cout << project[i] << "的平均直径为:" << avg_d[i] << endl;
	}

	cout << "请输入PQ（器材上P到Q的距离）" << endl;
	cin >> pq;

	cout << "请输入L(标准件的长度，单位为cm)" << endl;
	cin >> L;
	
	cout << "请输入标准件(黄铜)的电阻(1e-4Ω)" << endl;
	cin >> r_cu;
	r_cu /= 10000;

	cout << "请输入标准件的A/B" << endl;
	cin >> a_b;

	cout << "请输入标准件的示数l" << endl;
	cin >> l;
	l /= 100.0;

	std = r_cu * pq / L;
	cout << "标准件电阻" << endl;
	printf("%e\n", std);
	a = std / a_b / l;
	printf("利用标准件求得a = %e\n", a);
	
	for (int i = 0; i < 4; i++){
		cout << project[i] << endl;
		cout << "请输入A/B" << endl;
		cin >> a_b;
		cout << "请输入示数lx" << endl;
		cin >> lx;
		lx /= 100.0;

		double r = a_b * lx * a;
		cout << project[i] << "的电阻为:R = ";
		printf("%e\n", r);

		cout << project[i] << "的电阻为率ρ = ";
		printf("%e\n", M_PI * avg_d[i] * avg_d[i] * r / (4 * pq));

	}

}