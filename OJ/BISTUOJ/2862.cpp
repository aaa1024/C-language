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
	for (ll i = 1; i <= 1e20; i++){
		ll sum = 1;
//		cout << i << "x" << endl;
		for (ll j = 2; j * j <= i; j++){
			if (i % j == 0){
				sum += j;
				if (i / j != j){
					sum += i / j;
				}
			}
		}
	//	cout << i << " " << sum << endl;
		if (sum == i){
			cout << i << endl;
		}
	}
    return 0;
}