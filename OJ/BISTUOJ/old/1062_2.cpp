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
	int m, n;
	while (cin >> m >> n){
		int ansi = 0, ansj = 0;
		int a[100][100];
		for(int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				int flag_r = 1, flag_c = 1;
				for (int k = 0; k < n; k++){
					if (k == j) continue;
					if (a[i][k] >= a[i][j]){
						flag_r = 0;
						break;
					}
				}
				for (int k = 0; k < m; k++){
					if (k == i) continue;
					if (a[k][j] <= a[i][j]){
						flag_c = 0;
						break;
					}
				}
				if (flag_r && flag_c){
					ansi = i;
					ansj = j;
				}
			}
		}
		printf("Array[%d][%d]=%d\n", ansi, ansj, a[ansi][ansj]);
	}

    return 0;
}