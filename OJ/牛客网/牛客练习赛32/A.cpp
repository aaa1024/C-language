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
#define Mod 1000000007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	long long int v, k;
	while (cin >> v >> k){
		if (v >= k){
			long long int sum = 0;
			long long int p = 1;
			for (long long i = 1; i <= v; i++){
					sum %= Mod;
					if (i == 1 || i == v){
					//	cout << i;
						sum += p;
						sum %= Mod;
					}
					else if (i >= (v /2 - (k / 2 - 1) + 1) 
						&& i <= (v / 2 + (k / 2 - 1))){
					//	cout << i;
						sum += p;
						sum %= Mod;
					}
					sum %= Mod;
					p *= 2L;
					p = p % Mod;
			}
			cout << sum << endl;
		}
		else{
			long long sum = 0;
			long long  p = 1;
			sum %= Mod;
			for (long long i = 1; i <= k; i++){
				sum += (p % Mod);
				sum %= Mod;
				p *= 2L;
				p = p % Mod;
			}
			sum %= Mod;
			cout << sum << endl;
		}
	}
    return 0;
}