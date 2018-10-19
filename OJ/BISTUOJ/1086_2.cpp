#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(){
	freopen("in.txt", "r", stdin);
	string teamName[1000];
	int fault[1000]; // fault[i] = 0����ϸ�1����������ϸ�2�����������ϸ�3�������˳ɼ����ϸ�
	bool teamGender[1000];
	int Case = 0, n;
	while (1){
		fault[Case] = 0;
		teamGender[Case] = true; //��ʾ��Ů��
		string teamMateName[5];
		int teamMateScore[5];
		string teamMateGender[5];
		cin >> teamName[Case] >> n;
		if (teamName[Case] == "END" && n == 0){
			break;
		}
		if ((int)teamName[Case].size() < 3 || (int)teamName[Case].size() > 20){
			fault[Case] = 1;
		}
		if (n > 3){
			fault[Case] = 2;
		}
		for (int i = 0; i < n; i++){
			cin >> teamMateName[i] >> teamMateGender[i] >> teamMateScore[i];
			if (teamMateScore[i] < 3 && !fault[Case]){
				fault[Case] = 3;
			}
			if (teamMateGender[i] == "M"){
				teamGender[Case] = false;
			}
			if (teamMateScore[i] < 3 && !fault[Case]){
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
			cout << "�ϸ�" << endl;
			R++;
		}
		else{
			if (fault[i] == 1){
				cout << teamName[i] << "��������Ҫ��" << endl;
			}
			else if (fault[i] == 2){
				cout << teamName[i] << "������������Ҫ��" << endl;
			}
			else if (fault[i] == 3){
				cout << teamName[i] << "�����˳ɼ����ϸ�" << endl;
			}
		}
	}
	cout << R << " " << M << endl;
	return 0;
}
