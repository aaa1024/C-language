#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(){
	 freopen("in.txt", "r", stdin);
	string teamName[1000];
	int fault[1000]; // fault[i] = 0代表合格，1代表队名不合格，2代表人数不合格，3代表有人成绩不合格
	bool teamGender[1000];
	int Case = 0, n;
	while (1){
		fault[Case] = 0;
		teamGender[Case] = true; //表示是女队
		string teamMateName[5];
		int teamMateScore[5];
		string teamMateGender[5];
		cin >> teamName[Case] >> n;
		if (teamName[Case] == "END" && n == 0){
			break;
		}
		if (!(teamName[Case][0] >= 'A' && teamName[Case][0]<= 'Z')){
			fault[Case] = 1;
		}
		if ((int)teamName[Case].size() < 3 || (int)teamName[Case].size() > 20){
			fault[Case] = 1;
		}
		if (n > 3){
			fault[Case] = 2;
		}
		for (int i = 0; i < n; i++){
			cin >> teamMateName[i] >> teamMateGender[i] >> teamMateScore[i];
			if (teamMateScore[i] < 3){
				fault[Case] = 3;
			}
			if (teamMateGender[i] == "M"){
				teamGender[Case] = false;
			}
			if (teamMateScore[i] < 3){
				fault[Case] = 3;
			}
		}
		Case++;
	}
	int M = 0, R = 0;
	for (int i = 0; i < Case; i++){
		if (!fault[i]){
			cout << teamName[i];
			if (teamGender[i]){
				M++;
				cout << "[F]";
			}
			cout << "合格！" << endl;
			R++;
		}
		else{
			if (fault[i] == 1){
				cout << teamName[i] << "队名不合要求！" << endl;
			}
			else if (fault[i] == 2){
				cout << teamName[i] << "队伍人数不合要求！" << endl;
			}
			else if (fault[i] == 3){
				cout << teamName[i] << "队有人成绩不合格！" << endl;
			}
		}
	}
	cout << R << " " << M << endl;
	return 0;
}
