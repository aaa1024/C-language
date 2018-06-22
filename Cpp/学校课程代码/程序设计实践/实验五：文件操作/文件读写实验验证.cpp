#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
	int cntN = 0, cntU = 0, cntL = 0;

	char ans[105];
	fstream file("experient.dat", ios::in|ios::binary);
	if (!file){
		cout << "Can not open the file" << endl;
		return 0;
	}

	file.read((char *)&ans, sizeof(char) * 100);
	printf("%s\n", ans);

	char s1[100];
	file.read((char *)&s1, sizeof(char) * 100);
	printf("%s\n", s1);

	int len;
	file.read((char *)&len, sizeof(char) * 6);
	printf("%d\n", len);

	char s2[100];
	file.read((char *)&s2, sizeof(char) * 100);
	file.read((char *)&cntU, sizeof(char) * 6);
	printf("%s\n",s2);
	printf("%d\n", cntU);

	char s3[100];
	file.read((char *)&s3, sizeof(char) * 100);
	file.read((char *)&cntL, sizeof(char) * 6);
	printf("%s\n", s3);
	printf("%d\n", cntL);

	char s4[100];
	file.read((char *)&s4, sizeof(char) * 100);
	file.read((char *)&cntN, sizeof(char) * 6);
	printf("%s\n", s4);
	printf("%d\n", cntN);

	char input2[100];
	file.read((char *) &input2, sizeof(char) * 100);
	printf("%s\n", input2);
}