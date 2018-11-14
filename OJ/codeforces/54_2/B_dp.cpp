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
#define maxn 10000007
const int inf = 0x3f3f3f3f;
long long ans[10000000000];
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
//	for (int nn = 1; nn <= 100; nn++){
	for (int i = 1; i <= 100000000; i++){
		int flag = 0;
		int temp;
		for (int j = 2; j * j <= i; j++){
			if (i % j == 0){
				flag = 1;
				temp = j;
				break;
			}
		}
		if (!flag){
			ans[i] = 1;
		}
		else{
			ans[i] = ans[i - temp] + 1;
		}
	}
	int n;
	while (cin >> n){
		cout << ans[n] << endl;
	}
    return 0;
}