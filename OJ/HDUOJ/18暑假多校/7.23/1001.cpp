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
	int T;
	scanf("%d", &T);
	while (T--){
		long long int n;
		long long int ans;
		scanf("%lld", &n);
		if (n % 3 == 0){
			ans = n * n * n / 27;
		}
		else if (n % 4 == 0){
			ans = n * n * n / 32;
		}
		else{
			ans = -1;
		}
		printf("%lld\n", ans);
	}
    return 0;
}