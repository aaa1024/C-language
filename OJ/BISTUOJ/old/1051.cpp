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
 	string a;
    while (getline(cin, a)){
    	int cnt = 0;
    	for (int i = 0; i < (int)a.size(); i++){
    		if (isalpha(a[i]) && a[i + 1] == ' '){
    			cnt++;
    		}
    	}
    	if (a[(int)a.size() - 1] != ' ') cnt++;
    	cout << cnt << endl;
    }

    return 0;
}