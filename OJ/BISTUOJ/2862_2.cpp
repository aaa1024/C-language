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
unsigned long long Mode(unsigned long long a, unsigned long long b, unsigned long long mode)
{
	unsigned long long sum = 1;
	a = a % mode;
 
	while (b > 0) {
	//	printf("%lld %lld %lld\n", sum, a, b);
		if (b % 2 == 1)		//判断是否是奇数，是奇数的话将多出来的数事先乘如sum
			sum = (sum * a) % mode;
 
		b /= 2;
		a = (a * a) % mode;// 不断的两两合并再取模，减小a和b的规模
	}
	return sum;
}
ull multi(ull a, ull b, ull mo){
    ull ans = 0;
    while(b){
        if(b & 1){
            ans += a;
            if(ans >= mo){
                ans -= mo;
            }
        }
        a <<= 1;
        if(a >= mo){
            a -= mo;
            if(a == 0) return ans;
        }
        b >>= 1;
    }
    return ans;
}
unsigned long long gao(unsigned long long x){
//	x %= 1000000007;
//	return multi(x, Mode(2, x , 1000000007), 1000000007);
//	return ((x% 1000000007) * Mode(2, x , 1000000007) % 1000000007);
	return x;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	ull n;
	while (cin >> n){
		ull sum = 0;
		if (n >= 6){
			sum += gao(6);
			sum %= 1000000007;
		}
		if (n >= 28){
			sum += gao(28);
			sum %= 1000000007;
		}
		if (n >= 496){
			sum += gao(496);
			sum %= 1000000007;
		}
		if (n >= 8128){
			sum += gao(8128);
			sum %= 1000000007;
		}
		if (n >= 33550336){
			sum += gao(33550336);
			sum %= 1000000007;
		}
		if (n >= 8589869056){
			sum += gao(8589869056);
			sum %= 1000000007;
		}
		if (n >= 137438691328){
			sum += gao(137438691328);
			sum %= 1000000007;
		}
		if (n >= 2305843008139952128){
			sum += gao(2305843008139952128);
			sum %= 1000000007;
		}
		if (n >= 284){sum += 504;}
		if (n >= 1210){sum += 2394;}
		if (n >= 2924){sum += 5544;}
		if (n >= 5564){sum += 10584;}
		if (n >= 6368){sum += 12600;}
		if (n >= 10856){sum += 21600;}
		if (n >= 14595){sum += 26880;}
		if (n >= 18416){sum += 35712;}
		if (n >= 76084){sum += 139104;}
		if (n >= 66992){sum += 133920;}
		if (n >= 71145){sum += 138240;}
		if (n >= 87633){sum += 157248;}
		if (n >= 88730){sum += 168480;}
		if (n >= 124155){sum += 224640;}
		if (n >= 139815){sum += 262080;}
		if (n >= 123152){sum += 245520;}
		if (n >= 153176){sum += 294840;}
		if (n >= 168730){sum += 311040;}
		if (n >= 176336){sum += 348192;}
		if (n >= 180848){sum += 357120;}

		cout << sum << endl;
	}
    return 0;
}