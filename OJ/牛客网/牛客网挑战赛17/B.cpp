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
long long jc(long long int n){ 
	int i;
	long long sum=1;
	if (n == 0) return 1;
	for(i=1;i<=n;i++)
	sum=sum*i;
	return sum;
}
long long int f(long long int n, long long int m){
	if (n < m) return 0;
	else return jc(n)/(jc(n-m)*jc(m));
}

int main(int argc, char * argv[])      
{
	long long int n;
	while (cin >> n){
		long long int ans = 0;
		for (long long int i = 1; i <= n; i++){
			for (long long int j = 0; j <= n; j++){
		//		cout << i << " " << j << " " << f(i, j) << endl;
				ans = (ans + f(i, j) * f(i, j)) % 998244353;
			}
		}
		cout << ans << endl;
	}
    return 0;
}