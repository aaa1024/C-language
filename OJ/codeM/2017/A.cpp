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

int f(int x){
	int a = x;
	int n = 1;
	while (a >= 10){
		n *= 10;
		a /= 10;
	}
	return x/n;
}

int main(int argc, char * argv[]) {
 	int l, r;
    while (cin >> l >> r){
    	int cnt[10] = {0};
    	for (int i = l; i <= r; i++){
    		for (int j = 1; j * j <= i; j++){
    			if (i % j == 0){
    				cnt[f(j)]++;
    				if(j * j != i)
    					cnt[f(i / j)]++;
    			}
    		}
    	}
    	for (int i = 1; i <= 9; i++){
    		cout << cnt[i] << endl;
    	}
    }

    return 0;
}