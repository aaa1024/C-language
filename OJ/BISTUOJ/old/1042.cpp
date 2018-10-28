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
 	int T;
 	cin >> T;
    while (T--){
    	int a, b, flag = 0, mi;
    	int s[100];
    	for (int i = 0; i < 7; i++){
    		cin >> a >> b;
    		s[i] = a + b;
    	}
    	int max = s[0];
    	for (int i = 0; i < 7; i++){
    		if (s[i]> 8){
    			flag = 1;
    			if (s[i] > max){
    				mi = i;
    				max = s[i];
    			}
    		}
    	}
    	if (flag){
    		cout << mi + 1 << endl;
    	}
    	else{
    		cout << 0 << endl;
    	}
    }

    return 0;
}