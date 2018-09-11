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
#define maxn 100005
const int inf = 0x3f3f3f3f;
double dp[100007][207];
int main(int argc, char * argv[])
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, k;
    while (cin >> n >> k){
        double d[maxn];
        double sum = 0;
        dp[0][0] = 1.0;
        for (int i = 1; i <= n; i++){
            cin >> d[i];
            sum += d[i];
            dp[i][0] = dp[i - 1][0] * (1.0 - d[i]);
        }
        printf("%.4lf\n", sum);
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i && j <= k; j++){
                    dp[i][j] = dp[i - 1][j] * (1 - d[i]) + dp[i - 1][j - 1] * d[i];
        //      printf("dp[%d][%d] = %.4lf\n", i, j, dp[i][j]);
            }
        }
        printf("%.4lf\n", dp[n][k]);
    }
    return 0;
}