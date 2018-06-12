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
	int n, m;
	while (cin >> m >> n){
		int a[100][100];
		int b[100][100];
		memset(b, 0, sizeof(b));
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
				if (a[i][j] > b[i][0]){
					b[i][0] = a[i][j];   //记录i行最大的
					b[i][1] = i;        //没什么用
					b[i][2] = j;       // 记录第i行最大值的列数
				}
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				if (i == j) continue;
				if (b[i][0] > a[j][b[i][2]]){
					b[i][3] = 1;
				}
			}
		}
		for (int i = 0; i < m; i++){
			if (b[i][3] != 1){
				printf("Array[%d][%d]=%d\n", b[i][1], b[i][2], b[i][0]);
			}
		}
	}
    return 0;
}