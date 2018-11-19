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
#define maxn 10000007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t;
	double a, b;
	cin >> t;
	while (t--){
		int d;
		cin >> d;
		if (d == 0){
			cout << "Y 0.000000000 0.000000000" << endl;
			continue;
		}
		if (d < 4){
			cout << "N" << endl;
			continue;
		}
		a = ((-d) + sqrt(d * d - 4 * d)) / (-2);
		b = d - a;
		//|(a+b)−a⋅b|≤10−6  and |(a+b)−d|≤10−6.
		if (abs(a + b - a * b) <= 1e-6 && abs((a + b) - d) <= 1e-6){
		//	cout << "Y " << a << " " << b << endl;
			printf("Y %.9lf %.9lf\n", a, b);
		}
		else{
			a = ((-d) - sqrt(d * d - 4 * d)) / (-2);
			b = d - a;
			if (abs(a + b - a * b) <= 1e-6 && abs((a + b) - d) <= 1e-6){
				printf("Y %.9lf %.9lf\n", a, b);
			}
			else{
				cout << "N" << endl;
			}
		}
	}
    return 0;
}