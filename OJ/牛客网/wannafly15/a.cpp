#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#define maxn 100005
using namespace std;
pair <int, int> b[maxn];


int main(){
    int n, m;
    int i, j;
    int flag = 1;
    while(cin >> n >> m){
        flag = 1;
        if(n > m){
            flag = 0;
        }
        int a[maxn];
        bool mark[maxn];
        int result = 0;
        memset(mark, 0, sizeof(mark));
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < m; i++){
            cin >> b[i].second >> b[i].first;
        }
        if (!flag){
            cout << "-1" << endl;
            continue;
        }
        sort(a, a + n);
        sort(b, b + m);
        for (i = n - 1; i >= 0; i--){
            for (j = 0; j < m; j++) {
                if (mark[j] == 0) {
                    if (a[i] <= b[j].second) {
                        result += b[j].first;
                        mark[j] = 1;
                        break;
                    }
                }
            }
            if (j == m) {
                flag = 0;
                printf("%d\n", -1);
                break;
            }
        }
        if (flag)
            cout << result << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
