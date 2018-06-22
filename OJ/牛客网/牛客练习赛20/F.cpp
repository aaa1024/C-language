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
//	freopen("F.in", "r", stdin);
	int n;
	while (cin >> n){
		int a[12], flag = 0;
		int Min = 1e5 + 5, mark = 0, len;
		for (int i = 1; i <= 9; i++){
			cin >> a[i];
			Min = min(a[i], Min);
		}
		len = n / Min;
//		cout << len << endl;
		if (len){
		for (int i = 1; i <= len; i++){
			for (int j = 9; j >= 1; j--){
			//	cout << n << " " << a[j] << endl;
				if (n - a[j] >= (len - i) * Min){
					printf("%d", j);
					n -= a[j];
					break;
				}
			}
		}
		cout << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
    return 0;
}