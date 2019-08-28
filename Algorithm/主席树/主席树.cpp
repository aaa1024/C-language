// #pragma comment(linker, "/STACK:1024000000,1024000000")
// poj2104
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
const int maxn = 1e5 + 7;
int read(){
    int x = 0; int zf = 1; char ch = ' ';
    while (ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
    while (ch >= '0' && ch <= '9') x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}

int n, m, cnt, root[maxn], a[maxn], x, y, k;
struct node{int l, r, sum;} T[maxn * 40];
vector<int> v;
void update(int l, int r, int &x, int y, int pos){
    T[++cnt] = T[y], T[cnt].sum++, x = cnt;
    if (l == r) return;
    int mid = (l + r) / 2;
    if (mid >= pos) update(l, mid, T[x].l, T[y].l, pos);
    else update(mid + 1, r, T[x].r, T[y].r, pos); 
}

int query(int l, int r, int x, int y, int k){
    if (l == r) return l;
    int mid = (l + r) / 2;
    int sum = T[T[y].l].sum - T[T[x].l].sum;
    if (sum >= k) return query(l, mid, T[x].l, T[y].l, k);
    else return query(mid + 1, r, T[x].r, T[y].r, k - sum);
}

int getid(int x){return lower_bound(v.begin(), v.end(), x) - v.begin() + 1;}

int main(int argc, char * argv[]) {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 1; i <= n; i++){
        update(1, n, root[i], root[i - 1], getid(a[i]));
    }
    for (int i = 1; i <= m; i++){
        scanf("%d%d%d", &x, &y, &k);
        printf("%d\n", v[query(1, n, root[x - 1], root[y], k) - 1]);
    }
    return 0;
}