#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
string ans = "";
string ans2 = "";
int LCS_length(const string &str1, const string &str2,
	            vector<vector<int> > &veca, vector<vector<int> > &vecb) {
	int i, j;
	int biggest = 0;
	if (str1 == "" || str2 == "")
		return 0;

	for (i = 0; i <= str1.length(); i++) {
		veca[i][0] = 0;
	}
	for (j = 0; j <= str2.length(); j++) {
		veca[0][j] = 0;
	}
	for (i = 1; i <= str1.length(); i++) {
		for (j = 1; j <= str2.length(); j++) {
			//如果Xi-1 == Yj-1，那么最长子序列为veca[i - 1][j - 1] + 1
			//此时将vecb[i][j] = 1表明str1[i-1]是子问题LCS的一个元素
			if (str1[i - 1] == str2[j - 1]) {
				veca[i][j] = veca[i - 1][j - 1] + 1;
				vecb[i][j] = 1;
			}
			else {
				if (veca[i - 1][j] >= veca[i][j - 1]) {
					veca[i][j] = veca[i - 1][j];
					vecb[i][j] = 2;
				}
				else {
					veca[i][j] = veca[i][j-1];
					vecb[i][j] = 3;
				}
			}
		}
	}
	return veca[str1.length()][str2.length()];
}

//该函数用于输出一个LCS的序列
//这里输出的顺序是先向上寻找，再向左寻找
void PrintOneLCS(vector<vector<int> > &vecb, string &str1, int i, int j) {
	//ans = "";
	if (i == 0 || j == 0)
		return;
	if (vecb[i][j] == 1) {
		PrintOneLCS(vecb, str1, i - 1, j - 1);
		//cout << str1[i - 1] << " ";
		ans += str1[i - 1];
	}
	else if (vecb[i][j] == 2)
		PrintOneLCS(vecb, str1, i -1, j);
	else
		PrintOneLCS(vecb, str1, i, j - 1);
}

int main() {
	//freopen("in.txt", "r", stdin);
	//string input;
	//getline(cin, input);
	//stringstream ss(input);
	int n;
	while (cin >> n){
		//string ans;
		ans = "";
		string str[11];
		for (int i = 1; i <= n; i++){
			cin >> str[i];
			str[i] += str[i];
			//str[i] += str[i];
		}

		//将veca初始化为一个二维数组,其行列值分别为str1和str2的长度加1
		//二维数组veca记录的是两个字符串Xi和Yj的LCS长度
		//二维数组vecb[i][j]记录veca[i][j]时所选择的子问题的最优解
		//vector<vector<int> > veca(str1.length() + 1, vector<int>(str2.length() + 1));
		vector<vector<int> > veca(str[1].length() + 1, vector<int>(str[2].length() + 1));
		vector<vector<int> > vecb(str[1].length() + 1, vector<int>(str[2].length() + 1));
		int lent = LCS_length(str[1], str[2], veca, vecb);
		PrintOneLCS(vecb, str[1], str[1].length(), str[2].length());
		//ans
		ans2 = ans;
		ans = "";
		for (int i = 3; i <= n; i++){
			vector<vector<int> > veca(ans2.length() + 1, vector<int>(str[i].length() + 1));
			vector<vector<int> > vecb(ans2.length() + 1, vector<int>(str[i].length() + 1));
			int lent = LCS_length(ans2, str[i], veca, vecb);
			PrintOneLCS(vecb, ans2, ans2.length(), str[i].length());
			ans2 = ans;
			ans = "";
		}
		//cout << ans << endl;
		//for(int i=0;i<lenth;i++)printf("%c",aa[i]);
		if (ans2 != ""){
			if (ans2.length() % 2 == 0){
				for (int i = 0; i < ans2.length() / 2; i++){
					cout << ans2[i];
				}
				cout << endl;
			}
			else{
				for (int i = 0; i < ans2.length() / 2 + 1; i++){
					cout << ans2[i];
				}
				cout << endl;
			}
		//	cout << ans2 << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}
