#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

#define maxn 100
int table[maxn][maxn];
// 构造循环赛日程表的函数
void circle_recursion(vector<int> a, int day){
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
		circle_recursion(t1, day / 2);
		circle_recursion(t2, day / 2);
	}
}
void circlen_on_recursion(vector<int> a){

	for (int CountOfTeam = 2, day = 1; CountOfTeam <= a.size(); CountOfTeam *= 2){
		// CountOfTeam为队伍的容量
		for (int i = 0; i < a.size() / CountOfTeam; i++){
			// 当前处理第i组
			for (int j = 0; j < CountOfTeam / 2; j++){
				for (int k = 0; k < CountOfTeam / 2; k++){
					// 当前组第j个人的第day + k天，要跟当前组的Count / 2
					table[a[i * CountOfTeam + j]][day + k] = a[i * CountOfTeam + CountOfTeam / 2 + (j + k) % (CountOfTeam / 2)];
					table[a[i * CountOfTeam + CountOfTeam / 2 + (j + k) % (CountOfTeam / 2)]][day + k] = a[i * CountOfTeam + j];
				}
			}
		}
		day += CountOfTeam / 2;
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

	circle_recursion(a, n - 1);
	/*
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < n; j++){
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
	*/
}