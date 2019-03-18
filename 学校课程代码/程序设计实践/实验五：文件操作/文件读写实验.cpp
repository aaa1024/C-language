#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
	int cntN = 0, cntU = 0, cntL = 0; //分别计数数字，大写字母，小写字母
	char ans2[105], input2[105]; //两个char数组，最后用于将string转换成char数组以便写入
	//以二进制的方式打开文件
	fstream file("experient.dat", ios::out|ios::binary);
	//如果不能打开则提示，然后退出程序
	if (!file){
		cout << "Can not open the file" << endl;
		return 0;
	}
	string input; // 输入的字符串
	string ans;  // 最后的文件名
	cin >> input; //输入
	//统计input中出现大小写字母和数字的情况
	for (int i = 0; i < input.size(); i++){
	//	cout << input[i] << " ";
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
	//修改文件名，如果有大写字母，则把A拼接到文件名上
	if (cntU){
		ans += 'A';
	}
	//如果有小写字母，则把a拼接到字符串上
	if (cntL){
		ans += 'a';
	}
	//如果有数字，则把9拼接到字符串上
	if (cntN){
		ans += '9';
	}
	//最后，按照题意加上尾部的文件名
	ans += "-wuliwei-18-6-22";
	//把string类型的ans转成char类型的ans2
	for (int i = 0; i < ans.size(); i++){
		ans2[i] = ans[i]; 
	}
	//并且ans2的尾部元素为'\0'
	ans2[ans.size()] = '\0';
	//写入
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