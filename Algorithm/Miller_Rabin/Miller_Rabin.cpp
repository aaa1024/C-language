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
typedef long long LL;
typedef unsigned long long ULL;
#define ms(s) memset(s, 0, sizeof(s))
#define maxn 10000007
const int inf = 0x3f3f3f3f;
LL prime[6] = {2, 3, 5, 233, 331};
LL qmul(LL x, LL y, LL mod) { // 乘法防止溢出， 如果p * p不爆LL的话可以直接乘； O(1)乘法或者转化成二进制加法
 

    return (x * y - (long long)(x / (long double)mod * y + 1e-3) *mod + mod) % mod;
    /*
	LL ret = 0;
	while(y) {
		if(y & 1)
			ret = (ret + x) % mod;
		x = x * 2 % mod;
		y >>= 1;
	}
	return ret;
	*/
}
LL qpow(LL a, LL n, LL mod) {
    LL ret = 1;
    while(n) {
        if(n & 1) ret = qmul(ret, a, mod);
        a = qmul(a, a, mod);
        n >>= 1;
    }
    return ret;
}
bool Miller_Rabin(LL p) {
    if(p < 2) return 0;
    if(p != 2 && p % 2 == 0) return 0;
    LL s = p - 1;
    while(! (s & 1)) s >>= 1;
    for(int i = 0; i < 5; ++i) {
        if(p == prime[i]) return 1;
        LL t = s, m = qpow(prime[i], s, p);
        while(t != p - 1 && m != 1 && m != p - 1) {
            m = qmul(m, m, p);
            t <<= 1;
        }
        if(m != p - 1 && !(t & 1)) return 0;
    }
    return 1;
}
long long gao(long long n){
	if (n == 1){
		return 1;
	}
	if (n % 2 == 0){
		return n / 2;
	}
	bool flag = 0;
	int temp = 0;
	if (Miller_Rabin(n)){
		return 1;
	}
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0){
			temp = i;
			flag = 1;
			break;
		}
	}
	if (!flag){
		return 1;
	}
	else{
		return gao(n - temp) + 1;
	}
	//		n -= temp;
}
int main(int argc, char * argv[]) 
{
	long long n;
	for (long long i = 1; i <= 1000000; i++){
		if (Miller_Rabin(i)){
			printf("%lld, ", i);
			if (i % 100 == 0){
				cout << endl;
			}
		}
	}
    return 0;
}