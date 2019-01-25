#pragma comment(linker, "/STACK:1024000000,1024000000")
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
#define LOCAL



int main(int argc, char * argv[]) 
{
//	freopen("B.in", "r", stdin);
	long long n, a[100007], temp[100007];
	temp[0] = 0;
	while (cin >> n){
		long long sum = 0;
		for (long long i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a + 1, a + 1 + n);
		long long l = 1, r = n;
		long long i = 1;
		while (l <= r){
			temp[i++] = a[r--];
			temp[i++] = a[l++];
		}
		for (long long i = 1; i <= n; i++){
			sum += (temp[i] - temp[i - 1]) * (temp[i] - temp[i - 1]);
		}
		cout << sum << endl;
	}
    return 0;
}