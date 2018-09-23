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

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t;
	cin >> t;
	string s;
	string zf = "~!@#$%^";
	std::size_t found;
	while (t--){
		cin >> s;
		int capital = 0, lowercase = 0, num = 0, symbol = 0;
		int cnt = 0;
		if (s.size() >= 8 && s.size() <= 16){
			for (int i = 0; i < (int)s.size(); i++){
				if (s[i] >= 'A' && s[i] <= 'Z' && !capital){
					capital++;
					cnt++;
				}
				else if (s[i] >= 'a' && s[i] <= 'z' && !lowercase){
					lowercase++;
					cnt++;
				}
				else if (s[i] >= '0' && s[i] <= '9' && !num){
					num++;
					cnt++;
				}
				else{
					found = zf.find(s[i]);
					if (found!=std::string::npos && !symbol){
						symbol++;
						cnt++;
					}
				}
			}
			if (cnt >= 3){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else{
			cout << "NO" << endl;
		}
	}
    return 0;
}