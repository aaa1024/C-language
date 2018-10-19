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
#define maxn 10000007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	unsigned long long t;
	cin>>t;
	while(t--){
		unsigned long long  n;
		unsigned long long cnt = 0;
		cin >> n;
		while (n >= 5){
			n /= 5; cnt += n;
		}
		cout << cnt << endl;
	}
    return 0;
}