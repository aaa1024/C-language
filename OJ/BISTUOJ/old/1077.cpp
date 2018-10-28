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
	int year, month, day, h, m, s;
	int t;
	cin >> t;
	while (t--){
		scanf("%d/%d/%d-%d:%d:%d", &year, &month, &day, &h, &m, &s);
		if (h >= 12){
			if (h > 12) h -= 12;
			printf("%02d/%02d/%04d-%02d:%02d:%02dpm\n", month, day, year, h, m, s);
		}
		else{
			if (h == 0) h = 12;
			printf("%02d/%02d/%04d-%02d:%02d:%02dam\n", month, day, year, h, m, s);
		}
	}
    return 0;
}