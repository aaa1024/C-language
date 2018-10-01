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
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	long long int f[45];
	f[1] = 3;
	f[2] = 8;
	int n;
	for (int i = 3; i <= 40; i++){
		f[i] = 2 * f[i - 2] + 2 * f[i - 1];
	}
	while (cin >> n){
		cout << f[n] << endl;
	}
    return 0;
}