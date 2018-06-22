#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
	int cntN = 0, cntU = 0, cntL = 0;
	char ans2[105], input2[105];
	fstream file("experient.dat", ios::out|ios::binary);
	if (!file){
		cout << "Can not open the file" << endl;
		return 0;
	}
	string input;
	string ans;
	cin >> input;
	for (int i = 0; i < input.size(); i++){
		cout << input[i] << " ";
		if (input[i] >= '0' && input[i] <= '9'){
			cntN++;
		}
		if (input[i] >= 'a' && input[i] <= 'z'){
			cntL++;
		}
		if (input[i] >= 'A' && input[i] <= 'Z'){
			cntU++;
		}
	}
	if (cntU){
		ans += 'A';
	}
	if (cntL){
		ans += 'a';
	}
	if (cntN){
		ans += '9';
	}
	ans += "-wuliwei-18-6-22";
	for (int i = 0; i < ans.size(); i++){
		ans2[i] = ans[i]; 
	}

	ans2[ans.size()] = '\0';
	file.write((char *)&ans2, sizeof(char) * 100);

	char s1[100] = "len of string";
	file.write((char *)&s1, sizeof(char) * 100);

	int len = ans.size();
	file.write((char *)&len, sizeof(char) * 6);

	char s2[100] = "account of upper case";
	file.write((char *)&s2, sizeof(char) * 100);
	file.write((char *)&cntU, sizeof(char) * 6);

	char s3[100] = "account of lower case";
	file.write((char *)&s3, sizeof(char) * 100);
	file.write((char *)&cntL, sizeof(char) * 6);

	char s4[100] = "account of lower number";
	file.write((char *)&s4, sizeof(char) * 100);
	file.write((char *)&cntN, sizeof(char) * 6);

	for (int i = 0; i < input.size(); i++){
		input2[i] = input[i]; 
	}
	input2[input.size()] = '\0';
	file.write((char *) &input2, sizeof(char) * 100);

	file.close();
	return 0;
}