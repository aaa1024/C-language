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
	long long n;
//	for (int nn = 1; nn <= 100; nn++){
	while (cin >> n){
		if (n % 2 == 0){
			cout << n / 2 << endl;
			continue;
		}
		long long temp = n;
		long long cnt = 0;
		while (n != 0){
			for (long long i = 2; i * i <= n; i++){
				if (n % i == 0){
					temp = i;
					break;
				}
			}
			n -= temp;
			cnt++;
		}
		cout << cnt << endl;
	}
    return 0;
}