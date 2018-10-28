#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
long long f(long long int n, long long int k){
    if (k == 0) return 1;
    long long int a = 1, b = 1, c = 1;
    for (int i = n; i >= n - k + 1; i--){
        b *= i;
    }
    for (int i = 1; i <= k; i++){
        a *= i;
    }
//    printf("a = ll%d, b = ll%d, c = ll%d\n", a, b, c);
//    printf("f(ll%d, ll%d) = ll%d\n", n, k, a / (b * c));
    return b / a;
}
int main(){
    freopen("A.in", "r", stdin);
    int t;
    while(cin >> t)
    while (t--){
        long long int n;
        int a[100];
        cin >> n;
        a[0] = 1;
        a[1] = 1;
        for (int i = 2; i <= n; i++){
            a[i] = a[i - 1] + a[i - 2];
        }
        cout << a[n] << endl;
    }
    return 0;
}