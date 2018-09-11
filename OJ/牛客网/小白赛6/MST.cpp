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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 1000000
#define LOCAL

const int MAXN = 100000; //最大点数
const int MAXM = 500000;//最大边数
int F[MAXN];

struct Edge{
    int u; // 起点
    int v; // 终点
    int w;
}edge[MAXM];

int tol;

void addEdge(int u, int v, int w){
    edge[tol].u = u;
    edge[tol].v = v;
    edge[tol++].w = w;
}

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

int find(int x){
    if(F[x] == x){
        return x;
    }
    else{
        return F[x] = find(F[x]);
    }
}

int Kruskal(int n){ // 传入点数，返回最小生成树的权值，如果不连通则返回-1
    for (int i = 0; i <= n; i++){
        F[i] = i;
    }
    sort(edge, edge + tol, cmp);

    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < tol; i++){
        int u = edge[i].u;
        int v = edge[i].v;
        int w = edge[i].w;
        int tOne = find(u);
        int tTwo = find(v);
        if (tOne != tTwo){
            ans += w;
            F[tOne] = tTwo;
            cnt++;
        }
        if (cnt++ == n - 1){
            break;
        }
    }
    if (cnt < n - 1){
        return -1;
    }
    else{
        return ans;
    }
}
int main(int argc, char * argv[]) {
//    read("in.txt");
    int n, m;
    while (~scanf("%d%d", &n, &m)){
        ms(F);
        tol = 0;
        int u, v, w;
        for (int i = 0; i < m; i++){
            scanf("%d%d%d", &u, &v, &w);
            addEdge(u, v, w);
        }
        printf("%d\n", Kruskal(n));
    }
    return 0;
}