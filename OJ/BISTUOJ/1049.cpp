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
 	int n;
    while (cin >> n){
    	int a[10000], b[10000];
    	for (int i = 1; i <= n; i++){
    		cin >> a[i];
    	}
    	int m;
    	cin >> m;
    	for (int i = n - m + 1, j = 1; i <= n; i++, j++){
    		b[j] = a[i];
    	}
    	for (int i = m + 1, j = 1; j <= m + 1; i++, j++){
    		b[i] = a[j];
    	}
    	for (int i = 1; i <= n; i++){
    		cout << b[i] << " ";
    	}
    	cout << endl;
    }

    return 0;
}