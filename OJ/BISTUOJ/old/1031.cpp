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



int main(int argc, char * argv[]) 
{
 
 	double x;
    while (cin >> x){
    	double ans;
    	if (x < 1){
    		ans = x;
    	}
    	else if (x >= 1 && x < 10){
    		ans = 2 * x - 1;
    	}
    	else if (x >= 10){
    		ans = 3*x - 11;
    	}
    	printf("x=%.2lf,y=%.2lf\n", x, ans);
    }

    return 0;
}