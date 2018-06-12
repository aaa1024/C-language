#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
using namespace std;
int main(){
    freopen("F.in", "r", stdin);
    int n;
    while (cin >> n){
        if (n == 0) break;
        string ans[105];
        char a[105][30];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        char b[1005];
        cin >> b;
        int k = 0;
        for (int i = 0; i < n; i++){
            if (strstr(b, a[i])){
                ans[k++] = a[i];
            }
        }
        sort(ans, ans + k);
        for (int i = 0; i < k; i++){
            cout << ans[i];
            if (i != k - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}