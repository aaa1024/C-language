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



int main(int argc, char * argv[]) {
 	int h, u, d;
    while (cin >> h >> u >> d){
    	int cur = 0;
    	int time = 0;
    	while (cur <= h){
    		cur += u;
    		time++;
    		if (cur >= h) break;
    		cur -= d;
    		time++;
    	}
    	cout << time << endl;
    }

    return 0;
}