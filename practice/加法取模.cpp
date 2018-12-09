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
    int sum = 0;
	for (int i = 1; i <= 30; i += 3){
		sum += i;
	}
	cout << sum << endl;
	cout << sum % 17 << endl;

	sum = 0;
	for (int i = 1; i <= 30; i += 3){
		sum += i;
		sum %= 17;
	}
	cout << sum << endl;
    return 0;
}