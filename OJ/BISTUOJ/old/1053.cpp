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
 	int m, n;
    while (cin >> m >> n){
    	int min = 100000;
    	int a[1000], b[10000];
    	for (int i = 0; i < m; i++){
    		cin >> a[i];
    	}
    	for (int i = 0; i < n; i++){
    		cin >> b[i];
    	}
    	for (int i = 0; i < m; i++){
    		for (int j = 0; j < n; j++){
    			if (abs(a[i] - b[j]) < min){
    				min = abs(a[i] - b[j]);
    			}
    		}
    	}
    	cout << min << endl;
    }

    return 0;
}