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
int d, h = 0, m = 0, s = 0, t = 0, cnt = 0, r = 0;
bool judge(){
	return (abs(h - m) > d && abs(h - s) > d && abs(s - m) > d);
}
int main(int argc, char * argv[]) 
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
	while (scanf("%d", &d) != EOF && d != -1){
	h = 0, m = 0, s = 0, t = 0, cnt = 0, r = 0;
		while (1){
			printf("h:%d m:%d s:%d time:%d cnt:%d\n", h, m, s, t, cnt);
			if (judge()){
				cnt++;
			}
			s++;
			t++;
			if (s % 60 == 0 && s != 0){
				m++;
				if (s == 360) s = 0;
			}
			if (m % 60 == 0 && m != 0){
				h++;
			}

			if (s == 360){
				s = 0;
			}
			if (m == 360){
				m = 0;
			}
			if (h == 360){
				h = 0;
			}
			if (t == 518400){
				break;
			}
		}
		printf("%.3lf", cnt / (double)t); 
	}
    return 0;
}