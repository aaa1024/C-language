#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
	int cmd; 
	ifstream f;
	string right_id, right_pwd;
	string id, pwd;
	f.open("t.txt");
	if (!f.is_open()){
		cout << "can not open" << endl;
		return 0;
	}
	f >> right_id;
	f >> right_pwd;

	for (int i = 0; i < 15; i++){
		cout << "*";
	}
	cout << endl << endl;
	cout << "��ӭ����ϵͳ" << endl;
	for (int i = 0; i < 15; i++){
		cout << "*";
	}
	cout << endl << endl;
	for (int i = 0; i < 15; i++){
		cout << "*";
	}
	cout << endl;
	cout << "�������û�����";
	cin >> id;
	cout << "���������룺";
	cin >> pwd;
	if (id == right_id && right_pwd == pwd){
		cout << "login success!" << endl;
		printf("�����Ĵ�����\n");
		printf("1---�Ĳ���\n");
		printf("2---��ɽ��\n");
		printf("3---����з\n");
		printf("4---�ӻ�Ѽ\n");
		cin >> cmd;
		if (cmd == 1){
			printf("�Ĳ���xxxxxx\n");
		}
		else if (cmd == 2){
			printf("��ɽ��xxxxxx\n");
		}
		else if (cmd == 3){
			printf("����зxxxxxx\n");
		}
		else if (cmd == 4){
			printf("�ӻ�Ѽxxxxxx\n");
		}
	}
	else{
		cout << "ID or password error!" << endl;
	}
	return 0;
}
