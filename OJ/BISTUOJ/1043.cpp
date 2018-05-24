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

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

int main(int argc, char * argv[]) {
 	int n;
    while (cin >> n){
    	for (int i = 1; i <= n; i++){
    		for (int j = 1; j <= n - i; j++){
    				cout << " ";
    		}
    		for (int j = 1; j <= 2 * i - 1; j++){
    			cout << "*";
    		}
    		cout << endl;
    	}
       	for (int i = n - 1; i >= 1; i--){
    		for (int j = 1; j <= n - i; j++){
    				cout << " ";
    		}
    		for (int j = 1; j <= 2 * i - 1; j++){
    			cout << "*";
    		}
    		cout << endl;
    	}
    }

    return 0;
}