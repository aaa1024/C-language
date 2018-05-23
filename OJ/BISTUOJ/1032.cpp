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
 
 	char a;
    while (cin >> a)
    {
    	if (a >= 'A' && a <= 'Z')
    		cout << 1 << endl;
    	else if (a >= 'a' && a <= 'z'){
    		cout << 2 << endl;
    	}
    	else if (a >= '0' && a <= '9'){
    		cout << 3 << endl;
    	}
    	else {
    		cout << 4 << endl;
    	}
    }

    return 0;
}