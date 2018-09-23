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
	int n;
	while (cin >> n){
		int a;
		int cnt1 = 0, cnt2 = 0;
		for (int i = 0; i < n; i++){
			cin >> a;
			if (a % 2 == 0){
				cnt1++;
			}
			if (a == 1){
				cnt2++;
			}
		}
		if (cnt1 % 2 == 0 && cnt2 != n){
			printf("Alice\n");
		}
		else{
			printf("Bob\n");
		}
	}
    return 0;
}