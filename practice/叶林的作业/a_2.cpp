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
	cout << "欢迎进入系统" << endl;
	for (int i = 0; i < 15; i++){
		cout << "*";
	}
	cout << endl << endl;
	for (int i = 0; i < 15; i++){
		cout << "*";
	}
	cout << endl;
	cout << "请输入用户名：";
	cin >> id;
	cout << "请输入密码：";
	cin >> pwd;
	if (id == right_id && right_pwd == pwd){
		cout << "login success!" << endl;
		printf("海南四大名菜\n");
		printf("1---文昌鸡\n");
		printf("2---东山羊\n");
		printf("3---和乐蟹\n");
		printf("4---加积鸭\n");
		cin >> cmd;
		if (cmd == 1){
			printf("文昌鸡xxxxxx\n");
		}
		else if (cmd == 2){
			printf("东山羊xxxxxx\n");
		}
		else if (cmd == 3){
			printf("和乐蟹xxxxxx\n");
		}
		else if (cmd == 4){
			printf("加积鸭xxxxxx\n");
		}
	}
	else{
		cout << "ID or password error!" << endl;
	}
	return 0;
}
