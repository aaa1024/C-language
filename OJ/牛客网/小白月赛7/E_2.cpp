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
	long long n, m;
	while (cin >> n >> m){
		if (m == 1){
			if (n == 1){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
			continue;
		}
		if (n % (m - 1) == 1 || m == 2){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
    return 0;
}