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
	int n;
	while (cin >> n){
		int a[100][100];
		for (int i = 1; i <= n; i++){
			a[i][i] = 1;
			a[i][1] = 1;
		}
		for (int i = 3; i <= n; i++){
			for (int j = 2; j <= i - 1; j++){
				a[i][j] = a[i-1][j - 1] + a[i - 1][j];
			}
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= i; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}