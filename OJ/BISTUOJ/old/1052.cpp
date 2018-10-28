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
pair<int, int> a[100];


int main(int argc, char * argv[]) {
 	for (int i = 1; i <= 10; i++){
 		cin >> a[i].first;
 		a[i].second = i;
 	}
 	sort(a + 1, a + 11);
 	for (int i = 1; i <= 10; i++){
 		cout << a[i].first << " ";
 	}
 	cout << endl;
 	for (int i = 1; i <= 10; i++){
 		cout << a[i].second << " ";
 	}
 	cout << endl;
    return 0;
}