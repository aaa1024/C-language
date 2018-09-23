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
const int inf = 0x3f3f3f3f;
int v[200], w[200];
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    int dp[200][200];
	while (cin >> n){
		int sum = 0;
		for (int i = 0; i < n; i++){
			cin >> v[i];
			sum += v[i];
			w[i] = v[i];
		}
		int W = sum / 2;
		//printf("%d\n", W);
		for (int i = n - 1; i >= 0; i--){
			for (int j = 0; j <= W; j++){
				if (j < w[i]){
					dp[i][j] = dp[i + 1][j];
				}
				else{
					dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
				}
			}
		}
		printf("%d %d\n", dp[0][W], sum - dp[0][W]);
	}
    return 0;
}