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
	int n, r;
	while (cin >> n >> r){
		int ans[100];
		int k = 0, flag = 0, t = 'A' - 10;
		if (n < 0){
			 n *= -1;
			 flag = 1;	
		}
		while(n > 0){
	//		cout << n % r << endl;
			ans[k++] = n % r;
			n /= r;
		}
		if (flag){
			cout << "-";
		}
		k--;
		for (;k >= 0; k--){
			if (ans[k] > 10){
				printf("%c", ans[k] + t);
			}
			else{
				cout << ans[k];
			}
		}
		cout << endl;
	}
    return 0;
}