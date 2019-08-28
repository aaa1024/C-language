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

int p[maxn], c[maxn];
int m = 0;
void divide(int n){
    m = 0;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            p[++m] = i, c[m] = 0;
            while (n % i == 0) n /= i, c[m]++;
        }
    }
    if (n > 1){
        p[++m] = n, c[m] = 1;
    }
    for (int i = 1; i <= m; i++){
        cout << p[i] << "^" << c[i] << endl;
    }
}

int main(int argc, char * argv[]) 
{
    int n;
    while (cin >> n){
        divide(n);
    }
    return 0;
}