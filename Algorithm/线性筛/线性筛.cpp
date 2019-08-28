// #pragma comment(linker, "/STACK:1024000000,1024000000")
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
#define LOCAL
const int maxn = 1e6 + 7;
int read(){
    int x = 0; int zf = 1; char ch = ' ';
    while (ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
    while (ch >= '0' && ch <= '9') x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}

int v[maxn], prime[maxn];
int m = 0;
void primes(int n){
    memset(v, 0, sizeof(v));
    m = 0; // 质数数量
    for (int i = 2; i <= n; i++){
        if (v[i] == 0){v[i] = i;prime[++m] = i;} // i是质数
        // 给当前的i乘上一个质因子
        for (int j = 1; j <= m; j++){
            // i有比prime[j]更小的因子，或者超出n的返回，停止循环
            if (prime[j] > v[i] || prime[j] > n / i) break;
            // prime[j]是合数prime[j]的最小质因子
            v[i * prime[j]] = prime[j];
        }
    }
    for (int i = 1; i <= m; i++){
        cout << prime[i] << endl;
    }
}
int main(int argc, char * argv[]) 
{
    int a;
    while (cin >> a){
        primes(a);
    }
    return 0;
}