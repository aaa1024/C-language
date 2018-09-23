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
	long long a[100];
	a[1] = 3;
	a[2] = 6;
	a[3] = 6;
	for (int i = 4; i <= 50; i++){
		a[i] = a[i - 1] + 2 * a[i - 2];
	}
	int n;
	while (cin >> n){
		cout << a[n] << endl;
	}
    return 0;
}