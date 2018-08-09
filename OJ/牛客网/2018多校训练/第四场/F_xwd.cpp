#include <bits/stdc++.h>
using namespace std;

const int maxn = 2222;
const int inf = 0x7f7f7f7f;
char G[maxn][maxn];
int vis[maxn][maxn];
int n, m;
void print(){
  for (int i = 0 ; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("%d",vis[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
signed main() {
  freopen("F.in", "r", stdin);
  int T;
  scanf("%d", &T);
  while(T--) {
    scanf("%d%d",&n,&m);
    memset(G, 0, sizeof(G));
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++) {
      scanf("%s", G[i]);
    }
    int tot = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(G[i][j] == G[n-i-1][m-j-1] &&
           G[i][j] == G[n-i-1][j] &&
           G[i][j] == G[i][m-j-1]) {
          vis[i][j] = 1;
          tot++;
        }
      }
    }
    print();
    if(tot == n * m) {
      int p = n / 2, q = m / 2;
      printf("%d\n", (p - 1) * (q - 1));
      continue;
    }
    int x1 = inf, y1 = inf, x2 = -inf, y2 = -inf;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(!vis[i][j]) {
          x1 = min(x1, i);
          y1 = min(y1, j);
          x2 = max(x2, i);
          y2 = max(y2, j);
        }
      }
    }
    if(x1 == 0 || y1 == 0 || x2 == n - 1 || y2 == m - 1) {
      printf("0\n");
      continue;
    }
    printf("%d\n", x1 * y1);
  }
  return 0;  
}