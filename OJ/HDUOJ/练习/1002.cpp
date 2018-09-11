#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int t;
	int Case = 0;
	scanf("%d", &t);
	while (t--){
		string s1, s2;
		int ans[1001], jw = 0, flag = 0, flag2 = 0;
		memset(ans, 0, sizeof(ans));
		cin >> s1 >> s2;

		//保证s1长s2短
		if (s1.size() < s2.size()){
			flag2 = 1;
			swap(s1, s2);
		}
		int len1 = s1.size();
		int len2 = s2.size();
		for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--){
			if (j >= 0){
				int t = (s1[i] - '0' + s2[j] - '0' + jw);
				ans[i] = t % 10;
				jw = t / 10;
				t %= 10;
				if (i == 0 && j == 0 && jw){
					flag = 1;
				}
			}
			else{
				ans[i] = s1[i] - '0' + jw;
				jw = 0;
			}
		}
		printf("Case %d:\n", ++Case);
		if (flag2)
			cout << s2 << " + " << s1 << " = ";
		else
			cout << s1 << " + " << s2 << " = ";
		if (flag) printf("1");
		for (int i = 0; i < len1; i++){
			printf("%d", ans[i]);
		}
		printf("\n");
		if (t){
			cout << endl;
		}
	}
}