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
	double a, b, c;
	while (cin >> a >> b >> c){
		if (a == b && b == c){
			printf("一样，都是：%.2lf\n", a);
		}
		else{
			if (a == b){
				printf("%.2lf(2) %.2lf\n", a, c);
			}
			else if (a == c){
				printf("%.2lf(2) %.2lf\n", a, b);
			}
			else if (b == c){
				printf("%.2lf(2) %.2lf\n", b, a);
			}
			else{
				if (a < b){
					swap(a, b);
				}
				if (a < c){
					printf("%.2lf\n", a);
				}
				else{
					printf("%.2lf\n", c);
				}
			}
		}
	}
    return 0;
}