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
#define maxn 1007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("A.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	string s;
	while (cin >> n){
		int flag = 0;
		int count = 0;
		int ans1 = 0, ans2 = 0;
		cin >> s;
		int num[maxn][maxn];
		ms(num);
		num[1][s[0] - 'a']++;
		if (n == 2){
			if (s[0] == s[1]){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
				cout << s << endl;
			}
			continue;
		}
		if (n == 1){
			cout << "NO" << endl;
			continue;
		}
		/*
		for (char i = 'a'; i <= 'z'; i++){
			cout << i << " ";
		}
		cout << endl;
		*/
		for (int i = 1; i < (int)s.size(); i++){
			for (int j = 0; j <= 'z' - 'a'; j++){
				num[i + 1][j] = num[i][j];
			}
			num[i + 1][s[i] - 'a'] = num[i][s[i] - 'a'] + 1;
		}
		/*
		for (int i = 0; i <= (int)s.size(); i++){
			for (int j = 0; j <= 'z' - 'a'; j++){
				printf("%d ", num[i][j]);
			}
			cout << endl;
		}
		*/
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				flag = 0;
				for (int k = 0; k <= 'z' - 'a'; k++){
					count = num[j + 1][k] - num[i][k];
					if (count > (j - i + 1) / 2){
						flag = 1;
						break;
					}
				}
				if (!flag){
					ans1 = i;
					ans2 = j;
					break;
				}
			}
			if (!flag){
				break;
			}
		}
		if (!flag){
			cout << "YES" << endl;
			for (int i = ans1; i <= ans2; i++){
				cout << s[i];
			}
			cout << endl;
		}
		else{
			cout << "NO" << endl;
		}
	//	cout << ans1 << " " << ans2 << endl;
	}
    return 0;
}