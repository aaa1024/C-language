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
#define LOCAL
int fuck(int x){
	int a = x % 10;
	int b = x / 100;
	int c = x / 10 % 10;
	return a * a * a + b * b * b + c * c * c;
}


int main(int argc, char * argv[]) 
{
 
 	int n, m;
    while (cin >> n >> m)
    {
    	for (int i = n; i <= m; i++){
    		if (fuck(i) == i){
    			cout << i << endl;
    		}
    	}
    }

    return 0;
}