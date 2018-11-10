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
int n, a[maxn];
int cnt = 0, maxa = -1, maxi;
void print(){
	for (int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	printf(" cnt:%d", cnt);
	cout << endl;
}
int main(int argc, char * argv[]) 
{
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		if (a[i] > maxa){
			maxa = a[i];
			maxi = i;
		}
	}
	while (a[maxi] > 0){
		int flag = 0;
		for (int i = 1; i <= n; i++){
			if (i == n){
				cnt++;
				if (a[i] != 0){
					a[i]--;
				}
			}
			else if (a[i] == 0){
				if (flag){
					cnt++;
				}
				while(a[i] == 0){
					i++;
				}
				i--;
			}
			else{
				flag = 1;
				a[i]--;
			}
		}
	//	print();
	}
	cout << cnt << endl;
    return 0;
}
