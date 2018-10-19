#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
int a[1005][1005];
bool mark[1005][1005];
int d[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int cnt = 0;
int n, m;
int ok(int x, int y){
    if (x < n && y < m && !mark[x][y] && a[x][y] == 0 && x >= 0 && y >= 0){
        return 1;
    }
    else{
        return 0;
    }
}
void dfs(int x, int y){
//    printf("dfs(%d,%d)\n", x, y);
    mark[x][y] = 1;
    cnt++;
    for (int i = 0; i < 4; i++){
        int nx = x + d[i][0];
        int ny = y + d[i][1];
        if (ok(nx, ny)){
            dfs(nx, ny);
        }
    }
    return;
}
int main(){
    freopen("G.in", "r", stdin);
    int t;

    while(cin >> t)
    while (t--){
        cnt = 0;
        memset(a, 0, sizeof(a));
        memset(mark, 0, sizeof(mark));
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 2){
                //    cout << i << " " << j << endl;
                    dfs(i, j);
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}