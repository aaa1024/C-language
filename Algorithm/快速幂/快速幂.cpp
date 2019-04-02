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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 1000000
#define LOCAL

long long Mode(long long a, long long b, long long mode)
{
	long long sum = 1;
	a = a % mode;
 
	while (b) {
		if (b & 1)		//判断是否是奇数，是奇数的话将多出来的数事先乘如sum
			sum = (sum * a) % mode;
		b >>= 1;
		a = (a * a) % mode;// 不断的两两合并再取模，减小a和b的规模
	}
	return sum;
}

int main(int argc, char * argv[]) {
	printf("%lld\n", Mode(2, 10, 100));
    return 0;
}
