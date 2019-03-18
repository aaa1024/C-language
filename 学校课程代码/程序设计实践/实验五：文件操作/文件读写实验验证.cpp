#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
	int cntN = 0, cntU = 0, cntL = 0;

	char ans[105];
	//读入文件
	fstream file("experient.dat", ios::in|ios::binary);
	if (!file){
		cout << "Can not open the file" << endl;
		return 0;
	}

	//读文件名
	file.read((char *)&ans, sizeof(char) * 100);
	printf("%s\n", ans);
	//读标题字符串
	char s1[100];
	file.read((char *)&s1, sizeof(char) * 100);
	printf("%s\n", s1);
	//读字符串长度
	int len;
	file.read((char *)&len, sizeof(char) * 6);
	printf("%d\n", len);
	//读标题字符串和大写字母出现次数
	char s2[100];
	file.read((char *)&s2, sizeof(char) * 100);
	file.read((char *)&cntU, sizeof(char) * 6);
	printf("%s\n",s2);
	printf("%d\n", cntU);
	//读标题字符串和小写字母出现的次数
	char s3[100];
	file.read((char *)&s3, sizeof(char) * 100);
	file.read((char *)&cntL, sizeof(char) * 6);
	printf("%s\n", s3);
	printf("%d\n", cntL);
	//读标题字符串和数字出现的次数
	char s4[100];
	file.read((char *)&s4, sizeof(char) * 100);
	file.read((char *)&cntN, sizeof(char) * 6);
	printf("%s\n", s4);
	printf("%d\n", cntN);
	//最后读取输入的文件内容
	char input2[100];
	file.read((char *) &input2, sizeof(char) * 100);
	printf("%s\n", input2);
	return 0;
}