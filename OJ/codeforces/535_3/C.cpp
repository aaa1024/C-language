#pragma comment(linker, "/STACK:1024000000,1024000000")
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
#define LOCAL



int main(int argc, char * argv[]) 
{
	int n;
	string s;
	while (cin >> n){
		cin >> s;
		map<char, int> m0, m1, m2;
		int a0 = 0, a1 = 1, a2 = 2;
		int cnt0 = 0, cnt1 = 0, cnt2 = 0;
		char f0, f1, f2;
		int ans0, ans1, ans2;
		for (; a0 < n; a0 += 3, a1 += 3, a2 += 3){
			if (a0 < n){
				m0[s[a0]]++;
			}
			if (a1 < n){
				m1[s[a1]]++;
			}
			if (a2 < n){
				m2[s[a2]]++;
			}
		}
		int max = 0;
		for (auto it = m0.begin(); it != m0.end(); ++it){
			cnt0 += it->second;
			if (it->second > max){
				max = it->second;
				f0 = it->first;
			}
		}
		ans0 = cnt0 - max;
		max = 0;
		for (auto it = m1.begin(); it != m1.end(); ++it){
			cnt1 += it->second;
			if (it->second > max){
				max = it->second;
				f1 = it->first;
			}
		}
		ans1 = cnt1 - max;
		max = 0;
		for (auto it = m2.begin(); it != m2.end(); ++it){
			cnt2 += it->second;
			if (it->second > max){
				max = it->second;
				f2 = it->first;
			}
		}
		ans2 = cnt2 - max;
		a0 = 0; a1 = 0, a2 = 0;
		for (; a0 < n; a0 += 3, a1 += 3, a2 += 3){
			if (a0 < n){
				s[a0] = f0;
			}
			if (a1 < n){
				s[a1] = f1;
			}
			if (a2 < n){
				s[a2] = f2;
			}
		}
		cout << ans0 + ans1 + ans2 << endl;
		cout << s << endl;
	}
    return 0;
}