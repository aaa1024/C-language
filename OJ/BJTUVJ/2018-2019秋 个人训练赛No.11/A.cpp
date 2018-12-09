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
    // 一个座位a元，m个座位b元，他要买n个
	int n, m, a, b;
	while (cin >> n >> m >> a >> b){
		if (m <= n){
			int ans1 = 0, ans2 = 0;
			ans1 += n / m * b;
			if ((n % m) * a < b){
				ans1 += (n % m) * a;
			}
			else{
				ans1 += b;
			}
			ans2 = n * a;
			cout << min(ans1, ans2) << endl;
		}
		else{
			if (b < n * a){
				cout << b << endl;
			}
			else{
				cout << n * a << endl;
			}
		}
	}
    return 0;
}