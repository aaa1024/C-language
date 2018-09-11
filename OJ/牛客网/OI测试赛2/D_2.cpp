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
    int n;
    while(cin >> n){
		bool a[10007];
		int cnt = 0;
		ms(a);
		for (int i = 1; i <= n; i++){
			for (int j = i; j <= n; j += i){
				a[j] = !a[j];
			}
		}
		for (int i = 1; i <= n; i++){
			if (a[i]) cnt++;
		}
		printf("%d\n", cnt);
	}
    return 0;
}