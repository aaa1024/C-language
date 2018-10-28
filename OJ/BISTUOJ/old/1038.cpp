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
 
 	int n, a;
    while (cin >> n >> a)
    {
    	int s = 0;
    	int temp = 0;
    	for (int i = 1; i <= n; i++){
    		temp = temp * 10 + a;
    		s += temp;
    	}
    	printf("s=%d\n", s);
    }

    return 0;
}