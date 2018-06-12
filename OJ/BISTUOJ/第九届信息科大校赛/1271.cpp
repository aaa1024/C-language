#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;
int main(){
    int t;
    while(cin >> t){
        while (t--){
            pair<int,int> 
            int n, k;a[1005];
            cin >> n >> k;
            for (int i = 0; i < n; i++){
                cin >> a[i].second >> a[i].first;
            }
            sort(a, a + n);
            int i = 0;
            int ans = 0;
            while (k >= 0){
                if (k >= a[i].first && a[i].second >= 0){
                    ans ++;
                    k -= a[i].first;
                    a[i].second--;
                }
                if (a[i].second <= 0){
                    i++;
                }
                if (a[i].first > k){
                    break;
                }
            }
            cout << ans << endl;
            
        }        
    }

    return 0;
}