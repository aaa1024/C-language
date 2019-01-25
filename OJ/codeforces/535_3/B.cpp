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
	while (cin >> n){
		int a, b;
		int list[10007];
		map<int, int> s;
		std::vector<int> v;
		for (int i = 1; i <= n; i++){
			cin >> list[i];
			s[list[i]]++;
		}
		sort(list + 1, list + 1 + n);
		a = list[n];
		int cnt = 0;
		for (int i = 1; i <= a; i++){
			if (a % i == 0){
				s[i]--;
			}
		}
		for (auto it = s.begin(); it != s.end(); ++it){
			if ((*it).second != 0){
				v.push_back((*it).first);
			}
		}
		sort(v.begin(), v.end());
		b = v[v.size() - 1];
		cout << a << " " << b << endl;
	}
    return 0;
}