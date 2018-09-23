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
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int t , ans[45], a;
	ans[1] = ans[2] = 1;
	for (int i = 3; i <= 45; i++){
		ans[i] = ans[i - 1] + ans[i - 2];
	}
	cin >> t;
	while (t--){
		cin >> a;
		cout << ans[a] << endl;
	}
    return 0;
}