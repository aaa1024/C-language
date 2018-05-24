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
 	int t = 'A' - 'a';
 	string a;
    while (cin >> a){
    	for (int i = 0; i < (int)a.size(); i++){
    		if (a[i] >= 'A' && a[i] <= 'Z'){
    			printf("%c", a[i] - t);
    		}
    		else if (a[i] >= 'a' && a[i] <= 'z'){
    			printf("%c", a[i] + t);
    		}
    		else{
    			printf("非字母：%c", a[i]);
    		}
    	}
    	cout << endl;
    }

    return 0;
}