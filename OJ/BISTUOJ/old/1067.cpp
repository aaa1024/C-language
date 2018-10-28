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
	string a, b;
	while (cin >> a >> b){
		int cnt = 0;
		int len_a = a.size();
		int len_b = b.size();
		for (int i = 0; i < len_a; i++){
			int flag = 0;
			for (int j = 0; j < len_b; j++){
				if (i + j >= len_a) break;
				if (a[i + j] != b[j]){
					flag = 1;
					break;
				}
			}
			if (!flag){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}