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
#define maxn 2007
const long long inf = 0x3f3f3f3f;

int main() 
{
    //freopen("B.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long n;
	long long a[maxn][maxn];
	long long zhu[maxn * 3];
	long long fu[maxn * 3];
	while (cin >> n){
		ms(zhu);
		ms(fu);
		long long max1 = -1, max2 = -1;
		long long maxi1 = 0, maxi2 = 0;
		long long maxj1 = 0, maxj2 = 0;
		for (long long i = 1; i <= n; i++){
			for (long long j = 1; j <= n; j++){
				cin >> a[i][j];
				zhu[i - j + n] += a[i][j];
				fu[i + j - 1] += a[i][j];
			}
		}
		/*
		for (long long i = 1; i <= (n - 1) * 2 + 1; i++){
			cout << zhu[i] << " ";
		}
		cout << endl;
		for (long long i = 1; i <= (n - 1) * 2 + 1; i++){
			cout << fu[i] << " ";
		}
		cout << endl;
		*/
		for (long long i = 1; i <= n; i++){
			for (long long j = 1; j <= n; j++){
			/*
				zhu[i - j + n] += a[i][j];
				fu[i + j - 1] += a[i][j];
			*/
			//	prlong longf("%d %d,", zhu[i - j + n], fu[i + j - 1]);
				if ((i + j) % 2 == 0){
					if (zhu[i - j + n] + fu[i + j - 1] - a[i][j] > max1){
						max1 = zhu[i - j + n] + fu[i + j - 1] - a[i][j];
						maxi1 = i;
						maxj1 = j;
					}
				}
				else{
					if (zhu[i - j + n] + fu[i + j - 1] - a[i][j] > max2){
						max2 = zhu[i - j + n] + fu[i + j - 1] - a[i][j];
						maxi2 = i;
						maxj2 = j;
					}
				}
			}
		}
		printf("%I64d\n", max1 + max2);
		printf("%I64d %I64d %I64d %I64d\n", maxi1, maxj1, maxi2, maxj2);
	}
    return 0;
}