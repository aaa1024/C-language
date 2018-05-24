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
#define maxn 100000000


int main(int argc, char * argv[]) {
 	int n;
    while (cin >> n){
    	int a[10000];
    	int max = -maxn;
    	int min = maxn;
    	int maxi, mini;
    	for (int i = 0; i < n; i++){
    		cin >> a[i];
    		if (a[i] > max){
    			max = a[i];
    			maxi = i;
    		}
    		if (a[i] < min){
    			min = a[i];
    			mini = i;
    		}
    	}
    		swap(a[0], a[mini]);
    		swap(a[n - 1], a[maxi]);
    		for (int i = 0; i < n; i++){
    			cout << a[i] << " ";
    		}
    		cout << endl;
    }

    return 0;
}