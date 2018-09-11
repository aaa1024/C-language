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
	while (t--){
		set<int> myset;
		int a, b;
		int cnt1 = 0, cnt2 = 0, num = 0;
		cin >> a >> b;
		for (int i = 1; i <= a; i++){
			if (a % i == 0){
				myset.insert(i);
				cnt1++;
			}
		}
		set<int>::iterator it;
		for (int i = 1; i <= b; i++){
			if (b % i == 0){
				cnt2++;
				for (it = myset.begin(); it != myset.end(); it++){
					if (*it == i){
						num++;
					}
				}
			}
		}
		printf("%d\n", cnt1 * cnt2 - num + 1);
	}
    return 0;
}