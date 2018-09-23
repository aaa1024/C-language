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
	int a, b;
	while (cin >> a >> b){
		double c = a / 100.0;
		double d = b / 100.0;
		if (c > (1 - c) * d){
			printf("MWH\n");
		}
		else if (c < (1 - c) * d){
			printf("CSL\n");
		}
		else{
			printf("equal\n");
		}
	}
    return 0;
}