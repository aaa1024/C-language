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
//	freopen("1011.in", "r", stdin);
	int T;
	scanf("%d", &T);
	while (T--){
		int a, b;
		int ans_a, ans_b;
		int x, y;
		char s[100];
		scanf("%d%d", &a, &b);
		scanf("%s", s);
//		cout << s << endl;
//		cout << s.size() << endl;
		if (strlen(s) ==5){
			x = s[4] - '0';
			y = 0;
		}
		else if (strlen(s) == 6){
			x = (s[4] - '0') * 10 + (s[5] - '0');
			y = 0;
		}
		else if (strlen(s) == 7){
			x = s[4] - '0';
			y = s[6] - '0';
		}
		else if (strlen(s) == 8){
			x = (s[4] - '0') * 10 + (s[5] - '0');
			y = s[7] - '0';
		}
		if (s[3] == '-'){
			x *= -1;
			y *= -1;
		}
		ans_a = a + (x - 8);
		ans_b = b + y * 6;
		if (ans_b >= 60){
			ans_a += ans_b / 60;
			ans_b -= 60;
		}
		if (ans_b < 0){
			ans_b += 60;
			ans_a--;
		}
		if (ans_a < 0){
			ans_a += 24;
		}
		if (ans_a >= 24){
			ans_a %= 24;
		}
//		printf("x:%d, y:%d\n", x, y);
		printf("%02d:%02d\n", ans_a, ans_b);
	}
    return 0;
}