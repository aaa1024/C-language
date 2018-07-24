#include <bits/stdc++.h>
using namespace std;
 
constexpr int maxn = 20;
bitset<maxn> f[111];
 
signed main() {
    // freopen("in", "r", stdin);
    int n, x, y;
    while(~scanf("%d", &n)) {
        f[0] = 1;
        cout << "f[0]:" << f[0] << endl;
        for(int i = 1; i <= n; i++) {
            scanf("%d%d",&x,&y);
            for(int j = x; j <= y; j++) {
                f[i] |= f[i-1] << (j * j);
                printf("f[%d]:", i);
                cout << f[i] << endl;
            }
        }
        cout << f[n].count() << endl;
    }
    return 0;
}