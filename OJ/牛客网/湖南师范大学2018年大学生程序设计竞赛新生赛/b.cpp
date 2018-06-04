#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#define maxn 3005
using namespace std;
long long a[maxn];

int main(){
    long long n, kk;
    while (cin >> n >> kk){
        int all = n * n * n;
        int cnt = 0;
        set<int> sum;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                for (int k = 0; k < n; k++)
                {
                    if (a[i]+a[j]+a[k] == kk){
                        cnt++;
                    }
                }
            }
        }
        if (cnt){
            long long gcd = __gcd(cnt, all);
            printf("%lld/%lld\n", cnt/gcd, all / gcd);
        }
        else{
            cout << "0/1" << endl;
        }
    }
    return 0;
}