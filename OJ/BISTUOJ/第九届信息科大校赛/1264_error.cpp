#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
long long int f(long long int n, long long int r )  
{  
    long long int a = 1, b = 1, c = 1;  
    r = min(n,n-r);             //求简单一点的  例如C(5,4) 可以求C（5,1）  
    if( n == 0 )  
        return 1;  
    for (int i = n, j = 1, k = 1;1;i--, j++, k++){
        if (j <= n){
            a *= j;
            a /= __gcd(a, b * c);
        }
        if (i >= n - r){
            b *= i;
            b /= __gcd(a, b * c);
        }
        if (k <= r){
            c *= k;
            c /= __gcd(a, b * c);
        }
        cout << i << " " << j << " " << " " << k << endl;
        if (j > n && i < n - r && k > r) break;
    }
    return a / (b * c);
}  
int main(){
  //  freopen("A.in", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        long long int n;
        cin >> n;
        long long int ans = 0;
        for (long long int i = 0; i <= n / 2; i++){
        //    printf("%lld %lld %lld\n", n - i, i, f(n - i, i));
            ans += f(n - i, i);
        }
        cout << ans << endl;
    }
    return 0;
}
