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
#define maxn 100007
const int inf = 0x3f3f3f3f;
long long int n, m, l, p, d, last;
long long int a[maxn], cmd;

void print(){
	for (int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

	while (cin >> n >> m >> l){
		int fault = 0;
		a[0] = -1;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			if (a[i] > l && a[i - 1] <= l){
				fault++;
			}
		}
		for (int i = 1; i <= m; i++){
			cin >> cmd;
			if (cmd == 0){
				cout << fault << endl;
			}
			else if (cmd == 1){
				cin >> p >> d;
				last = a[p];
				a[p] += d;
				if (a[p] > l && last <= l){
					if (p == n){
						if (a[p - 1] <= l){
							fault++;
						}
					}
					else if (p == 1){
						if (a[p + 1] <= l){
							fault++;
						}
					}
					else{
						if (a[p + 1] > l && a[p - 1] > l){
							fault--;
						}
						if (a[p - 1] <= l && a[p + 1] <= l){
							fault++;
						}
					}
				}
			}
		}
	}
    return 0;
}