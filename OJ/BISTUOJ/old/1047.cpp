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
 	int n, m;
    while (cin >> n >> m){
    	if (n == 0 && m == 0) break;
    	int a[10000];
    	for (int i = 0; i < n; i++){
    		cin >> a[i];
    	}
    	int i = n - 1;
    	while (a[i] >m){
    		a[i + 1] = a[i];
    		i--;
    	}
    	a[i + 1] = m;
    	for (int i = 0; i <= n; i++){
    		cout << a[i] << " ";
    	}
    	cout << endl;
    }

    return 0;
}