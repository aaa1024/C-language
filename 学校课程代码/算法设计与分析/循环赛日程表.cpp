#include <iostream>
#include <vector>
using namespace std;

#define maxn 100
int table[maxn][maxn];
// 构造循环赛日程表的函数
void circle(vector<int> a, int day){
	// 把a分成两个小的vector
	vector<int> t1, t2;
	for (int i = 0; i < a.size(); i++){
		if (i < a.size() / 2){
			t1.push_back(a[i]);
		}
		else{
			t2.push_back(a[i]);
		}
	}
	for (int i = 0; i < t1.size(); i++){
		for (int j = 0; j < t2.size(); j++){
			table[t1[i]][day - j] = t2[(i + j) % t1.size()];
			table[t2[i]][day - j] = t1[(i + j) % t1.size()];
		}
	}
	if (day > 0){
		circle(t1, day / 2);
		circle(t2, day / 2);
	}
}
int main(){
	int n;
	vector<int> a;
	cin >> n;
	for (int i = 1; i <= n; i++){
		a.push_back(i);
	}
	// 因为n支队伍要比n - 1天，所以参数为n - 1
	circle(a, n - 1);
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < n; j++){
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}