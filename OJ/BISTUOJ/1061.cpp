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
const int inf = 0x3f3f3f3f;
#define LOCAL



int main(int argc, char * argv[]) 
{
	int n;
	int a[100];
	cin >> n;
	while (n--){
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == a[1] && a[1] == a[2]){
			cout << "These numbers are equal." << endl;
		}
		else{
			sort(a, a + 3);
			cout << a[0] << endl;
		}
	}
    return 0;
}