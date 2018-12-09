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
	long long n, a, b;
	while (cin >> n >> a >> b){
		int a1 = a, a2 = a;
		int b1 = b, b2 = b;

		if (n * 6 <= a * b){
			cout << a * b << endl;
			cout << a << " " << b << endl;
		}
		else{
			// 拓b边
			b1 += ((n * 6 - a1 * b1 - 1) / a1 + 1);
			long long ans1 = a1 * b1;
			
			//这是拓宽a
			a2 += ((n * 6 - a2 * b2 - 1) / b2 + 1);
			long long ans2 = a2 * b2;

			if (ans1 < ans2){
				cout << ans1 << endl;
				cout << a1 << " " << b1 << endl;
			}
			else{
				cout << ans2 << endl;
				cout << a2 << " " << b2 << endl;
			}
		}
	}
    return 0;
}