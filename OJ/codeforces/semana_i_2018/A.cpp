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
long long p(long long a, long long b){
	long long ans = 1;
	while (b >= 1){
		if (b % 2 == 1){
			ans = (ans * a) % 1000000007;
			b /= 2;
		}
		else{
			a *= a;
			b /= 2;
		}
	}
	return ans;
}
long long Mode(long long a, long long b, long long mode)
{
	long long sum = 1;
	a = a % mode;
 
	while (b > 0) {
		//printf("%lld %lld %lld\n", sum, a, b);
		if (b % 2 == 1)		//判断是否是奇数，是奇数的话将多出来的数事先乘如sum
			sum = (sum * a) % mode;
 

		b /= 2;
		a = (a * a) % mode;// 不断的两两合并再取模，减小a和b的规模
	}
	return sum;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t;
	long long n;
	cin >> t;
//	cout << p(2, t) << endl;

	while (t--){
		scanf("%lld",&n);
		long long k = n / 3;
		long long ans = Mode(2, k - 1, 1000000007);
		printf("%lld\n",ans%1000000007);
	}
    return 0;
}
