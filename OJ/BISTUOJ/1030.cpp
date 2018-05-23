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
 
 	int m;
    while (cin >> m)
    {
    	int c1, c2;
    	if (m < 10000){
    		c1 = 20000;
    		c2 = 10;
    	}
    	else if (m >= 10000){
    		c1 = 40000;
    		c2 = 5;
    	}
    	cout << m << " " << c1 + m * c2 << " " << c2 << endl;
    }

    return 0;
}