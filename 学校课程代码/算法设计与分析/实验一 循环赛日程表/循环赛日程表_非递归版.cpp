#include <iostream>
#include <vector>
using namespace std;

#define maxn 100
int table[maxn][maxn];
// 构造循环赛日程表的函数
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
	circlen_on_recursion(a);
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < n; j++){
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}