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
	int t;
	cin >> t;
	while (t--){
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if (l1 != l2){
			cout << l1 << " " << l2 << endl;
		}
		else if (l1 != r2){
			cout << l1 << " " << r2 << endl;
		}
		else if (r1 != l2){
			cout << r1 << " " << l2 << endl;
		}
		else if (r1 != r2){
			cout << r1 << " " << r2 << endl;
		}
	}
    return 0;
}