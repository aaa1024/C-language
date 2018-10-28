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
bool f(int a ){
	for (int i = 2; i * i <= a; i++){
		if (a % i == 0)return false;
	}
	return true;
}


int main(int argc, char * argv[]) {
 	int n;
 	cin >> n;
    while (n--){
    	int a;
    	cin >> a;
    	printf("%d\n", f(a)?1:0);
    }

    return 0;
}