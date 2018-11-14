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
long long ans[100000];
long long gao(long long n){
	if (n == 1){
		return 1;
	}
	if (ans[n]){
		return ans[n];
	}
	bool flag = 0;
	int temp = 0;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0){
			temp = i;
			flag = 1;
			break;
		}
	}
	if (!flag){
		return 1;
	}
	else{
		ans[n] = gao(n - temp) + 1;
		return ans[n];
	}
	//		n -= temp;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	long long n, temp;
	for (int nn = 1; nn <= 100; nn++){
//	while (cin >> n){
		int n = nn;
		temp = n;
		int cnt = 0;
		while (n != 0){
			for (int i = 2; i * i <= n; i++){
				if (n % i == 0){
					temp = i;
					break;
				}
			}
			cnt++;
			n-= temp;
		}
		cout << nn << " " << cnt << endl;
	}
    return 0;
}